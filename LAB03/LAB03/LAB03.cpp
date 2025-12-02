#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("Enter A: ");
	scanf_s("%d", &a);
	printf("Enter B: ");

	scanf_s("%d", &b);
	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A * B = %d\n", a * b);
	printf("A / B = %d\n", a / b); // หารจ านวนเต็ม
	printf("A %% B = %d\n", a % b); // %% เพื่อพิมพ์เครื่องหมาย %

	return 0;
}