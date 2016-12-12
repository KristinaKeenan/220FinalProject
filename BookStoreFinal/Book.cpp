//
// Created by Kristina Keenan on 11/15/16.
//

#include "Book.h"
#include "WaitList.h"
//ask for how many you have and want when constructing
Book::Book(std::string title, int have, int want){
    this->title = title;
    this->have = have;
    this->want = want;
    this->waitList = new WaitList();
    this->next = nullptr;
}


//copy constructor
Book::Book(const Book& bookToCopy){
    this->title = bookToCopy.title;
    this->have = bookToCopy.have;
    this->want = bookToCopy.want;
    waitList = new WaitList;
    this->next = bookToCopy.next;
}

//assignment operator
Book& Book::operator=(const Book& bookToAssign){

    if(this != &bookToAssign){

        delete this->next;
        next = nullptr;

        this->title = bookToAssign.title;
        this->have = bookToAssign.have;
        this->want = bookToAssign.want;
        this->next = bookToAssign.next;
        this->waitList = bookToAssign.waitList;

    }


    return *this;

}

//destructor
Book::~Book(){
    //delete waitlist



}


int Book::getHave(){
    return have;
}

int Book::getWant(){
    return want;
}

void Book::setHave(int numChanged){
    have = numChanged;
}

void Book::setWant(int numChanged){
    want = numChanged;
}

std::string Book::getTitle(){
    return title;
}


std::string Book::setTitle(std::string newTitle){
    title = newTitle;
}



void Book::addPersonWaitList(std::string personName){
    waitList->add(personName);

}

//remove person from beginning of waitlist
void Book::removePersonWaitList(){
    waitList->removeFront();

}

//return the waitlist for the title
std::string* Book::getWaitList(){
    waitList->printWaitList();
}



Book* Book::getNext(){
    return next;

}

Book* Book::setNext(Book* newNext){
    next = newNext;
}


//int Book::deliveryWL(int have){ 
//    std::cout<<title<<" is on hold for:"<<std::endl; 
//    int dWL = waitList->deliveryWaitList(have); 
//    std::cout<<std::endl; 
//    return dWL; 
//}

int Book::getWLcic() {
    return waitList->getCIC();
}

std::string* Book::getArray(){
    return waitList->nameArray();
}