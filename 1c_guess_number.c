// guess.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//getchar(); //press any key to continue

void guess(){
	srand(time(NULL));
	int randomNumber, guess, pokusov = 4;
	int rand_low = 0, rand_up  = 100;

	randomNumber = (rand() % 100) + 1;  
	printf("Please think of a number between %d and %d!. ~%d~\n", rand_low, rand_up, randomNumber);
	
	for(int i=1;i<=pokusov;i++){		
		printf("Tvoj typ (%d/%d) ", i, pokusov);
		scanf("%d", &guess);	
		
		if(guess >= rand_low && guess <= rand_up){

			if(randomNumber < guess){
				printf("Hmm... Moje číslo je menšie.\n");
			} else if(randomNumber > guess){
				printf("Hmm... Moje číslo je väčšie.\n");
			}else if (randomNumber == guess){
				printf("Gratulujem! Uhádol si moje číslo.\n\n");
				break;
			}
		}else{
			printf("Nespravny rozsah\n");
			i--;
		}		

		if(i==pokusov){
			printf("Koniec hry. Moje myslené číslo je %d.\n\n", randomNumber);
		}

	}
}

int main(){

	char c;
	
	do{
		guess();
		printf("Chceš sa hrať ešte raz? (a/n): ");
		getchar(); //newline z predchadzajuceho vstupu?
		c = getchar();
	}while(c == 'a');
 
	printf("Tak ahoj nabudúce.\n"); //pre 'n' a vsetko ostatne


	return 0;
}
