#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 // Viết app tính diện tích hcn với 2 cạnh nhập từ bàn phím. In ra kết quả
 // Công thức tính diện tích hcn: s = dài * rộng
int main(int argc, char *argv[]) {
	int width, length, area; // Tạm thời dùng số nguyên
	 printf("You are required to input the size of rectangle\n");
	 printf("Input the width: ");
	 scanf("%d", &width);
	 printf("Input the length: ");
	 scanf("%d", &length);
      area = width * length;
      printf("The area of rectangle (%d, %d) is %d\n", width, length, area);
	return 0;
}