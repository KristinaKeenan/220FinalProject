//
// Created by Kristina Keenan on 11/15/16.
//

#include "WaitList.h"

Person::Person(int initialCapacity){
    this->array = new std::string[initialCapacity];
    this->currCapacity = initialCapacity;
    this->currItemCount = 0;

}

void Person::add(int itemToAdd){

    int tempInt = currItemCount;

    if(currItemCount == currCapacity) {
        doubleCapacity();
    }
    array[tempInt] = itemToAdd;



    currItemCount++;

}

std::string Person::removeFront(){

    tempString = array[0];

    currItemCount--;

    for(int i = 1; i < currItemCount; i++){
        array[i-1] = array[i];


    }

    return tempString;





}

void Person::doubleCapacity(){

    int* tempArray = new int[currCapacity*2];


    for(int i = 0; i<currItemCount; i++){

        tempArray[i] = array[i];

    }

    delete[] array;
    array = nullptr;

    this->array = tempArray;


    this->currCapacity *= 2;


}