#include <iostream>
using namespace std;

class Book{
	public:
		string title;
		string author;
		float price;
		int *data;
	Book(){
	title="Untitled";
	author="Anonymous";
	price=0;
	}	
	Book(string title,string author,float price){
		this->title=title;
		this->author=author;
		this->price=price;
	}
	Book(string title){
		this->title=title;
		author="Unknown";
		price=0.0;
	}
	Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
        data=b.data;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout<<"Address: "<<data<<endl;
    }
};

int main(){
	Book book1;
    cout << "Book 1 (Default Constructor):" << endl;
    book1.display();
    cout << endl;

    Book book2("Kite Runner", "Khaled Hosseini", 399.99);
    cout << "Book 2 (Parameterized Constructor):" << endl;
    book2.display();
    cout << endl;

    Book book3 = (book2);
    cout << "Book 3 (Copy Constructor):" << endl;
    book3.display();
    cout << endl;

    Book book4("The Mountains Echoed");
    cout << "Book 4 (Constructor with Default Arguments):" << endl;
    book4.display();
    cout << endl;
    
}
