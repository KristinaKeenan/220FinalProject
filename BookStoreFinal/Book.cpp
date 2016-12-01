//
// Created by Kristina Keenan on 11/15/16.
//

#include "Book.h"
//ask for how many you have and want when constructing
Book::Book(std::string title, int have, int want){
    this->title = title;
    this->have = have;
    this->want = want;
    this->waitList = nullptr;
    this->currItemCount = 0;
    this->currCapacity = 10;
    this->next = nullptr;
}

//copy constructor
Book::Book(const Book& bookToCopy){
    this->title = bookToCopy.title;
    this->have = bookToCopy.have;
    this->want = bookToCopy.want;
    this->currItemCount = bookToCopy.currItemCount;
    this->currCapacity = bookToCopy.currCapacity;
    this->waitList = new std::string[this->currCapacity];
    for(int i = 0; i < currItemCount; i++){
        this->waitList[i] = bookToCopy.waitList[i];
    }
    this->next = bookToCopy.next;
}

//assignment operator
Book& Book::operator=(const Book& bookToAssign){



}

//destructor
Book::~Book(){


}


int Book::getHave(){


}

int Book::getWant(){


}

void Book::setHave(int numChanged){


}

void Book::setWant(int numChanged){


}

std::string Book::getTitle(){


}

std::string Book::setTitle(std::string newTitle){



}

void Book::addPersonWaitList(std::string personName){


}

//remove person from beginning of waitlist
void Book::removePersonWaitList(){



}

//return the waitlist for the title
std::string* Book::getWaitList(){



}

Book* Book::getNext(){


}

Book* Book::setNext(){



}

void Book::doubleCapacity() {
    int* tempArray = new int[currCapacity*2];


    for(int i = 0; i<currItemCount; i++){

        tempArray[i] = waitList[i];

    }

    delete[] waitList;
    waitList = nullptr;

    this->waitList = tempArray;


    this->currCapacity *= 2;


}