#include <iostream>
#include <string>
#include <map>
using namespace std;

int lives = 3, max_lives = 3, bandages = 1;
double luck = 0;
map<string, int> items;

void minigames() {
    if (rand() % 2) {
        int number;
        cout << "You've encountered a minigame! Pick a number from 0 to 9.";
        cin >> number;
        for (int i = 0; i < 3; i++) {
            if (rand() % 10 == number) cout << "Congratulations, you've won! Here is your prize: ";
            prizes();
            break;
        }
    }
    else {

    }
}

void prizes() {
    cout << "You've obtained...";
    switch (rand() % 10) {
    case 0:
    case 1:
    case 2: {
        cout << "Bandages! They can heal your wounds! ( +1 healed life)";
        bandages++;
        break;
    }
    case 3:
    case 4: {
        cout << "Prosthesis! It increased your maximum amount of lives! ( +1 life)";
        max_lives++;
        lives++;
        break;
    }
    case 5:
    case 6: {
        int luck = rand() % 10;
        cout << "Amulet! It gave you some luck! ( +)"<<luck<<"% luck)";
        items.insert(pair<string, int>("Amulet", luck));
        break;
    }
    case 7:
    case 8: {
        int luck = (rand() % 10) + 10;
        cout << "Four-leaf clover! It gave you some luck! ( +)" << luck << "% luck";
        items.insert(pair<string, int>("Four-leaf clover", luck));
        break;
    }
    case 9:
        cout << "Oh no! Rat stole your prize!";
    }
}

int room() {
    return 
}

int main(){
    cout << "Hello! Welcome to my little game, specially created for this task!\nMain idea in this game is to stay alive till the end.";
    
}