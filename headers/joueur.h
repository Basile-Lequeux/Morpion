#if !defined(__Joueur__)
#define __Joueur__

typedef struct coordonnees coordonnees;
struct coordonnees
{
	int x;
	int y;
};









class Joueur
{
	public:

		int x,y,points;
		char temp;
		bool check;


		Joueur(char signe);
		~Joueur();
		coordonnees tour_de_jeu();
		



};





#endif