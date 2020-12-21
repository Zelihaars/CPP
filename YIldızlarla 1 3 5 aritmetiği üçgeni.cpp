#include<stdio.h>
#include<conio.h> 
int main () {
	int sayi,i,j,bosluk,yildiz;
	scanf("%d",&sayi);
	bosluk=sayi/2;
	yildiz=1;
	for(i=0;i<sayi/2;i++) {
		for(j=0;j<bosluk;j++) {
			printf("   ");
		}
		for(j=0;j<yildiz;j++) {
			printf(" * ");
		}
		yildiz=yildiz+2;
		bosluk--;
		printf("\n");
		}
		getch();
	}
