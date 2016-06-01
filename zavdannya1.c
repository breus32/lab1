#include <stdio.h>

int main(){
    
    float x, y;
    
    printf("Enter x: ");
    scanf("%f" ,&x);
    
    y = x * x;
    
    printf ("\n\tx = %.3f;\n\ty = %.3f;", x, y);

    return 0;
}
