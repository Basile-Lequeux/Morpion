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
	//cout << "destruction" << endl;
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
		system("clear");
		return false;
	}

}



int Grille::check_gagne()
{

	//****HORIZONTALE****

	if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X' && table[0][3] == 'X' && table[0][4] == 'X')
	{
		return 1;
	}
	else if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O' && table[0][3] == 'O' && table[0][4] == 'O')
	{
		return 2;
	}

	else if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X' && table[1][3] == 'X' && table[1][4] == 'X')
	{
		return 1;
	}
	else if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O' && table[1][3] == 'O' && table[1][4] == 'O')
	{
		return 2;
	}

	else if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X' && table[2][3] == 'X' && table[2][4] == 'X')
	{
		return 1;
	}
	else if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O' && table[2][3] == 'O' && table[2][4] == 'O')
	{
		return 2;
	}

	else if (table[3][0] == 'X' && table[3][1] == 'X' && table[3][2] == 'X' && table[3][3] == 'X' && table[3][4] == 'X')
	{
		return 1;
	}
	else if (table[3][0] == 'O' && table[3][1] == 'O' && table[3][2] == 'O' && table[3][3] == 'O' && table[3][4] == 'O')
	{
		return 2;
	}

	else if (table[4][0] == 'X' && table[4][1] == 'X' && table[4][2] == 'X' && table[4][3] == 'X' && table[4][4] == 'X')
	{
		return 1;
	}
	else if (table[4][0] == 'O' && table[4][1] == 'O' && table[4][2] == 'O' && table[4][3] == 'O' && table[4][4] == 'O')
	{
		return 2;
	}

	//**VERTICALE**

	else if (table[4][0] == 'X' && table[3][0] == 'X' && table[2][0] == 'X' && table[1][0] == 'X' && table[0][0] == 'X')
	{
		return 1;
	}
	else if (table[4][0] == 'O' && table[3][0] == 'O' && table[2][0] == 'O' && table[1][0] == 'O' && table[0][0] == 'O')
	{
		return 2;
	}

	else if (table[4][1] == 'X' && table[3][1] == 'X' && table[2][1] == 'X' && table[1][1] == 'X' && table[0][1] == 'X')
	{
		return 1;
	}
	else if (table[4][1] == 'O' && table[3][1] == 'O' && table[2][1] == 'O' && table[1][1] == 'O' && table[0][1] == 'O')
	{
		return 2;
	}

	else if (table[4][2] == 'X' && table[3][2] == 'X' && table[2][2] == 'X' && table[1][2] == 'X' && table[0][2] == 'X')
	{
		return 1;
	}
	else if (table[4][2] == 'O' && table[3][2] == 'O' && table[2][2] == 'O' && table[1][2] == 'O' && table[0][2] == 'O')
	{
		return 2;
	}

	else if (table[4][3] == 'X' && table[3][3] == 'X' && table[2][3] == 'X' && table[1][3] == 'X' && table[0][3] == 'X')
	{
		return 1;
	}
	else if (table[4][3] == 'O' && table[3][3] == 'O' && table[2][3] == 'O' && table[1][3] == 'O' && table[0][3] == 'O')
	{
		return 2;
	}

	else if (table[4][4] == 'X' && table[3][4] == 'X' && table[2][4] == 'X' && table[1][4] == 'X' && table[0][4] == 'X')
	{
		return 1;
	}
	else if (table[4][4] == 'O' && table[3][4] == 'O' && table[2][4] == 'O' && table[1][4] == 'O' && table[0][4] == 'O')
	{
		return 2;
	}


	//**DIAGONALE**

	else if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X' && table[3][3] == 'X' && table[4][4] == 'X')
	{
		return 1;
	}
	else if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O' && table[3][3] == 'O' && table[4][4] == 'O')
	{
		return 2;
	}

	else if (table[0][4] == 'X' && table[1][3] == 'X' && table[2][2] == 'X' && table[3][1] == 'X' && table[4][0] == 'X')
	{
		return 1;
	}
	else if (table[0][4] == 'O' && table[1][3] == 'O' && table[2][2] == 'O' && table[3][1] == 'O' && table[4][0] == 'O')
	{
		return 2;
	}

	else
	{
		return 0;
	}


























































}