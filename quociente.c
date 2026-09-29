/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int a, b;
    
    
    printf("Dividendo e divisor: ");
    scanf("%d %d", &a, &b);
    
    
    printf("Quociente: %d\n", a / b);
    
    
    printf("Resto: %d\n", a % b);
    
    return 0;
}