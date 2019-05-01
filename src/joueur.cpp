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
	coordonnees signe;
	int chiffre;
	char lettre;
	cout << "entrez les coordonnees pour placer votre signe" << endl;
	cin >> lettre;
	cin >> chiffre;


	if (lettre == 'a')
	{
		signe.y = 0;
	}
	else if (lettre == 'b')
	{
		signe.y = 1;
	}
	else if (lettre == 'c')
	{
		signe.y = 2;
	}
	else if (lettre == 'd')
	{
		signe.y = 3;
	}
	else if (lettre == 'e')
	{
		signe.y = 4;
	}
	else signe.y = 5;
	

	if (chiffre > 2 && chiffre < 6)
	{
		signe.x =  5 % chiffre;
	}	
	else if (chiffre == 2)
	{
		signe.x = 3;
	}
	else if (chiffre == 1)
	{
		signe.x = 4;
	}
	else signe.x = 5;




	


	
	


	return signe;

}

