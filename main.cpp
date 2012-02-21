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
	
	//Assign a play piece to every player
	int p = 0;
	for( int i = 0; i <= pcount; i++ )
	{
		manager.clear(0);
		manager.getPieceList();
		cout << "Player " << i+1 << " choose a game piece: " << endl;
		cin >> p;
	}
	dice d;
	d.roll(7);
}
