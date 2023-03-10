#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char word[30];
    char letter[1];
    char secret[30];
    int wordLength = 0;
    int i = 0;
    int chances = 6;
    int hits = 0;
    bool hit = false;

    cout << "Enter the secret word: ";
    cin >> word;
    system("cls");

    while(word[i] != '\0') {
        i++;
        wordLength++;
    };

    for(i = 0; i < 30; i++) {
        secret[i] = '-';
    }

    while((chances > 0) && (hits < wordLength)){
        cout << "Remaining chances: " << chances << endl;
        cout << "word secret: ";

        for ( i = 0; i < wordLength; i++){
            cout << secret[i];
        };

        cout << endl << "Enter a word: ";
        cin >> letter[0];

        for(i = 0; i < wordLength; i++) {
            if(word[i] == letter[0]) {
                secret[i] = letter[0];
                hit = true;
                hits++;
            };
        };

        if(!hit) {
            chances--;
        };

        hit = false;
        system("cls");
    };

    if(hits == wordLength) {
        cout << "You Win!" << endl;
        cout << "The word was: " << word << endl;
    } else {
        cout << "You Lost!" << endl;
        cout << "The word was: " << word << endl;
    };

};
