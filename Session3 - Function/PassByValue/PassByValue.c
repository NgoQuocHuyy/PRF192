#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f(int x);
int main(int argc, char *argv[]) {
	//f(5);
	int n = 10; // lẽ ra nên scanf n nhưng mình gán luôn cho tiện
	f(n); //Truyền thái y, truyền giá trị
	//in số nhà của n trong main()
	printf("In main, n addr is: %u\n", &n);
	return 0;
}
void f(int x){
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	printf("In f(), x addr is: %u\n", &x);
}