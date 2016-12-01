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
void Inventory::titleInfo(Book* book){



}

//L command
void Inventory::printBookList(){



}

//A command
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
void Inventory::createOrder(order file){



}


//D command (delivery)
//creating purchase order based on comparison of have and want values
//file name?
void Inventory::delivery(order file){



}


//R command
//file name?
//return books if we have more than needed
void Inventory::returnBooks(invoice file){



}


void Inventory::quit(){



}