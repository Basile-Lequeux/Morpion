#include <iostream>
#include <string>
#include "fonctions.h"




int main()
{

	char table[5][5];
	bool check;
	grille (table,5);
	system("clear");
	affichage_grille(table,5);

	do
	{
		
	


	mettrecroix(table,5);
	system("clear");
	check = test_gagner(table,5);
	

	affichage_grille(table,5);

	mettrerond(table,5);
	system("clear");

	affichage_grille(table,5);
	check = test_gagner(table,5);

	
	



	}while (check != true);
	

	
	return 0;
}