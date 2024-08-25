#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Viết hàm tính n!
//I: n
//P: 1.2.3.4...n -> nhồi heo đất theo kiểu nhân, không phải cộng
//O: Kết quả nhân dồn
// Viết cả 4 loại hàm

int getFactorialV4(int n); //Hàm chuẩn toán học
int main(int argc, char *argv[]) {
	printf("0! = %d\n", getFactorialV4(0));
						// Mày là 1 value nên t dùng luôn, không cần gán biến khác 2
	return 0;
}

int getFactorialV4(int n){
	int acc = 1;
	printf("Input a number (>= 0) to get the factorial: ");
	if (n == 0 || n == 1)
		return 1; //Biết ngay 0! = 1! = 1, thoát luôn
	else 
		for (int i = 2; i <= n; i++)
		acc *= i; //acc = acc*i;
	//return acc; do hàm không return thì phải in ra
	//printf("%d! = %d\n", n, acc);//Không nên in khi hàm trả về giá trị
	return acc;
}
/*
int getFactorialV4(int n){
	int acc = 1;
	printf("Input a number (>= 0) to get the factorial: ");
	if (n == 0 || n == 1)
		acc = 1;
	else 
		for (int i = 2; i <= n; i++)
		acc *= i; //acc = acc*i;
	//return acc; do hàm không return thì phải in ra
	//printf("%d! = %d\n", n, acc);//Không nên in khi hàm trả về giá trị
	return acc;
}
*/




