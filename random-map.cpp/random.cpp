#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>


int RandomBetweenU(int first, int last) {
	// returns a uniform random number between first and last
	std::random_device r;

	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(first, last);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';

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