#include<stdio.h>

void ascii(){

	for(int i=97;i<123;i++){
	printf("%3d %c \n",i,i);
	}
}

void str_print(char *string, int str_len, int posun){

	printf("%s\n", string);	           // PALIN TEXT

	for(int i=0;i<str_len;i++){        // DECIMALNA REPREZENTACIA
		printf("%3d ", string[i]);	
	}
	printf("\n");

	for(int i=0;i<str_len;i++){       // POSUNUTIE A.K.A. SIFROVANIE
		string[i] = string[i] + posun;	
	}

	printf("%s\n", string);	          // PRINT ZASIFROVANEHO TEXTU

	for(int i=0;i<str_len;i++){	      // DECIMALNA REPREZENTACIA ZASIFROVANEHO TEXTU
		printf("%3d ", string[i]);	
	}
	printf("\n");
	
	for(int i=0;i<str_len;i++){       // POSUNUTIE A.K.A. OD-SIFROVANIE
		string[i] = string[i] - posun;	
	}

	printf("%s\n", string);	          // PRINT ZASIFROVANEHO TEXTU

	for(int i=0;i<str_len;i++){	      // DECIMALNA REPREZENTACIA OD-SIFROVANEHO TEXTU
		printf("%3d ", string[i]);	
	}
	printf("\n");

}

int main(){

	// ascii();

	char string[]="Toto je tajna sprava";
	int str_len = sizeof(string) / sizeof(string[0]) -1 ;
	int posun;
	printf("Program cezarova sifra, zadaj posun: ");
	scanf("%d", &posun);
	str_print(string, str_len, posun);

}