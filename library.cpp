#include "Library.h"
#include <iostream>

using namespace std;

void Library::addBook(string title, string author, string isbn) {
    Book b;
    b.title = title;
    b.author = author;
    b.isbn = isbn;
    b.checkedOut = false;

    books.push_back(b);
}

void Library::removeBook(string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            books.erase(books.begin() + i);
            return;
        }
    }
}

void Library::addMember(int id) {
    Member m;
    m.id = id;
    members.push_back(m);
}

void Library::removeMember(int id) {
    for (int i = 0; i < members.size(); i++) {
        if (members[i].id == id) {
            members.erase(members.begin() + i);
            return;
        }
    }
}

void Library::checkoutBook(string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn && books[i].checkedOut == false) {
            books[i].checkedOut = true;
            return;
        }
    }
}

void Library::returnBook(string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            books[i].checkedOut = false;
            return;
        }
    }
}

void Library::searchByTitle(string title) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].title == title) {
            cout << books[i].title << endl;
        }
    }
}

void Library::searchByAuthor(string author) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].author == author) {
            cout << books[i].title << endl;
        }
    }
}

void Library::searchByISBN(string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            cout << books[i].title << endl;
        }
    }
}

void Library::overdueReport() {
    cout << "Overdue Books:" << endl;

    for (int i = 0; i < books.size(); i++) {
        if (books[i].checkedOut == true) {
            cout << books[i].title << endl;
        }
    }
}
