#include<stdio.h>
main(){
	int a,x=38;
	do{
	printf("nhap so:");
	scanf("%d",&a);	
	if(x!=a){
		printf( "no");
	}	
	}		
	while(a!=x);
	printf("win");	
}

