# Library Management System

## Problem
The goal of this assignment is to create a simple library management system that can store books and members and perform basic library operations.

A library needs a way to:
- add and remove books
- register and remove members
- check books in and out
- search for books
- generate a report of checked-out (overdue) books

## Solution
I created a `Library` class that manages books and members using vectors.
Each book stores its title, author, ISBN, and whether it is checked out.
Each member stores a unique ID.

The program demonstrates how these features work by adding books and members, checking out a book, and printing a report of checked-out books.

## How It Works
- Books are added to the library and stored in a vector.
- Members are added and stored separately.
- Checking out a book updates its status.
- Searching functions loop through the books to find matches by title, author, or ISBN.
- The overdue report prints all books that are currently checked out.

Video: https://youtu.be/3pRA-6FAfNY
