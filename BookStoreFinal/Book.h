//
// Created by Kristina Keenan on 11/15/16.
//

#ifndef BOOKSTOREFINAL_BOOK_H
#define BOOKSTOREFINAL_BOOK_H

#include<string>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "WaitList.h"
using namespace std;

class Book {

private:
    std::string title;
    int have;
    // how many books we need
    int want;
    //names of people who want the book
    WaitList* waitList;

    //pointer to next book
    Book* next;



public:

    //ask for how many you have and want when constructing
    Book(std::string title, int have, int want);

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

    Book* setNext(Book* newNext);


};


#endif //BOOKSTOREFINAL_BOOK_H
