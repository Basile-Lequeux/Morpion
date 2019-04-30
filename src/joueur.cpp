#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>

using namespace std;


Joueur::Joueur(char signe)
{
	x = 0;
	y = 0;
	points = 0;
	cout << "Joueur cree : " << signe << endl;

}


Joueur::~Joueur()
{
	cout << "destruction joueur" << endl;

}

coordonnees Joueur::tour_de_jeu()
{
	coordonnees croix;
	int chiffre;
	char lettre;
	cout << "entrez les coordonnees pour placer une croix" << endl;
	cin >> lettre;
	cin >> chiffre;


	if (lettre == 'a')
	{
		croix.y = 0;
	}
	else if (lettre == 'b')
	{
		croix.y = 1;
	}
	else if (lettre == 'c')
	{
		croix.y = 2;
	}
	else if (lettre == 'd')
	{
		croix.y = 3;
	}
	else if (lettre == 'e')
	{
		croix.y = 4;
	}
	else croix.y = 5;
	

	if (chiffre > 2 && chiffre < 6)
	{
		croix.x =  5 % chiffre;
	}	
	else if (chiffre == 2)
	{
		croix.x = 3;
	}
	else if (chiffre == 1)
	{
		croix.x = 4;
	}
	else croix.x = 5;
	


	return croix;

}

