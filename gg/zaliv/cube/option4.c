#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	float a = 0, sb = 0, sp = 0, v = 0;
	printf("Введите ребро куба\nВвод: ");
	scanf_s("%f", &a);
	v = pow(a, 3);
	sp = 6 * a * a;
	sb = 4 * a * a;
	printf("Результат:\nОбъем = %.2f\nПлощадь полной поверхности = %.2f\nПлощадь боковой поверхности = %.2f\n", v, sp, sb);
	return 0;
}