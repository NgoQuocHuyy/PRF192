#include <stdio.h>
#include <stdlib.h>

const float PI = 3.145;
//Kí hiệu cho vùng RAM read-only
 // Viết chương trình nhập vào bán kính của hình tròn. Sau đó in ra diện tích
 // Công thức tính diện tích hình tròn: S = Pi * r^2
int main(int argc, char *argv[]) {
	float radius, area;
	printf("Input a radius of dish: ");
	scanf("%f", &radius);
	 //area = 3.14 * radius * radius;
	 area = PI * radius * radius;
	 printf("The area of the disk (r = %f) is %f\n", radius, area);
	 //deafault số thực in 6 phần thập phân
	 	 printf("The area of the disk (r = %.2f) is %.2f\n", radius, area);
	 	 //.2 là in một số thực lấy 2 phần sau dấu . thập phân

	return 0;
}