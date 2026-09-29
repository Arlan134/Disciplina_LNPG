/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    
    
    printf("Tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    
    media = (n1 + n2 + n3) / 3.0;
    
    
    printf("Media: %.2f\n", media);
    
    return 0;
}