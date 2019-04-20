#include <iostream>
#include <string>
#include "fonctions.h"




int main()
{

	char table[3][3];
	bool check;
	grille (table,3);
	system("clear");
	affichage_grille(table,3);

	do
	{
		
	


	mettrecroix(table,3);
	system("clear");
	

	affichage_grille(table,3);

	mettrerond(table,3);
	system("clear");

	affichage_grille(table,3);
	check = test_gagner(table,3);

	
	



	}while (check != true);
	

	
	return 0;
}