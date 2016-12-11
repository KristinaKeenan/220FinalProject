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

//
////copy constructor
//Inventory::Inventory(const Inventory& inventoryToCopy) {
//
//    if (bookListStart != nullptr) {
//
//
////
////    //intalize the start of list
////    this-> bookListStart = nullptr;
//
//        if (inventoryToCopy.bookListStart != nullptr) {
//            std::string bookTitle = inventoryToCopy.bookListStart->getTitle();
//            this->bookListStart = new Book(bookTitle, 0, 0);
//
//            Book *currNode = inventoryToCopy.bookListStart;
//            Book *copyNode = this->bookListStart;
//
//            currNode = currNode->getNext();
//
//            while (currNode != nullptr) {
//                std::string title = currNode->getTitle();
//                Book *myNode = new Book(title, 0, 0);
//
//                copyNode->setNext(myNode);
//                currNode = currNode->getNext();
//            }
//        }
//    }
//}


//assignment operator
Inventory& Inventory::operator=(const Inventory& inventoryToAssign){
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
void Inventory::printBookList(){

    std::cout<<"Book List: "<<std::endl;

    Book* temp = bookListStart;

    while(temp!=nullptr){
        if (temp->getHave()== 0){
            std::cout<< temp->getTitle()<< " SOLD OUT" <<std::endl;
            temp=temp->getNext();

        }else{
            std::cout<< "Title: "<<temp->getTitle()<< " Have Value: "<< temp->getHave()<< " Want Value: " << temp->getWant()<<std::endl;

            temp = temp->getNext();
        }

    }

}



//A command
//kk
void Inventory::add(std::string bookToAdd){
        Book* temp = bookListStart;
        Book* temp2 = bookListStart;

        bool notAdded = true;
        if (bookListStart== nullptr){
            int want;
            int have;
            std::cout<<"How many books do you have?"<<std::endl;
            cin>>have;

            std::cout<<"How many books do you want?"<<std::endl;



            cin>>want;
            Book* newBook = new Book(bookToAdd,have,want);
            bookListStart = newBook;
            notAdded = false;
        } else {
            int want;
            int have;
            std::cout << "How many books do you have?" << std::endl;
            cin >> have;

            std::cout << "How many books do you want?" << std::endl;
            cin >> want;
            Book *newBook = new Book(bookToAdd, have, want);

            while (temp != nullptr && notAdded) {

                if (temp->getTitle() == bookToAdd) {

                    std::cout << "Book already exists." << std::endl;

                    //delete book


                    notAdded = false;

                } else if (temp->getTitle() < bookToAdd) {
                    temp2=temp;

                    if(temp->getNext()==nullptr){
                        temp->setNext(newBook);
                    }else {
                        temp = temp->getNext();
                    }
//                    notAdded= false;
                } else if (temp->getTitle() > bookToAdd) {

                    temp2->setNext(newBook);

                    newBook->setNext(temp);
                    notAdded = false;
                }
                else{
                    std::cout<<"ERROR"<<std::endl;
                }
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
        add(bookToSell);
        }

    }






//O command
//file name?
void Inventory::createOrder(std::string InventoryList){

    std::ofstream outf(InventoryList);
    if(outf.is_open()){

        Book *currNode = bookListStart;
        while (currNode != nullptr) {
            if ((currNode->getWant()) > (currNode->getHave())) {               // <- new code
                outf << currNode->getTitle() << "*" << (currNode->getWant() - currNode->getHave()) << "\t";
                currNode = currNode->getNext();
            }
        }
        outf.close();
    }
    else {
        std::cout<< "can't write to file."<< std::endl;
    }
}
//R command
//file name?
//return books if we have more than needed
void Inventory::returnBooks(){
    string line;
    string title = "";
    int have;
    ofstream myfile ("returnList.txt");
    if (myfile.is_open()) {
        Book* temp = bookListStart;
        while(temp!= nullptr){
            int difference = temp->getHave()-temp->getWant();
            if(difference>0){
                myfile << "Title: "<<temp->getTitle()<<", Number returned: "<<temp->getHave()-difference << std::endl;
                temp->setHave(difference);
                temp->setWant(0);


            }
            temp = temp->getNext();
        }


    }



    myfile.close();

}


void Inventory::quit(){

    string line;
    string title = "";
    int have;
    ofstream myfile ("Inventory.txt");
    if (myfile.is_open()) {
        Book* temp = bookListStart;
        while(temp!= nullptr){
            std::string* waitList = temp->getArray();
            myfile << "Title: "<<temp->getTitle()<<", Have: "<<temp->getHave()<<", Want: "<<temp->getWant()<<"Waitlist: ";
            for(int i = 0; i < temp->getWLcic(); i++){
                myfile<<waitList[i]<<", ";
            }
            myfile<<std::endl;


            temp = temp->getNext();
        }


    }



    myfile.close();

}

//
//void Inventory::delivery(){
//    string line;
//    string title = "";
//    int have;
//    ifstream myfile ("/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Delivery.txt");
//    if (myfile.is_open())
//    {
//        while ( getline (myfile,line) )
//        {
//            for(int i = 0; i < line.length(); i++){
//                if(line[i]=='*'){
//                    for(int j = 0; j < i; j++){
//                        title = title+line[j];
//                    }
//                    have = int(line[i+1]);
//                }
//            }
//            std::cout<<"Title: "<<title<<", Have: "<<have<<std::endl;
//
//            Book* temp = bookListStart;
//
//            while(temp != nullptr){
//                if(title == temp->getTitle()){
//                    have = bookListStart->deliveryWL(have);
//                    temp->setHave(temp->getHave()+have);
//                    temp = nullptr;
//                }
//                else if(title < temp->getTitle()){
//                    Book* newBook = new Book(title,have,0);
//                          add(newBook->getTitle());
//                }
//                else{
//                    temp = temp->getNext();
//                }
//            }
//
//
//        }
//        myfile.close();
//    }
//
//    else cout << "Unable to open file";
//
//
//
//    myfile.close();
//
//
//
//}


