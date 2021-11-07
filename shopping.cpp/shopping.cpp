// shopping.cpp
// Lisa Jacklin
// CS 201
// 11/3/2021
//

#include <iostream>
#include <algorithm>
#include <map>

struct Record {
    double unitPrice;
    int units;

};

std::map<std::string, Record> storeItems;

int main()
{
    storeItems["gum"] = { 2.50, 5};
    storeItems["milk"] = { 4.75, 2};
    storeItems["candy"] = { 3.58, 8};
    storeItems["fruit"] = { 8.25, 4 };
    storeItems["cereal"] = { 2.99 , 12 };



}

/*
come up with a list of at least 5 items to sell to the user
store these values in a map<string, record> object
Allow the user to add/remove items from the shopping cart
allow for more than one item to be added.
Give an option to see their current shopping cart
 calculate total cost with accumulate() algorithm
*/