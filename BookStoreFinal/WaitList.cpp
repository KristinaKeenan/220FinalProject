//
// Created by Kristina Keenan on 11/15/16.
//

#include "WaitList.h"

WaitList::WaitList(){
    currCapacity = 5;
    currItemCount = 0;
    array = new std::string[currCapacity];


}



WaitList::WaitList(const WaitList& stackToCopy){
    this->currCapacity = stackToCopy.currCapacity;
    this->currItemCount = stackToCopy.currItemCount;

    //to make a new array and then put all of the data in it
    this->array= new std::string[currCapacity];
    for (int i = 0; i< currItemCount; i++){
        this->array[i]=stackToCopy.array[i];
    }
}


WaitList::~WaitList(){
    delete [] array;
}

void WaitList::add(std::string personToAdd){
    int tempInt = currItemCount;

    if(currItemCount == currCapacity) {
        doubleCapacity();
    }


    array[tempInt] = personToAdd;
    currItemCount++;
}

//TEST
std::string WaitList::removeFront(){

    std::string tempString = array[0];

    currItemCount--;

    for (int i = 0; i< currItemCount; i++){
        array[i]=array[i+1];
    }

    return tempString;

}

void WaitList::doubleCapacity(){

    std::string *tempArray = new std::string[currCapacity*2];


    for(int i = 0; i<currItemCount; i++){

        tempArray[i] = array[i];

    }

    delete[] array;
    array = nullptr;

    this->array = tempArray;


    this->currCapacity *= 2;


}




std::string WaitList::printWaitList(){
    std::string arrayString = "";

    for (int i = 0; i< currItemCount; i++){

        std::cout<< array[i]<< std::endl;

        arrayString = arrayString+ " " + " " +array[i];
    }
    return arrayString;
}


int WaitList::deliveryWaitList(int have){ 
    int haveTemp = have; 
    if(currItemCount>0){ 
        for(int i = 0; i < have; i++){ 
            std::cout<<array[i]<<std::endl; 
            removeFront(); 
            have--; 
        } 
    } 
    return haveTemp;
      }


int WaitList::getCIC() {
    return currItemCount;
}

std::string* WaitList::nameArray() {
    return array;
}