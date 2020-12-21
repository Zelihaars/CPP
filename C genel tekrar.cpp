#include<stdio.h>
#include<string.h>
#include<time.h>
	
	/* 11111111111111111111111111111111111111111111111111111111111111111111111111
	1 den 5 e kadar olan sayýlarý ekran yazan:
	#include<stdio.h>
   	#include<string.h>
	#include<time.h>
	int main (){
	int i;
	for(i=1;i<=5;i++) {
		printf("%d\n",i);
		  } 
		  return 0;
		  	}
		  	*/
	
    /* 2222222222222222222222222222222222222222222222222222222222222222222222222222
	1 ile 10 arasýndaki tek sayýlarýn toplamýný hesapla:
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	int main (){
	int i;
    	int toplam=0;
      	for (i=1;i<10;i++){
	    	if(i%2!=0) {
		    	printf("%d + ",i);
		    	toplam=toplam+i;
	                	}
	                   	}
    	printf(" = %d\n",toplam);
		return 0 ;
		}
		*/
    	
	/* 3333333333333333333333333333333333333333333333333333333333333333333333333333
	Beþ sayýnýn toplamýný ve ortalamasýný veren program:
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	int main (){
	float ort=0.0;
	int a,b,c,d,e,toplam=0;
    	printf("1.sayiyi girin:");
	scanf("%d",&a);
		printf("2.sayiyi girin:");
	scanf("%d",&b);
		printf("3.sayiyi girin:");
	scanf("%d",&c);
		printf("4.sayiyi girin:");
	scanf("%d",&d);
		printf("5.sayiyi girin:");
	scanf("%d",&e);
	toplam=a+b+c+d+e;
	ort=toplam/5.0;
	printf("Toplam : %d\n",toplam);
	printf("Ortalama:%.2f",ort);
	return 0 ;
	}
	*/
	
	
	/* 4444444444444444444444444444444444444444444444444444444444444444444444444444444
	Dýþarýdan girilen n sayýsýna kadar olan sayýlarýn toplamý :
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	int main (){
	int i ,toplam =0,n;
	printf("Bir sayi girin : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
			printf(" + %d",i);
		toplam+=i;
	}
		printf(" = %d",toplam);
	return 0 ;
		} 
		*/
		
/* 555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
	Dýþarýdan girilen n sayýsýnýn faktoriyelini alan program :
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	int main (){
	int i,n;
  	int fact=1;
  	 printf("Faktoriyeli alinacak sayiyi girin:");
		scanf("%d",&n);
		for(i=n;i!=0;i--) {
			printf(" x %d",i);
			fact*=i;
		}
	printf(" = %d",fact);
	return 0 ;
	}
	*/
	
	/* 6666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666
	Klavyeden girilen N sayýsýna göre 1’den N’e kadar olan tek sayýlarýn toplamýný ve çarpýmýný bulan:
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	
	int main (){
	int n,i,toplam=0,carpim=1;
	printf("Bir sayi girin :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
			printf("%d\n",i);
		toplam+=i;
		carpim*=i;
	}
	printf("Toplam = %d\n",toplam);
	printf("Carpim = %d",carpim);
	return 0 ;
	}
	*/
	
	/* 777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777
	Klavyeden girilen N sayýsýna göre 2 ile N arasýndaki çift sayýlarýn kareleri toplamýný ve küpleri
çarpýmýný hesaplayan:
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
int main (){	
	int n,i,kare=1,kup=1,toplam1=0,toplam2=0;
	printf("Bir sayi girin:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i%2==0){
			printf("- %d\n",i);
			kare=i*i;
			kup=i*i*i;
			toplam1+=kare;
			toplam2+=kup;
		}
	}
	printf("Kareler toplami : %d\n",toplam1);
	printf("Kupler toplami : %d ",toplam2);
	return 0 ;
	}
	 */
	 
	/* 888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
	1 ile dýþarýdan girilen bir N sayýsýna kadar olan tüm 5 e bölünebilen
sayýlarýn toplamýný bulan bir C programý :
 	#include<stdio.h>
	#include<string.h>
	#include<time.h>
	int main (){
	int n , toplam=0,i;
	printf("Bir sayi girin:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%5==0){
			printf(" + %d",i);
			toplam+=i;
		}
          }
	printf(" = %d",toplam);
	return 0;
	}
	 */
	 
	/* 99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999
	Dýþarýdan Girilen bir N sayýsýndan itibaren 25 tane sayýyý kontrol edip
        7 ‘e tam bölünebilenlerin adedini ve toplamýný ekrana yazan bir C Programý:
        #include<stdio.h>
		#include<string.h>
		#include<time.h>
         int main (){
		 int n,i,aded=0,toplam=0;
         printf("Bir sayi girin:");
         scanf("%d",&n);
         for(i=n;i<=n+25;i++) {
         	if (i%7==0){
         		printf("- %d\n",i);
				 aded++;
				 toplam+=i;		
				 	 }
		 }
		 printf("Aded:%d\n",aded);
		 printf("Toplam:%d",toplam); 
		 return 0 ;
		  }
		  */
		  
		 /* 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 
		 1 + 4 + 9 + 16 + 25 + ....+ n =
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 int main (){
		 int i ,n,toplam=0;
		  printf("Bir sayi girin:");
         scanf("%d",&n);
         for(i=1;i<=n;i++){
        	if(i==){
        		printf("%d",i);
        		toplam+=i*i;
			}
		 }
		 printf("%d",toplam);
		 return 0;
		 }
		 */
		 
		 /* 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 
		 		Dýþarýdan alýnan 20 sayý arasýndaki en büyük sayýyý bulup ekrana yazan bir C programý yazýnýz
				 */
		 		
		 		
		 /* 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12
		 Bir parola uygulamasý gerçekleþtiriniz.
		 */
		 
		 
		 /*13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 
		 Girilen Metni ters çevirme :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 void terscevir(char dizi[]) {
	int i,uzunluk,ters;
	uzunluk=strlen(dizi); 
	for(i=0;i<uzunluk/2;i++){
		ters=dizi[i];
		dizi[i]=dizi[uzunluk-1-i];
		dizi[uzunluk-1-i]=ters;
	}
    }
		 	 int main (){
		 	char text[200];
		 	gets(text);
		 	terscevir(text);
		 	printf("%s",text);
		return 0;
		 }
		 */
		 
		 
		 /* 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 
		 Girilen kelimenin harf sayýsýný bulma:
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 
		int main() {
		int i;	
	    int uzunluk=0;
		char cumle[200];
		printf("Cumleyi girin:");	
		 gets(cumle);
		for(i=0;cumle[i]!='\0';i++){
		    uzunluk++;	  
		  }
		   if(cumle==" "){
		  		uzunluk;
		                 }
		  printf("harf sayisi :%d",uzunluk); 
		  return 0;
		  }
		 
			
		  */                                                                                                            		 
		 
	
		/*15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15
		 
		 	1 2 3 
		 	4 5 6
		 	7 8 9 
		 	 Kullanýcý tarafýndan girilenle yapmak 
		*/
		 
		 /* 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16
		 içi boþ baklava :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
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
			return 0;
			}
			*/
				
		 /* 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17
		 içi boþ kare :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 	int main () {
		int i,j,sayi;
		printf("Kenari girin:");
		scanf("%d",&sayi);
		for(i=0;i<=sayi;i++) {
			for(j=0;j<=sayi;j++ ){
				if(i==0||i==sayi||j==0||j==sayi)
				printf(" * ");
				else
				printf("   ");
			}
			printf("\n");
		}
		return 0;
	}
    */
		 
		 /*18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 
		 mektup zarfý:
		 #include<stdio.h>
	   	#include<string.h>
		#include<time.h>
		int main () {
 		int i , j,sayi;
 		scanf("%d",&sayi);
 		for(i=0;i<sayi;i++) {
 			for(j=0;j<sayi;j++) {
 				if(i==0||j==0||i==sayi-1||j==sayi-1||j==i||j+i==sayi-1)
 				printf(" * ");
 				else
 				printf("   ");
			 }	
			 printf("\n");
			 	 }
 	return 0;
	 }
	*/
		 
		 /*19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19
		 Yýldýzlarla dik üçgen:
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 
		 int main () {
		int i,j,sayi;
		printf("Sayi girin : ");
		scanf("%d",&sayi);
			for(i=0;i<=sayi;i++){
				printf("*");
				for(j=0;j<i;j++) {
					printf("*");
				}
					printf("\n");
				}
			
			
		return 0;
			}
	    	*/
		 
		 /* 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 
		 Yýldýzlarla 1 3 5 aritmetiði üçgeni :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
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
		printf("\n \n");
		}
		return 0;
	}
    */
		  
		 /* 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 
		 Ters hipotenüslü üçgen :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
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
		return 0 ;
			}
		   */
		   
		 /*22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 
		 Dizi elemanlarý kendisi kadar yazdýrma :
		 #include<stdio.h>
		#include<string.h>
		#include<time.h>
		 int main (){
		int a[]={4,8,3,1,18,9,21,20,5,17};
		int i,j,size;
		size=10;
		for(i=0;i<size;i++){
			for(j=0;j<a[i];j++){
				printf("%d",a[i]);		
					}
					printf("\n");
		}
		return 0;
	}
    */
		 
		 /*23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 
		 Dizi elemanlarý toplama ve ortalama:
			#include<stdio.h>
			#include<string.h>
			#include<time.h>
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
		return 0;
	}
	*/
	
		 /*24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 
		Dizi elemalarý ters çevirme:
		#include<stdio.h>
		#include<string.h>
		#include<time.h>
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
		return 0 ;
	}
	*/
	
 	 /* 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 
 	 Dizi elemanlarý aktarma :
 	 #include<stdio.h>
	#include<string.h>
	#include<time.h>
 	 int main (){
		int a[]={4,8,3,1,18,9,21,20,5,17};
		int b[10];
		int i,size;
		size=10;
		printf("1.dizi :");
		for(i=0;i<size;i++)
		printf("%d",a[i]);
		printf("\n");
		for(i=0;i<size;i++)
		b[i]=a[i];
		printf("2.dizi :");
		for(i=0;i<size;i++)
		printf("%d",b[i]);
		return 0;
	}
	*/
	/* 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 
	Kullanýcý tarafýndan girilen iki karakter ile ev yapma  :
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
void cati(){
	printf( "    /\\   \n" );
	printf( "   /  \\  \n" );
	printf( "  /    \\ \n" );
	printf( " /      \\\n" );
	printf( " --------\n" );
}
void kat(char sag,char sol) {
		printf("%c        %c\n",sag,sol);
    	printf("%c        %c\n",sag,sol);	
		printf("%c        %c\n",sag,sol);
		printf("----------\n");
}


int main() {
	char sagduvar,solduvar;
	printf("Duvarlari olusturacak karakterlerii girin:");
	scanf("%c%c",&sagduvar,&solduvar);
	cati();
	kat(sagduvar,solduvar);	
	kat(sagduvar,solduvar);
	kat(sagduvar,solduvar);
	kat(sagduvar,solduvar);
}
*/
/*27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 
0 ile 999 arasýndaki sayýlarý yazýya ceviren program(switch case)}
	#include<stdio.h>
	#include<string.h>
	#include<time.h>
int main( void )
{ 
	int sayi;
	do {
		printf( " Sayiyi giriniz :" );
		scanf("%d",&sayi);
		printf("\n");
		if( sayi>999 || sayi<0 )
			printf(" Uyari :Girdiginiz sayi uygun degildir.\n\n"
				" 0 ile 999 arasinda olmalidir.\n\n");
			else
			break;
	}while( 1 );
	switch( sayi/100 ) {
		case 9: printf( " dokuzyuz " ); 	break;
		case 8: printf( " sekizyuz " ); 	break;
		case 7:	printf( " yediyuz " ); 		break;
		case 6: printf( " altiyuz " ); 		break;
		case 5: printf( " besyuz " ); 		break;
		case 4:	printf( " dortyuz " ); 		break;
		case 3: printf( " ucyuz " ); 	   	break;
		case 2: printf( " ikiyuz " ); 		break;
		case 1: printf( " yuz " ); 			break;
	}
	switch ( (sayi%100)/10 ) {	
		case 9: printf( " doksan " ); 	break;
		case 8: printf( " seksen " ); 	break;
		case 7: printf( " yetmis " ); 	break;
		case 6: printf( " altmis " ); 	break;
		case 5: printf( " elli " ); 		break;
		case 4: printf( " kirk " ); 		break;
		case 3: printf( " otuz " ); 		break;
		case 2: printf( " yirmi " ); 		break;
		case 1: printf( " on " ); 		break;
	}
	switch ( (sayi%10) ) {	
		case 9: printf( " dokuz " ); 		break;
		case 8: printf( " sekiz " ); 		break;
		case 7: printf( " yedi " ); 		break;
		case 6: printf( " alti " ); 		break;
		case 5: printf( " bes " );		break;
		case 4: printf( " dört " ); 		break;
		case 3: printf( " uc " ); 		break;
		case 2: printf( " iki " );		break;
		case 1: printf( " bir " );		break;
	}
	if( sayi == 0 )
		printf( "sifir" );
		printf( "seklinde okunur .\n" );
   return 0;
}*/
/* 28 28 28 28 28 28 28 28 28 2828 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28  
	Mayýn tarlasý
	#include<stdio.h>
	#include<time.h>
	#include<stdlib.h>
	#include<conio.h>
   char mayin[10][10];
int x,y;
void mayinYerlestir(char arazi[10][10]) {
	for(int i=0; i<10; i++)
	{
			x=rand()%10;
			y=rand()%10;
			if(mayin[x][y]==2)
			{
				i--;
			}
			else if (mayin[x][y]!=2)
			{
			mayin[x][y]=2;
			}		
	}	
}
void araziGoster() {
	printf("\n");
	printf("1-) 1-10 arasi deger giriniz.\n2-) Girmis oldugunuz degerleri tekrar girmeyiniz.\n3-) Tarlada \"1\" ile gosterilen alanda mayin yoktur.\n");
	for(int k=1;k<11;k++)
				{
					if(k==1)
					printf("   ");
					printf(" %d ",k);
				}
	for(int i=0;i<11;i++)
		{
			if(i!=0)
			printf("%d  ",i);
			for(int j=0;j<10;j++)
			{
				if(i==0)break;
				if(i==10 && j==0)
				printf("* ");
				else
				printf(" * ");					
			}
			printf("\n");
		}
}
void kullaniciGiris() {
	int sayac=0,satir,sutun,puan=0;	
	while(sayac!=1)
	{
		printf("\nAcilacak satiri seciniz : ");
		scanf("%d",&satir);
		printf("Acilacak Sutunu Seciniz : ");
		scanf("%d",&sutun);
		satir--;
		sutun--;
		if(satir>9 || sutun>9 || satir<0 || sutun<0)
		{
			printf("Yanlis Deger Tekrar Giriniz");	
		}
		else if(mayin[satir][sutun]==2)
		{
			system("CLS");
			printf("\nMayina Bastiniz. Puanininiz = %d", puan);
			sayac++;
		}
		else if(mayin[satir][sutun]==1)
		{
			printf("Daha onceden sectiginiz alan");	
		}
		else if(mayin[satir][sutun]!=2)
		{
			mayin[satir][sutun]=1;
			puan++;
			system("CLS");
			printf(" ");
				for(int k=1;k<=10;k++)
				{
					printf("  %d",k);
				}
			printf("\n");
			for(int a=0;a<10;a++)	
			{
				printf("%d",a+1);
					if(a<9)
				{
					printf(" ");
				}
				for(int b=0;b<10;b++)
				{
					if(mayin[a][b]==1)
				{
					printf(" 1 ");
				}
				else if(mayin[a][b]!=1)
				{
					printf(" * ");
				}
			}
				printf("\n");
			}	
			printf("\nBos Arazi. 1 Puan Kazandiniz.\n");
			printf("Puaniniz = %d",puan);
		}
	}	
}
int main(){
	char arazi[10][10];
	srand(time(NULL));
	araziGoster();
	mayinYerlestir(arazi);
	kullaniciGiris();
	return 0;
}
*/
/* 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29
Dýþarýdan girilen iki sayýnýn OBEB OKEK ini bulan program:
#include <stdio.h>
 
int main() {
    int sayi1, sayi2, kucukSayi;
    int i,obeb=1,okek;
 
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;
 
 
    for (i = 2; i <= kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0)
            obeb = i;
    }
    okek= (sayi1 * sayi2) / obeb;
    printf("OBEB(%d,%d) = %d\n", sayi1, sayi2,obeb);
    printf("OKEK(%d,%d) = %d", sayi1, sayi2, okek);
    return 0;
 
} 
 */
 /* 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30
    Mayýn tarlasý 2
	 #include <stdlib.h>
	#include <stdio.h>
	#include <conio.h>
	#include <time.h>

int tarla[10][10];
int satir,sutun,i,j,puan;
int main(){
	srand(time(NULL));
	for(i=0;i<10;i++){
		satir=rand()%10;
		sutun=rand()%10;
		if (tarla[satir][sutun]!=1)
			tarla[satir][sutun]=1;
		else
			i--;
	}
	do{
		printf("Lutfen satir giriniz : ");scanf("%d",&satir);
		printf(" Lutfen sutun giriniz : ");scanf("%d",&sutun);
		if(tarla[satir][sutun]!=1){
			puan++;
			printf("\n Basarili hamle \n Puaniniz = %d\n ",puan);
		}
	}while(tarla[satir][sutun]!=1);
	printf(" Mayina Bastin \n Puaniniz %d",puan);
	getch();
	return 1;
} */
