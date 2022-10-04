#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0, b = 1, c = 2;
	printf("¬ведите число\n");
	scanf_s("%d", &a);
	b += a;
	c += a;
	printf("1: %d\n2: %d\n3: %d\n", a, b, c);
	return 0;
}