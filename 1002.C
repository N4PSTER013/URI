#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
	double raio, A;
	scanf("%lf", &raio);

	A = raio * raio * 3.14159;

	printf("A=%.4lf\n", A );
 
    return 0;
}
