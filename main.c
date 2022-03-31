#include <stdio.h>
#include <string.h>

int Pow(int x, int y);


int main() {

	 int a, b;

	printf("Vendos bazen: ");
	scanf("%d", &a);

	printf("Vendos fuqin: ");
	scanf("%d", &b);

	printf("%d ^ %d = %d", a, b, Pow(a, b));

}
int Pow(int x, int y) {

	int power = 1;
	int i;

	for (i = 1; i <= y; ++i) {
		power = power * x;
	}

	return power;

}
