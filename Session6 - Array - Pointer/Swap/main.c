#include <stdio.h>
#include <stdlib.h>

//Viết hàm hoán đổi 2 value
void swapV1(int a, int b);
int main(int argc, char *argv[]) {
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	swapV1(a, b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	return 0;
}
//Truyền tham trị, đổi A B trong hàm chứ không đổi trong main
void swapV1(int a, int b) {
	printf("Before swapping, a = %d; b = %d\n", a, b);
	int t;
	t = a;
	a = b;
	b = t;
	printf("After swapping, a = %d; b = %d\n", a, b);
}