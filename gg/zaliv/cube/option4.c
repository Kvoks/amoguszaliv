#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	float a = 0, sb = 0, sp = 0, v = 0;
	printf("������� ����� ����\n����: ");
	scanf_s("%f", &a);
	v = pow(a, 3);
	sp = 6 * a * a;
	sb = 4 * a * a;
	printf("���������:\n����� = %.2f\n������� ������ ����������� = %.2f\n������� ������� ����������� = %.2f\n", v, sp, sb);
	return 0;
}