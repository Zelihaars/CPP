/*//////////////////////////////////////////////////////////////////////////////////0 ile 999 arasýndaki sayýlarý yazýya ceviren program(switch case)
#include<stdio.h> 
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
		printf( " seklinde okunur .\n" );
   return 0;
}*/
/*///////////////////////////////////////////////////////////////////////////////////////////////////fonksiyonla katlý ev
#include<stdio.h>
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
/*//////////////////////////////////////////////////////////////////////////////





















