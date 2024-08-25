#include <stdio.h>
#include <stdlib.h>

//Viết hàm y = f(x) = x^2. Hàm làm nhiệm vụ bình phương đầu vào
void f(int x); //x là đầu vào
int main(int argc, char *argv[]) {
	int x = 10;
	printf("In main(), before calling f() x is: %d\n", x);
	f(x); //Calling/call/invoke//gọi hàm
	printf("In main(), after calling f() x finally is: %d\n", x); //10 or 100?
	return 0;
}
void f(int x) {
	printf("In f(); x before ^2: %d\n", x);
	//x = x * x
	x *= x; //Phép gán tự thân 
	printf("In f(); x after ^2: %d\n", x);
}	//x đã bị đổi trong hàm 