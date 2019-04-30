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
		void set_table(int x,int y,char _signe);

		
	
};



#endif