#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");//нема сетлокейла
	int age;//было бы славно принтик намутить
	scanf_s("%d", &age);//нема амперсанта
	if (age <= 13)//если не родился то тоже детство
		printf("%d - детство", age);//нема ;
	else if (14 <= age && age < 25)//двойное неравенство не робит
		printf("%d - молодость", age);// не f a d
	else if (25 <= age && age < 60)//лишняя ;
		printf("%d - зрелость", age);//не f a d
	else
		printf("%d - старость", age);
	return 0;