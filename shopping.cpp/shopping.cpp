// shopping.cpp
// Lisa Jacklin
// CS 201
// 11/3/2021
//

#include <iostream>

struct Record {
    std::string unitName;
    double unitPrice;
    int units;

};


int main()
{
    std::cout << "Hello World!\n";
}

//https://www.tutorialspoint.com/cplusplus-program-to-store-and-display-information-using-structure
/*
come up with a list of at least 5 items to sell to the user
store these values in a map<string, record> object
Allow the user to add/remove items from the shopping cart
allow for more than one item to be added.
Give an option to see their current shopping cart
 calculate total cost with accumulate() algorithm
*/