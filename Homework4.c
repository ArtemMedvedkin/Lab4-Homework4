#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int param();

int main() {

	setlocale(LC_CTYPE, ".UTF-8");

	param();

	return 0;
}
int param() {

	int a;
	int b;
	int c;

	puts("------КАЛИБРОВКА СТАНКА------");

	puts("Введите значение A:");
	scanf("%d", &a);

	puts("Введите значение B:");
	scanf("%d", &b);

	puts("Введите значение C:");
	scanf("%d", &c);

	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		puts("Успешная калибровка!");
	else
		puts("Ошибка калибровки!");

	puts("-----------------------------");

	return 0;
}