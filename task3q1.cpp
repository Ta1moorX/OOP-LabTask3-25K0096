#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << endl;
    }
};

int main() {
    Book b1;
    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();

    Book b2("The Great Gatsby", "F. Scott Fitzgerald", 15.99);
    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();

    Book b3(b2);
    cout << "Book 3 (Copy Constructor):" << endl;
    b3.display();

    Book b4("1984");
    cout << "Book 4 (Constructor with Default Arguments):" << endl;
    b4.display();

    Book b5("To Kill a Mockingbird", "Harper Lee");
    cout << "Book 5 (Constructor with Default Arguments):" << endl;
    b5.display();

    return 0;
}