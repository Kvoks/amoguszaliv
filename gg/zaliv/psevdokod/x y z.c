#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	float x = 0, y = 0, z = 0;
	printf("¬вод x: ");
	scanf_s("%f", &x);
	printf("¬вод y: ");
	scanf_s("%f", &y);
	printf("¬вод z: ");
	scanf_s("%f", &z);
	if (x != y && y != z && z != x) {
		if (x > y && x > z)
			z += x;
		else if (y > x && y > z)
			z += y;
		else
			z *= z;
		printf("%.2f", z);
	}
	else if (x == y && y == z) {
		printf("все переменные равны\n");
	}
	else if (x == y) {
		printf("x=y");
	}
	else if (x == z) {
		printf("x=z");
	}
	else if (y == z) {
		printf("y==z");
	}
}