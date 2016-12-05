#include <iostream>
#include <fstream>
using namespace std;


int main() {



    bool toContinue = true;

    while (toContinue != false) {

        std::cout << "Bookstore Data Stuff!" << std::endl;

        std::string command;

        std::cout << "Please, enter the key command for what you want to do: ";
        std::getline(std::cin, command);
        std::cout << "you typed: " << command << std::endl;

        //create inventory

        if (command == "H") {
            std::cout << "HELP" << std::endl;
            std::cout << "H (help):Provide a summary of all available commands \n"
                    "I<title> (inqure): Display all information for a specified title\n"
                    "L (list):  List the information for the entire inventory (in alphabetical order by title \n"
                    "A<title> (add): Add a book to the inventory. Prompt for initial want value and have value. If the title already exists, inform the user and print the information for that title \n"
                    "M<title> (modify): Modify the want value for the specified title. Display current want and have values, and prompt user for new want value \n"
                    "S<title> (sell): Decrease the count for the specified title by 1.  If the title doesn't exist yet, it should be added. If the title is sold out (or didn't exist), prompt the user for the buyer's name and enter them on the wait list for that title \n"
                    "O<filename> (order):Create a bulk purchase order for additional books based on a comparison of the have and want values in the inventory. For each book, enough books should be ordered so that, when the order is received, the have value will be equal to the want value\n"
                    "D<filename> (delivery): Take information from a file listing the delivery shipment of books.  The file will contain the title and the count of each book included in the shipment. Read the file, and update the have values in the inventory accordingly (the employee will then shelve the actual books from the shipment). Note that the program must add any item to the inventory if the delivered title is not present in the current inventory (for instance if an extra book not requested was delivered). \n"
                    " \t If there is a wait list for any books delivered, the needed copies of that book should not be added to the inventory or be put on shelves. Instead, the program should print the title of the book and the name of the person it should be put on hold for. The employee then writes a note of whom is picking up the book, and leaves the book by the counter. The book is then considered sold (the person should be removed from wait list)\n"
                    "R<filename> (return): Write a return invoice to a file specifying all books to be returned. For each book, copies should be returned if the have value is higher than the want value. The system should change the have value to equal the want value, and the output file should then give the list of books to take off the shelf and return. \n"
                    "Q (quit): Save the inventory and wait lists in a file and terminate execution." << std::endl;


        } else if (command == "I") {
            std::cout << "INQUIRE" << std::endl;
            std::string book;
            std::cout << "enter the inquired title: ";
            std::getline(std::cin, book);
            std::cout << "Book info for: " << book << std::endl;

            //print info for the book

        } else if (command == "L") {
            std::cout << "LIST" << std::endl;

            //print out all of the inventory

        } else if (command == "A") {
            std::cout << "ADD" << std::endl;

            //prompt for initall want and have valie
            //if title already exists, inform user and print the info
            //else add the title

        } else if (command == "M") {
            std::cout << "MODIFY" << std::endl;
            std::string book;
            std::cout << "enter the title you want to modify: ";
            std::getline(std::cin, book);
            std::cout << "Book info for: " << book << std::endl;


        } else if (command == "S") {
            std::cout << "SELL" << std::endl;
            std::string book;
            std::cout << "enter the title you want to sell: ";
            std::getline(std::cin, book);
            std::cout << "Sell: " << book << std::endl;

            //decrese the count for the specific title by 1
            // if the title doesn't est yet, add
            // if title is sold out (or didn't exist), prompt the
            //user for buyers name and enter then on wait list
        } else if (command == "O") {
            std::cout << "ORDER" << std::endl;

            //Create a bulk purchase order for additional
            // books based on a comparison of the have and want
            // values in the inventory. For each book, enough books
            // should be ordered so that, when the order is received,
            // the have value will be equal to the want value.

        } else if (command == "D") {
            std::cout << "DELIVERY" << std::endl;
            //file stuff


        } else if (command == "R") {
            std::cout << "RETURN" << std::endl;

        } else if (command == "Q") {
            std::cout << "QUIT" << std::endl;
            toContinue = false;

        } else {
            std::cout << "try again" << std::endl;
//            toContinue = false;
        }

    }
}
