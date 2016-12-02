//
// Created by Kristina Keenan on 11/15/16.
//

#include "WaitList.h"

WaitList::WaitList(int initialCapacity){
    this->array = new std::string[initialCapacity];
    this->currCapacity = initialCapacity;
    this->currItemCount = 0;

}

void WaitList::add(std::string personToAdd){

    int tempInt = currItemCount;

    if(currItemCount == currCapacity) {
        doubleCapacity();
    }
    array[tempInt] = personToAdd;

    currItemCount++;

}

std::string WaitList::removeFront(){

    tempString = array[0];

    currItemCount--;

    for(int i = 1; i < currItemCount; i++){
        array[i-1] = array[i];
    }

    return tempString;





}

void WaitList::doubleCapacity(){

    int* tempArray = new int[currCapacity*2];


    for(int i = 0; i<currItemCount; i++){

        tempArray[i] = array[i];

    }

    delete[] array;
    array = nullptr;

    this->array = tempArray;


    this->currCapacity *= 2;


}

std::string WaitList::printWaitList(){
    std::string arrayString;
    for (int i = 0; i< currItemCount; i++){
               arrayString = arrayString + array[i];
    }

    std::cout<< arrayString<< std::endl;


}
