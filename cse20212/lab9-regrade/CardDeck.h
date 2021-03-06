//CardDeck.h
// Author: Kat Herring
// Class definition for CardDeck

#include <iostream>
#include <iterator> 
#include <algorithm>
#include "ndvector.h"
#include <cstdlib>
#include <ctime>


using namespace std;

#ifndef _CARDDECK_H_
#define _CARDDECK_H_

class CardDeck {
friend ostream & operator<<( ostream &, CardDeck &);
friend istream & operator>>( istream &, CardDeck &);

public:
	CardDeck(int n = 52);
	int getSize(); //returns size of current deck
	NDVector<int> getDeck();
	void shuffle(); //shuffles deck
	int inOrder(); //checks if elements in non-decreasing order
	int monkeySort(); //randomly shuffles cards until in order
	void playBlackjack();
	bool deal(); //deal cards in blackjack
	int convertCard(int); //convert card to appropriate 2-11 value
	void findWinner(); //who won blackjack game
	int aiPlay(); //AI plays against dealer, returns if dealer will hit or stay
	void print();
private:

	NDVector<int> deck;
	int dealerWins;
	int userWins;
	int dealerScore;
	int userScore;
	int turns; //number of times card dealt in round
	int aiMoney;
	int aiMode;
	int bank; //how much money the dealer has
	int visibleScore;

};

#endif //_CARDDECK_H_
