#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>

struct Book {
    std::string title;
    std::string author;
    std::string isbn;
    bool checkedOut;
};

struct Member {
    int id;
};

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;

public:
    void addBook(std::string title, std::string author, std::string isbn);
    void removeBook(std::string isbn);

    void addMember(int id);
    void removeMember(int id);

    void checkoutBook(std::string isbn);
    void returnBook(std::string isbn);

    void searchByTitle(std::string title);
    void searchByAuthor(std::string author);
    void searchByISBN(std::string isbn);

    void overdueReport();
};

#endif
