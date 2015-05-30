#include <stdio.h>

void temp(int *ar){

    printf("%ld\n", sizeof(ar)/sizeof(ar[0]));
}

int main(void){

    int ar[]={0,1,2,3,4,5,6,7,8,9};
    printf("%ld\n", sizeof(ar)/sizeof(ar[0]));
    temp(ar);

}