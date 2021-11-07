// shopping.cpp
// Lisa Jacklin
// CS 201
// 11/3/2021
//

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>


struct Record {
    int key;
    double unitPrice;
    int units;

};

std::map<std::string, Record> storeItems;

void printstring(std::vector <std::string> & a);
void printint(std::vector <int>& a);

int main()
{
    storeItems["gum"] = {1, 2.50, 5};
    storeItems["milk"] = {2, 4.75, 2};
    storeItems["candy"] = {3, 3.58, 8};
    storeItems["fruit"] = {4, 8.25, 4 };
    storeItems["cereal"] = {5, 2.99 , 12 };


    while (true) {
        int choice;

        std::vector<int> numberinCart;
        std::vector<std::string> productinCart;

        std::cout << "-------------Welcome to the Store!---------------\n";
        std::cout << "What would you like to add to your shopping cart?\n";
        std::cout << "1. Gum\n";
        std::cout << "2. Milk\n";
        std::cout << "3. Candy\n";
        std::cout << "4. Fruit\n";
        std::cout << "5. Cereal\n";
        std::cout << "6. remove an item from your cart\n";
        std::cout << "-----enter zero when complete------\n";
        std::cin >> choice;
        

        while( choice > 0) {
            if (choice == 1) {
                std::cout << "Gum was added to your cart!\n";
                numberinCart.push_back(1);
                productinCart.push_back("gum");
                std::cout << "What else would you like to add to your cart?\n";
                    std::cin >> choice;
            }
            if (choice == 2) {
                std::cout << "Milk was added to your cart!\n";
                numberinCart.push_back(1);
                productinCart.push_back("milk");
                std::cout << "What else would you like to add to your cart?\n";
                std::cin >> choice;
            }
            if (choice == 3) {
                std::cout << "Candy was added to your cart!\n";
                numberinCart.push_back(1);
                productinCart.push_back("Candy");
                std::cout << "What else would you like to add to your cart?\n";
                std::cin >> choice;
            }
            if (choice == 4) {
                std::cout << "Fruit was added to your cart!\n";
                numberinCart.push_back(1);
                productinCart.push_back("Fruit");
                std::cout << "What else would you like to add to your cart?\n";
                std::cin >> choice;
            }
            if (choice == 5) {
                std::cout << "Cereal was added to your cart!\n";
                numberinCart.push_back(1);
                productinCart.push_back("Cereal");
                std::cout << "What else would you like to add to your cart?\n";
                std::cin >> choice;
            }
            if (choice == 6) {
                int remove;
                std::cout << "What would you like to remove?\n";
                printstring(productinCart);
                std::cin >>  remove;
            }
        }

       

    }
   

}

void printstring(std::vector <std::string> & a) {
    std::cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

void printint(std::vector <int>& a) {
    std::cout << "The vector elements are : ";

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

/*
allow for more than one item to be added.
Give an option to see their current shopping cart
 calculate total cost with accumulate() algorithm
*/