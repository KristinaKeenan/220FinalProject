//
// Created by Mia Kimmich Mitchell on 11/8/2016.
//

#ifndef BOOKSTOREFINAL_INVENTORY_H
#define BOOKSTOREFINAL_INVENTORY_H
#include<string>
#include <stdexcept>
#include <iostream>
#include <fstream>
using namespace std;


class Inventory{


private:
    Book* bookList;




public:

    //constructor
    Inventory();

    //destructor
    ~Inventory();


    //list inventory alphabetically
    void listInventory();



    //I command
    void titleInfo(std::string bookTitle);

    //L command
    void printBookList();

    //A command
    void addBook(std::string bookTitle);


    //O command
    void createOrder();






};





#endif //BOOKSTOREFINAL_INVENTORY_H


