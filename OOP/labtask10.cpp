#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int availableCopies;  
    
public:
    string title;  
    string author; 
    long ISBN;    

    
    void setCopies(int copies) {
        availableCopies = copies;
    }

    int getCopies() {
        return availableCopies;
    }

    void displayDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main() {
    LibraryBook book; 
    
    cout << "Enter the book's title: ";
    getline(cin, book.title);
    
    cout << "Enter the book's author: ";
    getline(cin, book.author);
    
    cout << "Enter the ISBN number: ";
    cin >> book.ISBN;
    
    int copies;
    cout << "Enter the number of available copies: ";
    cin >> copies;
    
    book.setCopies(copies);
    
    cout << endl << "Book Details:" << endl;
    book.displayDetails();
    
    return 0;
}
