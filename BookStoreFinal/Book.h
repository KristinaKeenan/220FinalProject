//
// Created by Kristina Keenan on 11/15/16.
//

#ifndef BOOKSTOREFINAL_BOOK_H
#define BOOKSTOREFINAL_BOOK_H

#include<string>
#include <stdexcept>
#include <iostream>
#include <fstream>
using namespace std;

class Book {

private:
    std::string title;
    int have;
    // how many books we need
    int want;
    //names of people who want the book
    std::string* waitList;
    //count of the number of valid items currently stored in the waitList
    int currItemCount;
    //size of the current waitList
    int currCapacity;

    //pointer to next book
    Book* next;


    //doubles capacity of waitList
    void doubleCapacity();




public:

    //ask for how many you have and want when constructing
    Book();

    //copy constructor
    Book(const Book& bookToCopy);



    //assignment operator
    Book& operator=(const Book& bookToAssign);

    //destructor
    ~Book();


    int getHave();

    int getWant();

    void setHave(int numChanged);

    void setWant(int numChanged);

    std::string getTitle();

    std::string setTitle(std::string newTitle);

    void addPersonWaitList(std::string personName);

    //remove person from beginning of waitlist
    void removePersonWaitList();

    //return the waitlist for the title
    std::string* getWaitList();

    Book* getNext();

    Book* setNext();




};


#endif //BOOKSTOREFINAL_BOOK_H
