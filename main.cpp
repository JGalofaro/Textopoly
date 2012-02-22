/**
 * Textopoly!
 * Author: Josh Galofaro
 * Start Date: 2-21-12
 *
 * Textopoly is a text based, command-line game of Monopoly.
 **/
#include <iostream>
#include <cstdlib>
#include "dice.h"
#include "util.h"
using namespace std;

const int houseMax = 32; 	//Total number of houses
const int hotelMax = 12;	//Total number of hotels
const int chanceMax = 16;	//Total number of chance cards
const int communityMax = 16; 	//Total number of community chests
const int starterMoney = 1500;	//Starting cash for every player

struct player
{
	int bank;	//How much money the player has
	int owns[40];	//What properties the player owns
	int gPiece;	//The game piece the player is using
};

int main( int argc, char *argv[] )
{
	utilX manager;

	int pcount;	//Number of players (Has to be greater than 2)
	manager.clear(1);
	cout << "How many players? ";
	cin >> pcount;

	//Player count check
	while( pcount <= 1  || pcount >= 10 )
	{
		manager.clear(0);
		cout << "Number of players must be greater than 1";
		cout << " and less than 10" << endl;
		cout << "How many players? ";
		cin >> pcount;
	}

	//Create the player array and give every player their starting cash
	player pArray[pcount];
	for( int i = 0; i < pcount; i++ )
		pArray[i].bank = starterMoney;
	
	//Assign a play piece to every player
	int p = 0;
	for( int i = 0; i < pcount; i++ )
	{
		manager.clear(0);
		manager.getPieceList();
		cout << "Player " << i+1 << " choose a game piece: " << endl;
		cin >> p;

		//Check if piece has been already taken
		bool pFlag = true;
	
		while( pFlag == true )
		{
			//Cycle threw already created players, if one
			//has the same game piece keep the flag on and
			//loop back to the while, else flip the flag and
			//assign that player their selected piece
			for( int j = 0; j <= i; j++ )
			{
				if( pArray[j].gPiece == p )
				{
					pFlag = true;
					cout << "Error: Piece has already"
					<< " been taken." << endl
					<< "Please select another choice: ";
					cin >> p;
					break;
				} else pFlag = false;
			}
			

		}
	
		pArray[i].gPiece = p;
		

	}
}
