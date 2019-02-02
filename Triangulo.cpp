
#include<conio.h>
#include<stdio.h>
main(){
	int a, b, c;
	printf("Dame lado a:");
	scanf("%d", &a);
	printf("Damelado b:");
	scanf("%d",&b);
	printf("Dame lado c:");
	scanf("%d",&c);
	if(a==b){
		if(a==c)
			printf("Equilatero");
		else
		printf("Isosceles");}
	else{
	
	
	if(b==c){
		printf("Isosceles");}
		else{
		
			if(c==a){
	    	printf("Isosceles");}
	else {
	
	        printf("Escaleno");}
			}
	    }
	getch();
}

