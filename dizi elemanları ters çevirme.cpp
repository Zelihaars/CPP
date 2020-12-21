#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
	int main (){
		int a[]={4,8,3,1,18,9,21,20,5,17};
		int i ,size,temp;
		temp=0;
		size =10;
		for(i=0;i<size/2;i++){
			temp=a[i];
			a[i]=a[size-1-i]=temp;
			a[size-1-i]=temp;
		}
		for(i=0;i<size;i++)
		printf("%d",a[i]);
		getch();
	}
		
