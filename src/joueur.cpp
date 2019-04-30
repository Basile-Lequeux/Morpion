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
	cout << "entrez les coordonnees pour placer une croix" << endl;
	cin >> croix.x;
	cin >> croix.y;



	return croix;

}

