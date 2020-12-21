#include<stdio.h>
#include<conio.h>
	int main (){
		int a[]={4,8,3,1,18,9,21,20,5,11};
		int i ,toplam,ortalama;
		toplam=0;
		ortalama=0;
		int size =10;
		for(i=0;i<size;i++) {
			toplam=toplam+a[i];
		}
		ortalama=toplam/10;
		printf("toplam:%d\nortalama %d",toplam,ortalama)	;
		getch();
	}
