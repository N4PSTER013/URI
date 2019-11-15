#include <stdio.h>
 
int main() {
    
    int num, h;
    float ph, SALARIO;
    scanf(" %d%d%f", &num, &h, &ph);
    SALARIO = (float)h * ph;
    
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", SALARIO);
    return 0;
}
