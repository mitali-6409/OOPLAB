#include <iostream>
#include <string>
using namespace std;

class Book {
private:
  int bookID;
  string title;
  string author;
  double price;

public:
  // Default constructor with default values
  Book() {
    bookID = 101;
    title = "C++ Programming";
    author = "Bjarne Stroustrup";
    price = 500.00;
  }

  // Parameterized constructor
  Book(int id, string t, string a, double p) {
    bookID = id;
    title = t;
    author = a;
    price = p;
  }

  // Function to display book details
  void display() {
    cout << "Book ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: Rs. " << price << endl;
    cout << "-----------------" << endl;
  }
};

int main() {
  // First book created using default constructor
  Book book1;

  // Variables to store user input
  int id;
  string t, a;
  double p;

  cout << "Enter details for the second book:" << endl;
  
  cout << "Enter Book ID: ";
  cin >> id;
  
  // Clear the input buffer before taking string input with spaces
  cin.ignore(); 
  
  cout << "Enter Title: ";
  getline(cin, t);
  
  cout << "Enter Author: ";
  getline(cin, a);
  
  cout << "Enter Price: Rs. ";
  cin >> p;

  // Second book created using parameterized constructor with user input
  Book book2(id, t, a, p);

  cout << "\nFirst Book Details:" << endl;
  book1.display();

  cout << "Second Book Details:" << endl;
  book2.display();

  return 0;
}
