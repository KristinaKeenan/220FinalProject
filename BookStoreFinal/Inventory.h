//
// Created by Mia Kimmich Mitchell on 11/8/2016.
//

#ifndef BOOKSTOREFINAL_INVENTORY_H
#define BOOKSTOREFINAL_INVENTORY_H
#include<string>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Book.h"
using namespace std;


class Inventory {
private:
    //pointer to first book
    Book* bookListStart;

    //pointer to last book
    Book* bookListEnd;


    //to go through each line for the close function
    void deliveryParseLine(std::string line);


    //to go through each line for the open function
    void Inventory::startFuncParseLine(std::string line);



        public:

    //constructor
    Inventory();


//    //copy constructor
//    Inventory::Inventory(const Inventory& inventoryToCopy);



//    //assignment operator
//    Inventory& operator=(const Inventory& inventoryToAssign);


    //destructor
//    void ~Inventory();




    //I command
    void titleInfo(std::string bookTitle);

    //L command
    void printBookList();

    //A command
    void add(std::string bookToAdd, int have, int want);


    //M command
    void modify(std::string bookToModify);

    //S command (sell)
    void sell(std::string bookToSell);



//    //O command
//    //file name?
    void createOrder(std::string orderFile);
//
//
//    //D command (delivery)
//    //creating purchase order based on comparison of have and want values
//    //file name?
//    void delivery();
    void delivery(std::string OrderFile);

//
//
//    //R command
//    //file name?
//    //return books if we have more than needed
    void returnBooks();



        //Q command
    void quit();



    //to read through inventory.txt and open it and add to the inventory
    void Inventory::startInventory();



    };





#endif //BOOKSTOREFINAL_INVENTORY_H


