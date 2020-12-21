#include<stdio.h>
#include<conio.h>
int main (){
	int i,sayi,sayac=0;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++) {
		if(sayi%i==0) {
			sayac++;
		}
	}
	if(sayac==0){
		printf("Asaldir.");	
	}
	else {
		printf("Asal degil.");
		}
	getch();
}
