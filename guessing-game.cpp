#include <iostream>

using namespace std;

int main(){
    int secretNumber = 3;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNumber != guess && !outOfGuesses){
        if(guessCount < guessLimit){
        cout << "Enter guess: ";
        cin >> guess;
        guessCount++;
    }   else{
        outOfGuesses = true;
    }
    }
    if (outOfGuesses){
        cout << "You Lose :P";
    }else{
    cout << "You Win :D";
    return 0;
    }
}