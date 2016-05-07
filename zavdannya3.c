#include <stdio.h>

int main()

{
    int number;
    
    printf("Enter the number: ");
    scanf("%d" ,&number);
    
    printf ("\n\tExponential style: %e", number);
    printf ("\n\tEight style: %o", number);
    printf ("\n\tSixteen style: %x", number);
	
    return 0;
}
