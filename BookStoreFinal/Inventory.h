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
using namespace std;


class Inventory {


private:
    //pointer to first book
    Book* bookListStart;

    //pointer to last book
    Book* bookListEnd;






public:

    //constructor
    Inventory();


    //copy constructor
    Inventory(const Inventory& inventoryToCopy);



    //assignment operator
    Inventory& operator=(const Inventory& inventoryToAssign);


    //destructor
    ~Inventory();


    //list inventory alphabetically
    void listInventory();



    //I command
    void titleInfo(Book* book);

    //L command
    void printBookList();

    //A command
    void add(std::string bookToAdd);


    //M command
    void modify(Book* bookToModify);

    //S command (sell)
    void sell(Book* bookToSell);



    //O command
    //file name?
    void createOrder(std::string orderFile);


    //D command (delivery)
    //creating purchase order based on comparison of have and want values
    //file name?
    void delivery(std::string orderFile);


    //R command
    //file name?
    //return books if we have more than needed
    void returnBooks(std::String invoiceFile);


    //Q command
    void quit();





};





#endif //BOOKSTOREFINAL_INVENTORY_H


