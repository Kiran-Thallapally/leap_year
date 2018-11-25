#include<stdio.h>
main(){
	int n;
	printf("Enter year:");
	scanf("%d",&n);
	
	if((n%4==0 && n%100) || n%400==0)
	  printf("LEAP YEAR");
	
}
