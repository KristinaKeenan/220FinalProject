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
    std::string author;
    int have;
    int want;
    std::string* waitList;
    //count of the number of valid items currently stored in the waitList
    int currItemCount;
    //size of the current waitList
    int currCapacity;
    //doubles capacity of waitList
    void doubleCapacity();



public:

    int getHave();

    int getWant();

    void setHave(int numChanged);

    void setWant(int numChanged);



};


#endif //BOOKSTOREFINAL_BOOK_H
