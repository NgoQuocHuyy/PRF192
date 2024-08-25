#include <stdio.h>
#include <stdlib.h>

//Viết hàm hoán đổi 2 value
//void swapV1(int a, int b); // Mày đưa t 2 con số
void swapV2(int* a, int* b); //Mày đưa t 2 tọa độ của 2 biến int
int main(int argc, char *argv[]) {
	int a = 10, b = 100;
	printf("In main(), before swapping, a = %d; b = %d\n", a, b);
	swapV2(&a, &b);
	printf("In main(), after swapping, a = %d; b = %d\n", a, b);
	return 0;
}
void swapV2(int* a, int* b) {
	int t = *a; //lấy value đứa xa xa cất đi
	*a = *b; //lấy value đứa xa xa b nào đó cất vào xa xa a
	*b = t;
}
