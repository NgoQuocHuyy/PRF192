#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Kiểm tra xem tuổi của mình nằm trong khoảng thanh xuân hay k?
	int age = 20;
	if(age >= 20 && age <= 30)
	 printf("Chao thanh xuan\n");
	else printf("Qua tuoi thanh xuan\n");
	//Viêt đoạn code nhập vào một con số nguyên bất kì, sau đó in ra con số có nằm ngoài đoạn 1 - 100 k?
	int x;
	printf("Input an integer. I will check this number is in the range of [1..100] or not\n");
	printf("Input an integer: ");
	scanf("%d", &x);
	
	int result; //Ktra có trong đoạn hay không
	result = x < 1 || x > 100;
	//x = -5 result = 1 - Đúng
	printf("Range result: %d\n", result);
	//Dùng if else:
	if(x < 1 || x > 100)
	 printf("Number %d is out the range of [1...100]\n", x);
	else printf("Number %d is in the range of [1...100]\n", x);
	return 0;
}