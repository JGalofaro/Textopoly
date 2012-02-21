/**
 * Util.h
 * Author: Josh Galofaro
 * Start Date: 2-21-12
 *
 * Util.h will the backstage manager for any neccesisary methods for Textopoly
 **/
#include <iostream>
#include <cstdlib>
using namespace std;

class utilX
{
public: 
	utilX();
	~utilX();
	void clear();
	void clear(int message);
	void getPieceList();
};

utilX::utilX(){};
utilX::~utilX(){};

void utilX::clear(int message)
{
	if( message == 1 )
	{
		system("clear");
		cout << "-=Textopoly=-" << endl;
	}
	else clear();

}

void utilX::clear()
{
	system("clear");
}

void utilX::getPieceList()
{
	cout << "1 - Wheelbarrow\n2 - Battleship\n3 - Man on horseback\n";
	cout << "4 - Racecar\n5 - Thimble\n6 - Cannon\n7 - Boot\n";
	cout << "8 - Dog\n9 - Iron\n10 - Top Hat" << endl;
}
