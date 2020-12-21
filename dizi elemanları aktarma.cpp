#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
	int main (){
		int a[]={4,8,3,1,18,9,21,20,5,17};
		int b[10];
		int i,size;
		size=10;
		for(i=0;i<size;i++)
		printf("%d",a[i]);
		printf("\n");
		for(i=0;i<size;i++)
		b[i]=a[i];
		for(i=0;i<size;i++)
		printf("%d",b[i]);
		getch();
	}
		
