#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Viết app in ra tổng của dãy số sau 1! + 2! + 3! + 4! + 5!
//Ta chẻ nhỏ ra, có sự lặp lại của role tinhGiaiThua() - Tách hàm

int getFactorial(int n); //V4 - re use

int main(int argc, char *argv[]) {
	printf("5! = %d\n", getFactorial(5));
	
	//Tính re-use bắt đầu 
	//tính tổng 1! + 2! + 3! + 4! + 5!
	//          1    2    6    24   120
	// sum        3
	//                 9
	//                      33
	//                            153
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	printf("Sum of factorial chain from 1! to 5! = %d\n",sum); //153
	return 0;
}
int getFactorial(int n){
	int acc = 1;
	if (n == 0 || n == 1)
	return 1;
	
	for (int i = 2; i <= n; i++)//Chưa xét âm n < 0
		acc *= i;
	//printf("Print inside a funct: %d! = %d\n", n, acc); //Câu lệnh in kq xử lí trong hàm
														//Là không nên vì ảnh hưởng re-use 
														
	return acc;
}