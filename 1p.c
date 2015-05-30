#include <stdio.h> //printf, scanf

//sudo nano ~/.profile
//export CFLAGS="-std=c11 -Wall -Werror"
//export LDLIBS="-lm"
//export CC=gcc
//PLATNOST ZMIEN AŽ PO REŠTARTE OS ghmfghjm

int main(){
	
	int vint; //PREMENNA PLATI OD DEKLAROVANIA PO NAJBLIZSIU } ZATVORKU
	char vchar;
	float vfloat;
	double vdouble;
	printf("Size of variable type [B]: ");
	printf("int:%ld char:%ld float:%ld double:%ld\n", sizeof(vint), sizeof(vchar), sizeof(vfloat), sizeof(vdouble));

	int age;

	do{
		printf("Enter your age:");
		scanf("%d", &age);
	} while (age <=0 || age>=120);

	if(age<18){
		printf("Permisssion denied\n");
	} else {
		printf("You re welcome\n");
	}

}
