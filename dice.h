/**
 * Dice.h
 * Author: Josh Galofaro
 * Start Date: 2-21-12
 *
 * Dice.h will be the control file for Textopoly's game die.
 **/
#include <iostream>
using namespace std;

class dice
{
public:
	dice();
	~dice();
	int roll(int sides);
};

dice::dice()
{
	cerr << "Die created." << endl;
}

int dice::roll(int sides)
{
	cerr << "The die has " << sides << " sides." << endl;

	return 0;
}

dice::~dice(){};
