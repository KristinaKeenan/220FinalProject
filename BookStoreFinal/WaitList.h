//
// Created by Kristina Keenan on 11/15/16.
//

#ifndef BOOKSTOREFINAL_WAITLIST_H
#define BOOKSTOREFINAL_WAITLIST_H


class Person {


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
    Person(int initialCapacity = 5);


    //Destructor
    ~Person();

    //appends the new item to the end of the arrayList
    void add(int itemToAdd);

    std::string removeFront();






};




#endif //BOOKSTOREFINAL_WAITLIST_H
