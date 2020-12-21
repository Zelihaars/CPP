#include<stdio.h>
#include<conio.h>
 	int main () {
 		int i , j,sayi;
 		scanf("%d",&sayi);
 		for(i=0;i<sayi;i++) {
 			for(j=0;j<sayi;j++) {
 				if(i==0||j==0||i==sayi-1||j==sayi-1||j==i||j+i==sayi-1)
 				printf("*");
 				else
 				printf(" ");
			 }	
			 printf("\n");
			 	 }
 		getch();
	 }
