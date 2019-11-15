#include <stdio.h>
 
int main() {
 
 	int a, b, A, B;
 	float c, C, total;
	scanf(" %d %d %f", &a, &b, &c);
	scanf(" %d %d %f", &A, &B, &C);

	total = ((float)b*c + (float)B * C);
	printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}
