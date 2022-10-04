#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	float ch, k, m;
	int a, b, s, r, p, o;
	printf("Введите два целых положительных числа\n");
	scanf_s("%d %d", &a, &b);
	s = a + b;
	r = a - b;
	p = a * b;
	ch = a * 1.0 / b;
	k = (a * a + b * b) / 2;
	m = (abs(a) + abs(b)) / 2;//зачем модули у целых положительных чисел
	o = a % b;
	printf("%d %d %d %.2f %.2f %.2f %d", s, r, p, ch, k, m, o);
	return 0;
}