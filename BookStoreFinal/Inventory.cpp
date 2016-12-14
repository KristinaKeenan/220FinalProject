//
// Created by Kristina Keenan on 11/15/16.
//

#include "Inventory.h"
#include <iostream>

using namespace std;


//constructor
Inventory::Inventory() {

    this->bookListStart = nullptr;
    this->bookListEnd = this->bookListStart;

}


//copy constructor
Inventory::Inventory(const Inventory& inventoryToCopy) {

    if (bookListStart != nullptr) {


//
//    //intalize the start of list
//    this-> bookListStart = nullptr;

        if (inventoryToCopy.bookListStart != nullptr) {
            std::string bookTitle = inventoryToCopy.bookListStart->getTitle();
            this->bookListStart = new Book(bookTitle, 0, 0);

            Book *currNode = inventoryToCopy.bookListStart;
            Book *copyNode = this->bookListStart;

            currNode = currNode->getNext();

            while (currNode != nullptr) {
                std::string title = currNode->getTitle();
                Book *myNode = new Book(title, 0, 0);

                copyNode->setNext(myNode);
                currNode = currNode->getNext();
            }
        }
    }
}


//assignment operator
Inventory&Inventory::operator=(const Inventory& inventoryToAssign){
    if(this != &inventoryToAssign){
        while(bookListStart!=nullptr){
            Book* temp = bookListStart;
            bookListStart = bookListStart->getNext();
            delete temp;
            temp = nullptr;
        }
    }

    if(inventoryToAssign.bookListStart==nullptr){
        this->bookListStart = nullptr;
    }
    else{
        bookListStart = new Book(inventoryToAssign.bookListStart->getTitle(),inventoryToAssign.bookListStart->getHave(),inventoryToAssign.bookListStart->getWant());
        Book* currBook = this->bookListStart;
        Book* bookToCopy = inventoryToAssign.bookListStart;
        while(bookToCopy->getNext()!=nullptr){
            bookToCopy-bookToCopy->getNext();
            currBook->setNext(new Book(bookToCopy->getTitle(),bookToCopy->getHave(),bookToCopy->getWant()));
            currBook = currBook->getNext();
        }
    }

return *this;

}


//destructor
Inventory::~Inventory() {
    while (bookListStart != nullptr){
        Book* temp = bookListStart;
        bookListStart= bookListStart->getNext();
        delete temp;
        temp= nullptr;
    }
}




//I command
//Inquiry
void Inventory::titleInfo(std::string book){
    std::cout<<"title info stuff"<< std::endl;
    Book* temp = bookListStart;
    while (temp->getTitle() != book){
        temp->getNext();
    }

    std::cout<<"Title: "<< temp->getTitle()<< std::endl;
    std::cout<< "Want Value: "<< temp->getHave()<< std::endl;
    std::cout<< "Have Value: "<< temp->getWant()<< std::endl;



    std::cout<< "WaitList"<< temp->getWaitList()<< std::endl;

}


//L command

void Inventory::printBookList() {
    Book* temp = bookListStart;

    if(temp == nullptr){
        std::cout<<"No books in the inventory!"<<std::endl;
    }else{
        while(temp != nullptr){
            if(temp->getHave()==0){
                std::cout<<"SOLD OUT of "<<temp->getTitle()<<std::endl;
            }
            else{
                std::cout<<temp->getHave()<<" copies of "<<temp->getTitle()<<std::endl;
            }
        //    std::cout<<temp->getNext()<<std::endl;
            temp = temp->getNext();
        }

    }

}








//M command
void Inventory::modify(std::string bookToModify){
    Book *currNode = bookListStart;


    while (currNode->getTitle()!= bookToModify){
        currNode->getNext();
    }

    //display the want and have values.
    std::cout<< "Title: "<< currNode->getTitle()<< std::endl;
    std::cout<< "The want value: " << currNode->getWant()<< std::endl;
    std::cout<< "The get value: " << currNode->getHave()<< std::endl;

    //set new want value
    int newWantValue;
    std::cout << "Enter new want value: ";
    std::cin >> newWantValue;
    //while less than 0 AND not a int

    while (newWantValue < 0 || std::cin.fail()) {
        std::cout << "Invalid. Enter valid value: ";
        std::cin >> newWantValue;
        newWantValue = newWantValue;
        std::cin.clear();

    }

    currNode->setWant(newWantValue);

}

//S command (sell)
void Inventory::sell(std::string bookToSell){


    //Decrease the count for the specified title by 1.
    // If the title doesn't exist yet, it should be added.
    // If the title is sold out (or didn't exist),
    // prompt the user for the buyer's name and enter them
    // on the wait list for that title.


    //to get the amount of books in the inventory
    Book *counterNode = bookListStart;
    bool foundBook = false;
    int counter =0;
    while (counterNode != nullptr){
        if (counterNode->getTitle()== bookToSell){
            foundBook= true;
            counter++;
            counterNode = counterNode->getNext();
        }else {
            counter++;
            counterNode = counterNode->getNext();
        }
        }

    if (foundBook== true) {
        //to get the book
        int tempCounter = 0;
        Book *currNode = bookListStart;


        while (currNode->getTitle() != bookToSell) {
            tempCounter++;
            currNode->getNext();
        }

        if (currNode->getHave() == 0) {
            std::cout << "This title is sold out. Add user to waitlist" << std::endl;

            //add user to waitlist
            std::string user;
            std::cout << "Enter name to add: ";
            std::cin >> user;
            currNode->addPersonWaitList(user);

            std::cout<<currNode->getWaitList()<< std::endl;


        } else {
            //if it does find the book, then decrease the want have value
            //and book does exist
            //and boook doesn't have a waitlist
            currNode->setHave(currNode->getHave() - 1);
            if (currNode->getHave() == 0) {
                std::cout << "Title found. Have value decreased by 1. SOLD OUT" << std::endl;
            } else {
                std::cout << "Title found. Have value decreased by 1" << std::endl;
            }
        }
    } else{

        // if the book doesn't exist yet

        std::cout << "Book doesn't exist yet. Adding to Inventory...." << std::endl;
        std::cout << "Set have value to 0 and want value to 1." << std::endl;
        add(bookToSell,0,1);
        }

    }




//R command
//file name?
void Inventory::returnBooks(){

    //Write a return invoice to a file specifying all books to be returned.
    // For each book, copies should be returned if the have value is higher
    // than the want value. The system should change the have value to equal
    // the want value, and the output file should then give the list of books
    // to take off the shelf and return.

    ofstream outf ("returnList.txt");
    if (outf.is_open()) {

        Book *currNode = bookListStart;
        while (currNode != nullptr) {


            if (currNode->getHave()> currNode->getWant()) {


                //the amount to add for the have value to be big enough so that the have value will be equal to the want value;
                int changeNum = currNode->getHave() - currNode->getWant();
                currNode->setHave(changeNum);

                outf << currNode->getTitle()<<','<< currNode->getWant() << ','<< currNode->getHave()<< "\n";

            } else {

                outf << currNode->getTitle()<<','<< currNode->getWant() << ','<< currNode->getHave()<< "\n";
            }

            currNode = currNode->getNext();

        }
        outf.close();
    } else {
        std::cout << "can't write to file." << std::endl;
    }
}


void Inventory::quit() {

    std::ofstream outf("Inventory.txt");
    if (outf.is_open()) {

        Book *currNode = bookListStart;
        while (currNode != nullptr) {


            outf << currNode->getTitle() << "," << currNode->getWant() << "," << currNode->getHave() << "\n";
            currNode = currNode->getNext();

        }
        outf.close();
    } else {
        std::cout << "can't write to file." << std::endl;
    }

}


    void Inventory::deliveryParseLine(std::string line) {
        if (line.length() > 0) {
            std::stringstream splitter(line);
            std::string title, want, have;
            getline(splitter, title, ',');
            getline(splitter, want, ',');
            getline(splitter, have, ',');

            //now make objects

            int haveValue = atoi(have.c_str());
            int wantValue = atoi(want.c_str());
            //add books to your store



            Book *currNode = bookListStart;
            while (currNode != nullptr) {

                if (currNode->getTitle()== title){
                    while (currNode->getWaitListCount> 0){

                        std::cout<< "Title: "<< currNode->getTitle()<< "goes to: "<< currNode->removePersonWaitList()<< std::endl;

                    }

                    if (currNode->getWaitListCount ==0){
                        currNode->setHave(haveValue);

                    }


                }else{
                    add(title,haveValue,wantValue);

                }

            }


        }
    }


    void Inventory::delivery(std::string fileName) {
        //CreateOrders.txt

        std::ifstream infile(fileName);

        if (infile) {
            while (infile) {
                std::string strInput;
                getline(infile, strInput);
                deliveryParseLine(strInput);
            }
        } else {
            std::cerr << "File not found." << std::endl;
        }
    }



//O command
//file name?
    void Inventory::createOrder(std::string InventoryList) {

        //CrateOrders.txt

        std::ofstream outf(InventoryList);
        if (outf.is_open()) {

            Book *currNode = bookListStart;
            while (currNode != nullptr) {


                if ((currNode->getWant()) > (currNode->getHave())) {
                    //the amount to add for the have value to be big enough so that the have value will be equal to the want value;
                    int changeNum = currNode->getWant() - currNode->getHave();

                    outf << currNode->getTitle() << "," << currNode->getWant() << ","
                         << (currNode->getHave() + changeNum) << "\n";

                } else {

                    outf << currNode->getTitle() << "," << currNode->getWant() << "," << currNode->getHave() << "\n";
                }

                currNode = currNode->getNext();

            }
            outf.close();
        } else {
            std::cout << "can't write to file." << std::endl;
        }
    }


void Inventory::add(std::string bookToAdd, int have, int want) {
    Book* previousBook = bookListStart;
    Book* currentBook = bookListStart;
    Book* newBook = new Book(bookToAdd,have,want);
    bool notEnd = true;

    //if there are no books in the list, add the new book
    if(bookListStart == nullptr){
        bookListStart = newBook;
        bookListEnd = newBook;

        std::cout<< "this is no books"<< std::endl;
    }else {

        //while there are still books to loop through in the inventory
        while (currentBook != nullptr && notEnd) {

            //if the title of the newBook is the same title as the current book
            if (bookToAdd == currentBook->getTitle()) {

                currentBook->setHave(currentBook->getHave() + have);
                currentBook->setWant(currentBook->getWant() + want);

//                delete newBook;
                std::cout<< "this is the end" << std::endl;

                notEnd = false;

            }
                //if the title of the newBook comes after the current book in the alphabet
            else if (bookToAdd > currentBook->getTitle()) {
                previousBook = currentBook;

                if(currentBook->getNext() != nullptr) {
                    currentBook = currentBook->getNext();
                    // previousBook = previousBook->getNext();

                }
                else{
                    currentBook->setNext(newBook);
                    bookListEnd = newBook;
                    notEnd = false;
                }


            }
                //if the title of the newBook comes before the current book in the alphabet
            else if (bookToAdd < currentBook->getTitle()) {
                if(previousBook == bookListStart && bookListStart->getNext() == nullptr){


                        bookListStart = newBook;
                        newBook-> setNext(previousBook);
                        bookListEnd = previousBook;
                        notEnd = false;




                }
                    else if(currentBook == bookListStart){

                    bookListStart = newBook;
                    newBook->setNext(currentBook);
                    notEnd = false;

                }
                else {

                    previousBook->setNext(newBook);
                    newBook->setNext(currentBook);



                    notEnd = false;

                }
            } else {
                std::cout << "ERROR adding book" << std::endl;
            }
            bookListEnd->setNext(nullptr);


        }

    }
}




void Inventory::startInventory() {
    //CreateOrders.txt

    std:
    ifstream infile("Inventory.txt");

    if (infile) {
        while (infile) {
            std::string strInput;
            getline(infile, strInput);
            startFuncParseLine(strInput);
        }
    } else {
        std::cerr << "File not found." << std::endl;
    }


}


void Inventory::startFuncParseLine(std::string line) {
    if (line.length() > 0) {
        std::stringstream splitter(line);
        std::string title, want, have;
        getline(splitter, title, ',');
        getline(splitter, want, ',');
        getline(splitter, have, ',');

        //now make objects

        int haveValue = atoi(have.c_str());
        int wantValue = atoi(want.c_str());

        //add books to your store

        add(title,haveValue,wantValue);
    }
}
