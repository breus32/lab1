#include <stdio.h>
#include <math.h>


int main() {
	
	double a,b,x;
	printf("Reshaem uravnenie a*x+b=0\n");
	
	printf("Vvedite a:");
	scanf("%f", &a);
	printf("Vvedite b:");
	scanf("%f", &b);
	
	x = - b / a ;
	
	printf("x=%f", x); 
	
	return 0;
}
