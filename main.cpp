#include <iostream>
#include <time.h>

using namespace std;

int main() {
    
    srand(time(0)); //declared seed 
    int randomnum = rand() % 100 + 1; //declared random num 
    int guessCount = 0; //counter for guesses 
    int input; // int for user input 
    bool stillPlay = true; // bool to keep track if user wants to keep playing 
    char h; // for yes or no input (y or n) 

cout << "Welcome to guessing game" << endl; 
cout << "Guess a number between 1 and 100\n\n"; 

while(stillPlay == true) {
        cout << "enter a number: ";
        cin >> input; //take in input 
        if (input > randomnum) { //input is greater than random number
            cout << "Your number is too high\n\n"; 
            guessCount++; //iterate counter
        }
        else if (input < randomnum) { //input is less than random number 
                cout << "Your input is too low\n\n";
                guessCount++; //iterate counter
        } 
        else if (input = randomnum) { // input is equal to random number
            cin.clear();
            cout << "You guessed the correct number in " << guessCount + 1 << " guesses! " << endl; //outputs guesscount 
            cout << "Play again?" << endl;
            cout << "enter y for yes or n for no: " << endl;
            cin >> h; 
            switch(h) { //switch statement for yes or no cases
                case 'y':
                main(); //call main function if they want to play again 
                break; 
                case 'n': 
                stillPlay = false; // otherwise still play is false and break 
                break; 
            }

        }
    } 
    return 0; 
}
