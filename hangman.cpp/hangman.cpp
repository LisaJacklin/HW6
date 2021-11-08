// hangman.cpp
// Lisa Jacklin
// CS 201
// 11/3/2021
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cctype> //Preprocessor for modifying characters

using namespace std;

int main()
{
    vector<string> words{
        "Hello",
        "something",
        "Winter",
        "University"
    };
    
    //randomizes shuffle of vector words
    srand(static_cast<unsigned int>(time(0))); 
    random_shuffle(words.begin(), words.end());

    string guessword = words[0];
    string sofar(guessword.size(), '-');
    int wrong = 0;
    char guess;
    string lused = "";
    cout << "----------------Welcome to Hangman!----------------" << endl;
    cout << endl;
    cout << sofar;
    cout << endl;
    vector<char>::iterator k;

    while ((wrong < 8 && sofar != guessword)) {
        cout << "You have " << (10 - wrong) << " guesses left." << endl;
        cout << "For reference, word: " << sofar << endl;
        cout << endl;
        cout << "Guess a letter: ";
        cin >> guess;
        guess = toupper(guess); //cctype preprocessor 'toupper' --> changes character to being in upper case

        while (lused.find(guess) != string::npos) {
            cout << "Letter already guessed." << endl;
            cout << endl;
            cout << "Guess a letter: ";
            cin >> guess;
            guess = toupper(guess);
        }

        if (guessword.find(guess) != string::npos) {
            for (int i = 0; i < guessword.length(); ++i)
                if (guessword[i] == guess) {
                    cout << "Correct! The letter " << guess << " is in the phrase!" << endl;
                    sofar[i] = guess;
                    lused = lused + guess;
                }
        }

        else
        {
            cout << "Incorrect." << endl;
            ++wrong;
            lused = lused + guess;
        }

        if (wrong == 0) {
            cout << "   " << endl;
            cout << endl;
        }
        else if (wrong == 1) {
            cout << "Head Added " << endl;
            cout << endl;
        }
        else if (wrong == 2) {
            cout << " Body Added" << endl;
            cout << endl;
        }
        else if (wrong == 3) {
            cout << "Left arm" << endl;
            cout << endl;
        }
        else if (wrong == 4) {
            cout << "Left hand" << endl;
            cout << endl;
        }
        else if (wrong == 5) {
            cout << "Right arm" << endl;
            cout << endl;
        }
        else if (wrong == 6) {
            cout << "Right hand" << endl;
            cout << endl;
        }
        else if (wrong == 7) {
            cout << "Left leg" << endl;
            cout << endl;
        }
        else if (wrong == 8) {
            cout << "Left foot " << endl;
            cout << endl;
        }
        else if (wrong == 9) {
            cout << "Right leg" << endl;
            cout << endl;
        }
        else if (wrong == 10) {
            cout << " Right foot" << endl;
            cout << endl;
        }

        cout << endl;
        cout << "Characters used: " << lused << endl;

    }

    if (wrong == 10) {
        cout << endl;
        cout << "Unfortunately, you have been hung. The correct phrase: " << guessword << endl;
    }
    else {
        cout << endl;
        cout << "You got the phrase! " << guessword << endl;
    }
}