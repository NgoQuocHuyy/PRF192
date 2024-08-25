#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14; //Biến toàn cục, global variable. Dùng cho tất cả các hàm
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//tư duy viết hàm cho bài MathHelper
void printMenu();
void computeDiskArea();
void computeRectangleArea();
void computeTriangleArea();

int main(int argc, char *argv[]) {
	int choice; //Sự lựa chọn option
	//Chưa bằng 4 không cho thoát 
	do {
		printMenu();
		printf("Choose 1 - 4: ");
		scanf("%d", &choice);
		switch (choice){ //if choice là mấy thì làm gì
			case 1:
				computeDiskArea();
				break;
			case 2:
				computeRectangleArea();
				break;
			case 3:
				computeTriangleArea();
				break;
			case 4:
				printf("See you next time!\n");
				break;
		}
	} while (choice != 4);
	return 0;
}
void printMenu() {
	printf("Welcome to MathHelper Program\n");
	printf("Choose the following function to play with:\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Quit\n");
}
void computeDiskArea() {
	double radius, area;
	printf("You choose to compute the disk area\n");
	printf("Please input a radius (>0): ");
	scanf("%lf", &radius);
	//area = 3.14 * radius * radius;
	//area = 3.14 * pow(radius, 2);
	//area = PI * pow(radius, 2);
	//printf("The disk with r = %.2lf has a area of %.2lf\n", radius, area);
	printf("The disk with r = %.2lf has a area of %.2lf\n", radius, (pow(radius, 2)));
}
void computeRectangleArea() {
	int width, length;
	printf("You choose to compute the rectangle area\n");
	printf("Please input a width:\n");
	printf("Please inpit a length:\n");
	scanf("%d%d", &width, &length);
	printf("The rectangle with width = %d and length = %d has a area of %d\n", width, length, (width * length));
}
void computeTriangleArea() {
	double a, b, c, s;
	printf("You choose to compute the triangle area\n");
	printf("Please input a:\n");
	printf("Please input b:\n");
	printf("Please input c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	s = (a + b + c) / 2;
	printf("The triangle with 3 edges %.2lf %.2lf %.2lf has a area of %.2lf\n", a, b, c, (sqrt(s * (s - a) * (s - b) * (s - c))));
}