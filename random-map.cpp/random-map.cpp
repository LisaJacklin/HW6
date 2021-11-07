// random-map.cpp.cpp 
// Lisa Jacklin
// CS 201
// 11/3/2021
//

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>

int main()
{
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
    std::cout << "Randomly-chosen mean: " << mean << '\n';

    // Generate a normal distribution around that mean
    std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
    std::mt19937 e2(seed2);
    std::normal_distribution<> normal_dist(mean, 2);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[std::round(normal_dist(e2))];
    }
    std::cout << "Normal distribution around " << mean << ":\n";
    for (auto p : hist) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
            << p.first << ' ' << std::string(p.second / 200, '*') << '\n';
    }
}

int RandomBetweenU(int first, int last) {
	// returns a uniform random number between first and last
}

int RandomBetweenN(int first, int last) {
	//Returns a normally distributed random number between first and last
}

int RandomBetween(int first, int last) {
	//returns numbers using rand() function from the stdlib <stdlib.h>
}

void PrintDistribution(const std::map <int, int>& numbers) {
	//prints a list of the random numbers clearly show they are normally or 
	//uniformly distributed. (similar to the sample code above)
}

//Compare all three random number generators and print their histograms
//Don't forget to include sample output!