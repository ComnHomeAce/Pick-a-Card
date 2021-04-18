//This program simulates picking a card from a deck of 52 cards.

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int cardn, suitn;
    string card [13] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
    string suit [4] = { "Spades", "Hearts", "Clubs", "Diamonds" };

    cout << "This program simulates picking a card from a deck of 52 cards.\n\n";

    cardn = rand() % 13;
    suitn = rand() % 4;

    cout << "The card you picked is the " << card[cardn] << " of " << suit[suitn] << ".\n";
}