#include <stdio.h>

int main ()

{
    int a;
    printf("a=");
    scanf("%d", &a);
    
    printf("\n%3.2d\n", a);
    printf("\n%e\n", a);
    printf("\n%3.7d\n", a);
    
    return 0;
}
