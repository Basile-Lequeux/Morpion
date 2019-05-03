#include "../headers/joueur.h"
#include "../headers/grille.h"
#include <iostream>



int main()
{
	system("clear");
	
	coordonnees place;
	bool check;
	int test_gagne;
	int rejouer;
	
	

	//**Creation des objets**
	Grille table_de_jeu{};	
	Joueur joueur_croix{'X'};
	Joueur joueur_rond{'O'};



do
{


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

	if (test_gagne == 1)
	{
		joueur_croix.set_points();
	}
	else if (test_gagne == 2)
	{
		joueur_rond.set_points();
	}
	joueur_croix.affiche_points();
	joueur_rond.affiche_points();


	std::cout << "voulez vous rejouer ? 1 : oui  2 : non" << std::endl;

	std::cin >> rejouer;
	table_de_jeu.clear_grille();

}while (rejouer == 1);

	return 0;
}