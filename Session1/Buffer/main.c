#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Viết app nhập vào năm sinh và kí tự đầu tiên trong tên. In ra năm sinh, tuổi, kí tự tên
int main(int argc, char *argv[]) {
	int yob, age;
	char fL;
	printf("You are required to input your profile:\n");
	printf("1st, input your yob:");
	scanf("%d", &yob);
	age = 2023 - yob;
	// Trước lệnh nhập kí tự/chuỗi ta xóa bộ đệm (dọn rác)
	fflush(stdin); //flush: dọn, rửa
	               //stdin: standard input (vùng RAM chuẩn dành cho việc nhập data)
	               //MAC,Linux: fpurge(stdin),__fpurge(stdin);
	printf("2st, input your first Letter in your first name:");
	scanf("%c", &fL);
	printf("Your profile is:\n");
	printf("Your yob: %d\n", yob);
	printf("Your age: %d\n", age);
	printf("Your name (brief): %c\n", fL);
	//Nhập vào 2 số nguyên dương
	int x, y;
	printf("You are required to input 2 integers:\n");
	scanf("%d%d", &x, &y);
	printf("The sum of %d and %d is %d\n", x, y, (x + y));
	  //Lười tạo biến trung gian x + y vì xét cho cùng x + y là 1 value nên ta in luôn 
	  //khỏi cần giá trị trung gian/biến trung gian sum
	return 0;
}