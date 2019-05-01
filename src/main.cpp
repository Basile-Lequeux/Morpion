#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>


int main()
{
	system("clear");
	
	coordonnees place;
	bool check;
	

	//**Creation des objets**
	Grille table_de_jeu{};	
	Joueur joueur_croix{'X'};
	Joueur joueur_rond{'O'};

	do
	{

	do
	{
	system("clear");
	table_de_jeu.affichage();	
	place = joueur_croix.tour_de_jeu();
	check = table_de_jeu.set_table(place.x,place.y,'X');
	}while (check == false);

	do
	{
	system("clear");
	table_de_jeu.affichage();	
	place = joueur_rond.tour_de_jeu();
	check = table_de_jeu.set_table(place.x,place.y,'O');
	}while (check == false);

	}while (true);


	
	






	return 0;
}