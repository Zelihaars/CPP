#include<stdio.h>
#include<conio.h>
	int main () {
		int i,j,sayi;
		printf("Sayi girin : ");
		scanf("%d",&sayi);
			for(i=1;i<=sayi;i++){
				for(j=1;j<=sayi-i;j++) {
					printf(" ");
				}
				for(j=1;j<=i;j++ ) {
					printf("*");
				}
				printf("\n");
			}
		getch() ;
			}
