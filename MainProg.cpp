#include "Library.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    Library lib;
    string bookName;
    string command;
    bool added;
    bool removed;

/*You also need to write a program that creates a Library object and prompts for one of the following
commands:
a bookName //add the book named bookName to the library if not already existing and
//if there is availability
r bookName //remove the book bookName if it exists in the library
p //print the library contents
q //quit the program
Your program should show messages if it cannot successfully add or remove a book. You can
assume that the input command is always valid, and the book name always consists of a single
word.*/
    cin>>command;
    while (command != "q")
    {
        cin >> command;
        if (command == "a")
        {
            cin >> bookName;
            added = lib.addBook(bookName);
            if (added == false)
            {
                cout << "Cannot add the book" << endl;
            }
        }
        else if (command == "r")
        {
            cin >> bookName;
            removed = lib.removeBook(bookName);
            if (removed == false)
            {
                cout << "Cannot remove the book" << endl;
            }
        }
        else if (command == "p")
        {
            lib.print();
        }
    }

    cout<<"Exiting"<<endl;
    


    return 0;

}