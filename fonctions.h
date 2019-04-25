#include <iostream>
#include <string>
using namespace std;


void grille (char table[5][5] , int taille) 
{
	//int compteur = 0;

	for (int i=0; i < taille; i++) {
		for (int j=0; j < taille; j++) {
			table[i][j] = '_';
		}
	}
}



void affichage_grille(char table [5][5], int taille) 
{
	for (int i(0); i < taille; i++)
	 {
		for (int j(0); j < taille; j++) 
		{
				cout << table[i][j];
				
			if (j != 4)
				cout << "|";
			else
				cout << endl;
		}
	}
	cout << endl;

}


typedef struct place place;
struct place
{
	int x;
	int y;
};

void mettrecroix (char table [5][5], int taille)
{
	int x,y = 0;
	
	bool check;

	do
	{
		cout << "Tour de la croix" << endl;

		cin >> x;
		cin >> y;
		

		if (table[x][y] == '_')
		{
			check = true;
		}
		else
		{
			check = false;
		}
		
	}while (check != true);

	table[x][y] = 'X';

}




void mettrerond (char table [5][5], int taille)
{
	int x,y = 0;
	place rond;
	bool check;
do
	{
		cout << "Tour du rond" << endl;

		cin >> x;
		cin >> y;
		rond.x = x;
		rond.y = y;

		if (table[rond.x][rond.y] == '_')
		{
			check = true;
		}
		else
		{
			check = false;
		}
		
	}while (check != true);
	table[rond.x][rond.y] = 'O';
}


bool test_gagner (char table [5][5], int taille)
{
	if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
	{
		return true;
	}
	else if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
	{
		return true;

	}
	else
	{
		return false;
	}

}















