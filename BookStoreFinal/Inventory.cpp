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
Inventory::Inventory(const Inventory& inventoryToCopy){

   //TO DO
}


//assignment operator
Inventory& Inventory::operator=(const Inventory& inventoryToAssign){



}


//destructor
~Inventory::Inventory() {


}


//list inventory alphabetically
void Inventory::listInventory(){


}



//I command
//inquiry
//print out all info about book
void Inventory::titleInfo(Book* book){
    std::cout<<"Title: "+book.getTitle()<<std::endl;
    std::cout<<"Have: "+book.getHave()<<std::endl;
    std::cout<<"Want: "+book.getWant()<<std::endl;
    std::cout<<"Wait List: "+book.printWaitList()<<std::endl;




}

//L command
void Inventory::printBookList(){

    std::cout<<"Book List: "<<std::endl;

    Book* temp = bookListStart;

    while(temp!=nullptr){
        std::cout<<temp.getTitle<<std::endl;
        temp.getNext();
    }



}

//A command
//kk
void Inventory::add(std::string bookToAdd){



}


//M command
void Inventory::modify(Book* bookToModify){



}

//S command (sell)
void Inventory::sell(Book* bookToSell){


}



//O command
//file name?
void Inventory::createOrder(std::string orderFile){
    std::ofstream outf(orderFile);
    while (current.getNext() != nullptr){
        if (outf){
            outf << title << "," << (want - have) << std::endl;
        }
        else {
            std::cerr << "Could not write to file." << std::endl;
        }
        current = current.getNext();
    }
}


//D command (delivery)
//creating purchase order based on comparison of have and want values
//file name?
void Inventory::delivery(order file){



}


//R command
//file name?
//return books if we have more than needed
void Inventory::returnBooks(invoiceFile){
    std::ofstream outf(invoiceFile);
    while(current.getNext() != nullptr){
        if (outf){
            outf << title << "," << (have - want) << std::endl;
            have = want;
        }
        else{
            std::cerr << "Could not write to file." << std::endl;
        }
        current = current.getNext();
    }


}


void Inventory::quit(){



}