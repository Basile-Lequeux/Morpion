#include "../headers/grille.h"
#include <iostream>


using namespace std;


Grille::Grille()
{
	for (int i=0; i < 5; i++) {
		for (int j=0; j < 5; j++) {
			table[i][j] = '_';

	}	
	}
}


Grille::~Grille()
{
	cout << "destruction" << endl;
}



void Grille::affichage() const
{
	cout << "  a b c d e " << endl;
	for (int i(0); i < 5; i++)
	 {
		for (int j(0); j < 5; j++) 
		{
			if (j == 0)
				{
					cout << i+1;
					cout << " ";
				}
				cout << table[i][j];
				
				
				
				
			if (j != 4)
				cout << "|";
			else
				cout << endl;
		}
	}
	cout << endl;

}


char Grille::get_table()
{
	return table[5][5];
}

void Grille::set_table(int x ,int y, char _signe)
{
	table[x][y] = _signe;


}