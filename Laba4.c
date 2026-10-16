//#define _CRT_SECURE_NO_DEPRECATE
//#include <stdio.h>
//#include <locale.h>
//
//int zd1();
//int zd1A();
//
//int main() {
//	setlocale(LC_CTYPE, ".UTF-8");
//	int a;
//	int b;
//
//	scanf("%d %d", &a, &b);
//	printf("Деление числа a и b: %.2f\n", (float)(a) / b);
//
//
//	zd1();
//	zd1A();
//	zd1B();
//	zd1V();
//	zd2();
//	zd3();
//
//	return 0;
//}
//
//int zd1() {
//
//	char c = '!';
//	int i = 2;
//	float f = 3.14f;
//	double d = 5e-12;
//
//	printf("%c, %d, %.2f, %g\n", c, i, f, d);
//	//1.3
//	char c1;
//	int i1;
//	float f1;
//	double d1;
//
//	puts("Введи знак:");
//	scanf("%c", &c1);
//
//	puts("Введи число i:");
//	scanf("%d", &i1);
//
//	puts("Введи число f:");
//	scanf("%f", &f1);
//
//	puts("Введи число d:");
//	scanf("%lf", &d1);
//
//	printf("%c, %d, %.2f, %g\n", c1, i1, f1, d1);
//	getchar();
//	return 0;
//}
//
//int zd1A() {
//
//	double a;
//
//	puts("введите вещественное число:");
//
//	scanf("%lf", &a);
//
//	int a1 = (int)a;
//	double a2 = a - a1;
//
//	printf("целая часть числа - %d, дробная часть числа - %g\n", (int)a, a2);
//	getchar();
//
//	return 0;
//}
//int zd1B() {
//	char h;
//	puts("Введи символ:");
//	scanf("%c", &h);
//	printf("В шестнадцатиричной системе счисления - %x\nВ десятичной системе счисления - %d\n", h, h);
//	getchar();
//
//	return 0;
//}
//int zd1V() {
//	int i;
//	puts("Введи i:");
//	scanf("%d", &i);
//	printf("1/%d = %g", i, 1.0 / i);
//	return 0;
//}
//
//int zd2() {
//	//2.1-2.4
//	int a = 11, b = 3;
//	int x;
//	float y;
//	double z;
//	x = a / b;
//	y = a / b;
//	z = a / b;
//
//	printf("x = %d\ny = %f\nz = %f\n", x, y, z);
//	//2.6
//	printf("(float)a/b = %f\n", (float)a / b);
//	printf("(double)a/b = %f\n", (double)a / b);
//	printf("(float)(a/b) = %f\n", (float)(a / b));
//
//	return 0;
//}
//
//int zd3() {
//	int n, n1, n2, n3;
//	puts("Введите трехзначное число n:");
//	scanf("%d", &n);
//	n1 = n / 100;
//	n2 = (n / 10) % 10;
//	n3 = n % 10;
//	printf("Первая цифра числа - %d, вторая цифра числа - %d, третья цфира числа - %d\n", n1, n2, n3);
//	printf("Сумма цифр числа = %d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
//	printf("Число наоборот: %d%d%d\n", n3, n2, n1);
//	return 0;
//}