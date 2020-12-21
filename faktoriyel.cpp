 #include<stdio.h>
 #include<conio.h>
 int main (){
 	int n , i;
 	printf("Faktoriyeli alinacak sayiyi girin:");
 	scanf("%d",&n);
 	i=1;
 	while(n!=0){
 		printf("%d\n",n);
 		i=i*n;
 	    n--;
	 }
	 printf("Faktoriyel:%d",i);
 	getch();
 }
