#include <iostream>
#include <time.h>

using namespace std;

int main() {

    srand(time(0));    
    int randomnum = rand() % 100 + 1; 
    int guessCount = 0; 
    int input; 
    bool stillPlay = true; 
    char h; 

cout << "Welcome to guessing game" << endl; 
cout << "Guess a number between 1 and 100\n\n"; 

while(stillPlay == true) {
        cout << "enter a number: ";
        cin >> input;
        if (input > randomnum) {
            cout << "Your number is too high\n\n"; 
            guessCount++; 
        }
        else if (input < randomnum) {
                cout << "Your input is too low\n\n";
                guessCount++; 
        } 
        else if (input = randomnum) {
            cin.clear();
            cout << "You guessed the correct number in " << guessCount + 1 << " guesses! " << endl; 
            cout << "Play again?" << endl;
            cout << "enter y for yes or n for no: " << endl;
            cin >> h; 
            switch(h) {
                case 'y':
                main(); 
                break; 
                case 'n': 
                stillPlay = false; 
                break; 
            }

        }
    } 
    return 0; 
}
