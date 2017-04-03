#include <stdio.h>

int main(void){

	int a;
	int b;
	int c;
	int maior;
	scanf("%d %d %d", &a, &b, &c);
	maior = (a + b + abs(a-b))/2;
	maior = (c + maior + abs(maior - c))/2;
	printf("%d eh o maior", maior);

return 0;

}
