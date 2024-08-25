#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//tư duy viết hàm cho bài MathHelper
void printMenu();

int main(int argc, char *argv[]) {
	int choice; //Sự lựa chọn option
	//Chưa bằng 4 không cho thoát
	double radius, area;
	int width, length; 
	do{
		printMenu();
		printf("Choose 1 - 4: ");
		scanf("%d", &choice);
		switch (choice){ //if choice là mấy thì làm gì
			case 1:
				printf("You choose to compute the disk area\n");
				printf("Please input a radius (>0): ");
				scanf("%lf", &radius);
				area = 3.14 * radius * radius;
				printf("The disk with r = %.2lf has a area of %.2lf\n", radius, area);
				break;
			case 2:
				printf("You choose to compute the rectangle area\n");
				printf("Please input a width: \n");
				printf("Please inpit a length: \n");
				break;
			case 3:
				printf("You choose to compute the triangle area\n");
				printf("Please input a sideLength: \n");
				break;
			case 4:
				printf("See you next time!\n");
				break;
		}
	}while (choice != 4);
	return 0;
}
void printMenu(){
	printf("Welcome to MathHelper Program\n");
	printf("Choose the following function to play with:\n");
	printf("1. Compute the disk area\n");
	printf("2. Compute the rectangle area\n");
	printf("3. Compute the triangle area\n");
	printf("4. Quit\n");
}