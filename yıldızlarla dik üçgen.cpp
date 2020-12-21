#include<stdio.h>
#include<conio.h>
	int main () {
		int i,j,sayi;
		printf("Sayi girin : ");
		scanf("%d",&sayi);
		if(sayi>0) {
			for(i=0;i<sayi;i++){
				printf("*");
				for(j=0;j<i;j++) {
					printf("*");
				}
					printf("\n");
				}
				}
		if (sayi<0){
			sayi=sayi*(-1);
			for (i=sayi; i>=1; --i) {
        		for (j=1; j<=i; ++j)
        		{ printf("* "); }
       			 printf("\n");
    }   
				
				}
		return 0;
			}
