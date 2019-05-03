#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>
#include <string>



using namespace std;


Joueur::Joueur(char signe)
{
	x = 0;
	y = 0;
	points = 0;
	cout << "nom du joueur qui utilisera --> " << signe << endl;
	cin >> name;
	//cout << "Joueur cree : " << signe << endl;


}


Joueur::~Joueur()
{
	//cout << "destruction joueur" << endl;

}

coordonnees Joueur::tour_de_jeu()
{
	coordonnees signe;
	int chiffre;
	char lettre;
	cout <<"au tour de "<< name << endl;
	cout << "rentrez une LETTRE pour choisir l'abscisse" << endl << "lettre :";
	cin >> lettre;
	cout << endl;
	cout <<"rentrez un CHIFFRE pour choisir l'ordonnee" << endl << "chiffre :";
	cin >> chiffre;
	cout << endl;

	//**changement de la lettre(abscisse) en vrai coordonnées**
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
	
	//**changement du chiffre(ordonnée) en vrai coordonnées**
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



void Joueur::set_points()
{
	points = points + 1;
	cout << name << " a gagne bravo !!" << endl;
}

void Joueur::affiche_points()
{
	cout << "points " << name << ": " << points << endl;
}