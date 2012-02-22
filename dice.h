/**
 * Dice.h
 * Author: Josh Galofaro
 * Start Date: 2-21-12
 *
 * Dice.h will be the control file for Textopoly's game die.
 **/
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

class dice
{
public:
	dice(int sides);
	dice();
	~dice();
	int roll();
private:
	int s; //# of sides the die has
};

/**
 * Create a die with specified sides, anything less than 2 sides 
 * will default to a normal 6 sided die
 **/
dice::dice( int sides )
{
	if( sides >= 2 )
	{
		srand( time(NULL) );
		s = sides;
		
	} else { dice(); }
}

/**
 * Unspecified die creation will result in a normal 6 sided die
 **/
dice::dice()
{
	s = 6;
	cerr << "Default 6 sided Die created." << endl;
}

/**
 * Will "roll the die" with the specified sides avalible and return result
 **/
int dice::roll()
{
	return rand() % s + 1;
}

dice::~dice(){};
