#include "Library.h"
#include <iostream>

void Library::addBook(std::string title, std::string author, std::string isbn) {
    Book b;
    b.title = title;
    b.author = author;
    b.isbn = isbn;
    b.checkedOut = false;

    books.push_back(b);
}

void Library::removeBook(std::string isbn) {
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

void Library::checkoutBook(std::string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn && books[i].checkedOut == false) {
            books[i].checkedOut = true;
            return;
        }
    }
}

void Library::returnBook(std::string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            books[i].checkedOut = false;
            return;
        }
    }
}

void Library::searchByTitle(std::string title) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].title == title) {
            std::cout << books[i].title << std::endl;
        }
    }
}

void Library::searchByAuthor(std::string author) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].author == author) {
            std::cout << books[i].title << std::endl;
        }
    }
}

void Library::searchByISBN(std::string isbn) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            std::cout << books[i].title << std::endl;
        }
    }
}

void Library::overdueReport() {
    std::cout << "Overdue Books:" << std::endl;

    for (int i = 0; i < books.size(); i++) {
        if (books[i].checkedOut == true) {
            std::cout << books[i].title << std::endl;
        }
    }
}
