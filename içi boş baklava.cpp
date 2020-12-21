#include<stdio.h>
#include<conio.h> 
int main () {
	int i,j,sayi;
	printf("Sayiyi girin:");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++){
			if(i+j==sayi/2||j-i==sayi/2||i-j==sayi/2||i+j==sayi/2*3)
			printf(" * ");
			else
			printf("   ");
		}
		printf("\n");
	}
	getch();
	}
