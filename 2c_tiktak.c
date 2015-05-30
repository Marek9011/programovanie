#include<stdio.h>

int main(){
	
	int koniec;
	
	do{
		printf("Zadaj konečné číslo: ");
		scanf("%d", &koniec);	
	}while(koniec < 2 || koniec > 100);

	printf("OK, konečné cislo je %d\n", koniec);

	float div_5, div_3;
	for(int i=1;i<=koniec;i++){
		div_3 = i/3.0 - i/3;
		div_5 = i/5.0 - i/5;
		
		printf("%3.20f %3.20f ", div_3, div_5);

		if (div_3 == 0){
			printf("TIK ");
		}else if (div_5 == 0){
			printf("TAK ");
		}else{
			printf("%d ", i);
		}
		printf("\n");
	}	
}