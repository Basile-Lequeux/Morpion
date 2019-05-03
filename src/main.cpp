#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>



int main()
{
	system("clear");
	
	coordonnees place;
	bool check;
	int test_gagne;
	
	

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


		test_gagne = table_de_jeu.check_gagne();
		if (test_gagne == 0)
			{
	
			do
			{
				system("clear");
				table_de_jeu.affichage();	
				place = joueur_rond.tour_de_jeu();
				check = table_de_jeu.set_table(place.x,place.y,'O');

			}while (check == false);

			test_gagne = table_de_jeu.check_gagne();

		    }
	}while (test_gagne == 0);


	
	






	return 0;
}