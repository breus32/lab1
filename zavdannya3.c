#include <stdio.h>

int main()

{
    int a;
    
    printf("a=");
    scanf("%e" ,&a);
    printf ("a=%e", a);
		
    printf("\na=");
    scanf("%f" ,&a);
    printf ("a=%f", a);
	
    printf("\na=");
    scanf("%x" ,&a);
    printf ("a=%x", a);
	
    return 0;
}
