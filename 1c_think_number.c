#include<stdio.h>
 
// algoritmus nefunguje ak si myslim 100

int main(){
	char c;
	int guess, bound_low=0, bound_high=100;
	printf("Please think of a number between 0 and 100!\n");	
	printf("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low. Enter 'c' to indicate I guessed correctly.\n\n");

	do{
		
		guess = (bound_low+bound_high)/2;
		printf("Is your secret number %d? ", guess);
		c = getchar();
		getchar();
		
		if(c == 'h'){
			bound_high = guess;
		}else if(c == 'l'){
			bound_low  = guess;
		}
	}while(c != 'c');
	printf("Game over. Your secret number was: %d\n\n", guess);
	

	return 0;
}
