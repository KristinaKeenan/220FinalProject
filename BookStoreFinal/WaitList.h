//
// Created by Kristina Keenan on 11/15/16.
//

#ifndef BOOKSTOREFINAL_WAITLIST_H
#define BOOKSTOREFINAL_WAITLIST_H

#include <iostream>
#include <string>

class WaitList {


private:

    //pointer to the start of the array
    std::string* array;
    //count of the number of valid items currently stored in the array
    int currItemCount;
    //size of the current array
    int currCapacity;

    void doubleCapacity();


public:

    //creates an arrayList with a specific initial capacity (defaults to size 5)
    WaitList();

    WaitList(const WaitList& other);

    //Destructor
    ~WaitList();

    WaitList&operator=(const WaitList& waitListToAssign);


    //appends the new item to the end of the arrayList
    void add(std::string personToAdd);

    std::string removeFront();

    std::string printWaitList();



    int getCIC();

    std::string* nameArray();

};




#endif //BOOKSTOREFINAL_WAITLIST_H
