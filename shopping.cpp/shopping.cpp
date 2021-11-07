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
        std::cout << "7. View current cart\n";
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
                std::cout << "Please enter the number of the position.\n";
                //prints all values that are in the users cart
                std::cout << "The Items in your cart are : ";
                printstring(productinCart);
                std::cin >>  remove;

                //removes the position that this item is in.
                numberinCart.erase(numberinCart.begin()+remove);
                productinCart.erase(productinCart.begin() + remove);
                std::cout << "What else would you like to add to your cart?\n";
                std::cin >> choice;
            }
            if (choice == 7) {
                std::cout << "------What's in Your Cart-------\n";
                printstring(productinCart);
                std::cout << "\nIf you'd like to continue shopping, select an Item\n";
                std::cout << "If you'd like to checkout, please enter Zero\n";
                std::cin >> choice;
            }
            if (choice > 7) {
                std::cout << " Woah there! Please pick a different number!\n";
                std::cin >> choice;
            }
        }

       

    }
   

}

void printstring(std::vector <std::string> & a) {

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}

void printint(std::vector <int>& a) {

    for (int i = 0; i < a.size(); i++)
        std::cout << a.at(i) << ' \n';
}

/*
Give an option to see their current shopping cart
 calculate total cost with accumulate() algorithm
*/