#if !defined(__Grille__)
#define __Grille__


class Grille
{

	
	public:


		char table [5][5];


		Grille();
		~Grille();
		void affichage()const;
		char get_table(int x,int y);
		bool set_table(int x,int y,char _signe);
		int check_gagne();      // renvoie 0 quand gagne pas || 1 croix gagne || 2 rond gagne
		void clear_grille();

		
	
};



#endif