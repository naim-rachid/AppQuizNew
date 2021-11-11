#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Un programme représente un Quiz */
int menu(){
		int c;
		printf("\n-------------------------- Bienvenu dans une simple Quiz en Java EE ----------------------------\n");
		printf("------------------------------------------------------------------------------------------------\n");
		printf("------------------------------------ Les regles du Quiz : --------------------------------------\n");
		printf("-------- a- Vous allez avoir +20 points sur chaque reponse correcte. ---------------------------\n");
		printf("-------- b- Attention ! Vous allez risquez d'obtenir -10 sur chaque reponse incorrecte ---------\n");
		printf("-------- c- Attention ! Si vous avez fait le quiz a nouveau, vous allez obtenir\n ");
		printf("\tle resultat total divise par le nombre de repetition -----------------------------------\n");
		printf("------------------------------------------------------------------------------------------------\n");
		printf("-------- 1-/ Commencez le Quiz -----------------------------------------------------------------\n");
		printf("-------- 0-/ Exit ------------------------------------------------------------------------------\n");
		printf("------------------------------------------------------------------------------------------------\n");
		printf("Quelle est votre choix : ");
		scanf("%d", &c);
		printf("choix inside menu c = %d \n", c);
		printf("------------------------------------------------------------------------------------------------\n");
		
		return c;
	}

int main(int argc, char *argv[]) {
	int nbrPoints = 0;
	char ch1[255];
	char ch2[255];
	char ch3[255];
	int chSaisis = 0;
	int reponse = 0;
	int nbrPQ = 0;
	int choixM;
	int repet = 0;
	
	START:
	do {
		nbrPoints = 0;
		choixM = menu();
		printf("choixM = %d", choixM);
		if (choixM == 1) {
			//repet++;
			//repet +=2;
			
			printf("rept = %d", repet);
			//---------------------------------------- Question 1 -----------------------------------------------------------
			
			// La question 1 et L'affichage
			char question1[255] = "Quand l'utilisateur demande une page web au serveur, on dit qu'il fait une :";
			printf("\nQuestion 1 : %s", question1);
			printf("\n______________________________________________________________________________________________\n");
			
			// Les choix de question 1 et l'affichage
			strcpy(ch1, "Requete");
			strcpy(ch2, "Demande");
			strcpy(ch3, "Supplication");
		
			printf("\n\tChoix 1 : %s", ch1);
			printf("\n\tChoix 2 : %s", ch2);
			printf("\n\tChoix 3 : %s", ch3);
			
			printf("\n______________________________________________________________________________________________\n");
		
			// choix saisis
			printf("Votre choix (1 ou 2 ou 3) : ");
			scanf("%d", &chSaisis);
			// La réponse de question 1
			reponse = 1;
			// comparaison entre choix saisis et la réponse Et donner les points
			nbrPQ = 0;
			if(chSaisis == reponse){
				int nbrPQ = 0;
				nbrPQ = 20;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Bravo! Votre point sur cette question est : %d", nbrPQ);
			} else {
				nbrPQ = -10;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Echec! Votre point sur cette question est : %d", nbrPQ);
			}
			
			// Affichage la réponse de la question 2
			printf("\n\n\t=> La reponse de question 1 est le choix numero %d", reponse);
			
			printf("\n______________________________________________________________________________________________\n");
			
			//---------------------------------------- Question 2 -----------------------------------------------------------
			
			// La question 2 et L'affichage
			char question2[255] = "Que signifie le C de MVC ?";
			printf("\nQuestion 2 : %s", question2);
			printf("\n______________________________________________________________________________________________\n");
			
			// Les choix de question 2 et l'affichage
			strcpy(ch1, "Classe");
			strcpy(ch2, "Controleur");
			strcpy(ch3, "Content");
			printf("\n\tChoix 1 : %s", ch1);
			printf("\n\tChoix 2 : %s", ch2);
			printf("\n\tChoix 3 : %s", ch3);
			
			printf("\n______________________________________________________________________________________________\n");
		
			// choix saisis
			printf("Votre choix (1 ou 2 ou 3) : ");
			scanf("%d", &chSaisis);
			// La réponse de question 2
			reponse = 2;
			// comparaison entre choix saisis et la réponse Et donner les points
			nbrPQ = 0;
			if(chSaisis == reponse){
				int nbrPQ = 0;
				nbrPQ = 20;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Bravo! Votre point sur cette question est : %d", nbrPQ);
			} else {
				nbrPQ = -10;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Echec! Votre point sur cette question est : %d", nbrPQ);
			}
			
			// Affichage la réponse de la question 2
			printf("\n\n\t=> La reponse de question 2 est le choix numero %d", reponse);
			
			printf("\n______________________________________________________________________________________________\n");
			
			// //---------------------------------------- Question 3 -----------------------------------------------------------
			
			// La question 3 et L'affichage
			char question3[255] = "En Java EE, on utilise MVC parce que...";
			printf("\nQuestion 3 : %s", question3);
			printf("\n______________________________________________________________________________________________\n");
			
			// Les choix de question 3 et l'affichage
			strcpy(ch1, "... on a besoin d'une organisation solide de son code pour bien le faire evoluer.");
			strcpy(ch2, "... Java n'est pas assez rapide de base.");
			strcpy(ch3, "... il n'y a pas de raison particulière, on le fait uniquement par habitude.");
			printf("\n\tChoix 1 : %s", ch1);
			printf("\n\tChoix 2 : %s", ch2);
			printf("\n\tChoix 3 : %s", ch3);
			
			printf("\n______________________________________________________________________________________________\n");
		
			// choix saisis
			printf("Votre choix (1 ou 2 ou 3) : ");
			scanf("%d", &chSaisis);
			// La réponse de question 3
			reponse = 1;
			// comparaison entre choix saisis et la réponse Et donner les points
			nbrPQ = 0;
			if(chSaisis == reponse){
				int nbrPQ = 0;
				nbrPQ = 20;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Bravo! Votre point sur cette question est : %d", nbrPQ);
			} else {
				nbrPQ = -10;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Echec! Votre point sur cette question est : %d", nbrPQ);
			}
			
			// Affichage la réponse de la question 3
			printf("\n\n\t=> La reponse de question 3 est le choix numero %d", reponse);
			
			printf("\n______________________________________________________________________________________________\n");
			
			
			// //---------------------------------------- Question 4 -----------------------------------------------------------
			
			// La question 4 et L'affichage
			char question4[255] = "En Java EE, quel type de fichiers est responsable de la Vue ?";
			printf("\nQuestion 4 : %s", question4);
			printf("\n______________________________________________________________________________________________\n");
			
			// Les choix de question 4 et l'affichage
			strcpy(ch1, "Les .jsp");
			strcpy(ch2, "Les servlets");
			strcpy(ch3, "Les Java Beans");
			printf("\n\tChoix 1 : %s", ch1);
			printf("\n\tChoix 2 : %s", ch2);
			printf("\n\tChoix 3 : %s", ch3);
			
			printf("\n______________________________________________________________________________________________\n");
		
			// choix saisis
			printf("Votre choix (1 ou 2 ou 3) : ");
			scanf("%d", &chSaisis);
			// La réponse de question 4
			reponse = 1;
			// comparaison entre choix saisis et la réponse Et donner les points
			nbrPQ = 0;
			if(chSaisis == reponse){
				int nbrPQ = 0;
				nbrPQ = 20;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Bravo! Votre point sur cette question est : %d", nbrPQ);
			} else {
				nbrPQ = -10;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Echec! Votre point sur cette question est : %d", nbrPQ);
			}
			// Affichage la réponse de la question 4
			printf("\n\n\t=> La reponse de question 4 est le choix numero %d", reponse);
			
			printf("\n______________________________________________________________________________________________\n");
			
			// //---------------------------------------- Question 5 -----------------------------------------------------------
			
			// La question 5 et L'affichage
			char question5[255] = "Lequel de ces frameworks est un framework Java EE ?";
			printf("\nQuestion 5 : %s", question4);
			printf("\n______________________________________________________________________________________________\n");
			
			// Les choix de question 5 et l'affichage
			strcpy(ch1, "Ruby on Rails");
			strcpy(ch2, "Django");
			strcpy(ch3, "JSF");
			printf("\n\tChoix 1 : %s", ch1);
			printf("\n\tChoix 2 : %s", ch2);
			printf("\n\tChoix 3 : %s", ch3);
			
			printf("\n______________________________________________________________________________________________\n");
		
			// choix saisis
			printf("Votre choix (1 ou 2 ou 3) : ");
			scanf("%d", &chSaisis);
			// La réponse de question 5
			reponse = 3;
			// comparaison entre choix saisis et la réponse Et donner les points
			nbrPQ = 0;
			if(chSaisis == reponse){
				int nbrPQ = 0;
				nbrPQ = 20;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Bravo! Votre point sur cette question est : %d", nbrPQ);
			} else {
				nbrPQ = -10;
				nbrPoints += nbrPQ;
				printf("\n\t\t--> Echec! Votre point sur cette question est : %d", nbrPQ);
			}
			
			// Affichage la réponse de la question 5
			printf("\n\n\t=> La reponse de question 5 est le choix numero %d", reponse);
			
			printf("\n______________________________________________________________________________________________\n");
			
			// ------------------------------------------------------------------------------------------------------------
			// Affichage la Total et Feedback
			if (nbrPoints >= 80) {
				if(repet == 0) {
					printf("\n\t\t---- Bravo ! Vous avez reussi cet exercice ! ----");
					printf("\n\t\t\t==> Votre Total est %d / 100", nbrPoints);
				} else {
					printf("\n\t\t\t==> Votre Total est %d / 100", nbrPoints / repet);
				}
			} else if (nbrPoints >= 0 && nbrPoints < 80) {
				repet +=2;	
				printf("\n\t\t---- Malheureusement ! Vous n'avez pas reussi cet exercice ! ----");
				printf("\n\t\t\t==> Votre Total est %d / 100", nbrPoints);
				//goto START;
			} else { // nbrPoints < 0 ;
				repet +=2;
				printf("\n\t\t ---- Malheureusement ! Vous n'avez pas reussi cet exercice ! ----");
				nbrPoints = 0;
				printf("\n\t\t\t==> Votre Total est %d / 100", nbrPoints);
			}
			printf("\n______________________________________________________________________________________________\n");
			printf("\n______________________________________________________________________________________________\n");
		}
		else {
			printf("Vous avez quittez l'app quiz !");
		}	
	} while(choixM != 0);
	
	return 0;	
}
	
	