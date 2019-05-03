#if !defined(__Joueur__)
#define __Joueur__
#include <string>

typedef struct coordonnees coordonnees;
struct coordonnees
{
	int x;
	int y;
};




class Joueur
{
	public:

		std::string name;
		int x,y,points;
		char temp;
		bool check;


		Joueur(char signe);
		~Joueur();
		coordonnees tour_de_jeu();
		void set_points();
		void affiche_points();
		



};





#endif