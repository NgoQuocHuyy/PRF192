#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Viết app in ra tổng của dãy số sau 1! + 2! + 3! + 4! +...+n!
//I: Không có n lsao biết tính đến mấy !
//P: Giống với V2
//O: Tùy n là mấy thì kết quả sum là mấy

int getFactorial(int n); //V4 - re use

int main(int argc, char *argv[]) {
	int sum = 0, n;
	printf("Input a number an integers >= 2 to get the sum of a factorial chain: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	sum = sum + getFactorial(i);
	printf("Sum of factorial chain from 1! to %d! = %d\n", n, sum); //153
	return 0;
}

int getFactorial(int n){
	int acc = 1;
	if (n == 0 || n == 1)
	return 1;
	
	for (int i = 2; i <= n; i++)//Chưa xét âm n < 0
		acc *= i;
	return acc;
}	
