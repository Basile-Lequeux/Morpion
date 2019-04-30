#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>


int main()
{
	coordonnees place;
	system("clear");


	Grille table_de_jeu{};
	table_de_jeu.affichage();
	Joueur joueur_croix{'X'};


	place = joueur_croix.tour_de_jeu();
	table_de_jeu.set_table(place.x,place.y,'X');
	table_de_jeu.affichage();







	return 0;
}