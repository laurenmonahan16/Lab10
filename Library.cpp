//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>
using namespace std;
//implement class functions

Library:: Library()
{
    //constructor
    //creates a library with no books
    for(int i = 0; i < 10; i++)
    {
        books[i] = "";
    }
}

bool Library:: addBook(string bookName)
{
    bool ans;
    int counter=0;

    //if book already exists return false
    for(int i=0; i<10; i++)
    {
        if(books[i] != "")
        {
            counter++;
        }

        if(books[i] == bookName)
        {
            ans= false;
            break;
        }
        else if(books[i] == "")
        {
            books[i] = bookName;
            ans= true;
            break;
        }
    }

    if (counter==10)
    {
        ans= false;
    }

    return ans;
}


bool Library::removeBook(string bookName)
{
    bool ans=false;

    for(int i=0; i<10; i++)
    {
        if(books[i] == bookName)
        {
            books[i] = "";
            ans=true;
            break;
        }
    }

    return ans;
}

void Library:: print()
{
    cout<<"Library Contents:"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<books[i]<<endl;
    }
}
