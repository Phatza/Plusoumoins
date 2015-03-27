#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main()
{

	int nombreMystere = 0, nombreEntre = 0, compteur = 0, continuer_partie = 1, choix = 0;
const int MAX = 100, MIN = 1;

	while (choix != 3){

		printf("======== Menu ========\n\n");
		printf("1. Jouer\n\n");
		printf("2. Regle\n\n");
		printf("3. quitter\n\n");
		scanf("%d", &choix);

		switch (choix)
		{
			case 1:
			compteur = 0;
				while (continuer_partie == 1)
				{
				srand(time(NULL));
				nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
						
				printf("%d\n",choix );		
				printf("Cherchez le nombre mystere \n");

				while (nombreEntre != nombreMystere)
				{
					scanf("%d", &nombreEntre);
					compteur++; 
					if (nombreMystere > nombreEntre)
						printf("C'est plus ! \n");
					else if (nombreMystere < nombreEntre)
						printf("C'est moins ! \n");
					else 
						printf("TROP FORT LA FAMILLE ! \nTu as trouve le nombre mystere en %d coups ! \n", compteur);
				}

				printf("1 pour recommencer.\n");
				printf("0 pour retourner au menu\n");
				scanf("%d", &continuer_partie);
				system("clear");
				

				}
			break;
			case 2:
				printf("Le but du jeu, bien sûr, est de trouver le nombre mystère en un minimum de coups.\n");
			break;
			case 3:
				printf("Bye bye biaaatch\n");
			break;

			default:
				scanf("%d", &choix);
			break; 
		}	

	} 
	
	return 0;
				
}
