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
	
	for (int i(0); i < 5; i++)
	 {
		for (int j(0); j < 5; j++) 
		{
			if (j == 0)
				{
					cout << 5-i;
					cout << " ";
				}
				cout << table[i][j];
				
				
				
				
			if (j != 4)
				cout << "|";
			else
				cout << endl;
		}
	}
	cout << "  a b c d e " << endl;
	cout << endl;

}


char Grille::get_table(int x,int y)
{
	return table[x][y];
}

bool Grille::set_table(int x ,int y, char _signe)
{
	if (table[x][y] == '_')
	{
		table[x][y] = _signe;
		return true;
	}
	else
	{
		cout <<"erreur de saisie, veuillez retaper des coordonnees valides" << endl;
		system("pause");
		return false;
		
	}
	
	
	


}