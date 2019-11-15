#include <stdio.h>
 
int main() {
 
    char nome[100];
    double salar, mont;
    
    scanf(" %s%lf%lf", nome, &salar, &mont);
    printf("TOTAL = R$ %.2lf\n", (salar + 0.15 * mont));
    
 
    return 0;
}
