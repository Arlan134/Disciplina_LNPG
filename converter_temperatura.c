/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float c, f;
    
    printf("Celsius: ");
    scanf("%f", &c);
    
    
    f = c * 9 / 5 + 32;
    
    
    printf("Fahrenheit: %.1f\n", f);
    
    return 0;
}