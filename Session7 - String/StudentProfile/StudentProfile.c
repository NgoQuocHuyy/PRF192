#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu
void storeName() {
	char name[] = {'S', 'O', 'S', '\0', '$'};
	//Kí tự được quyền dùng theo 2 cách: mã ASCII hoặc bản thân kí tự
	//Kí tự nháy đơn, mã ASCII là con số nguyên 
	
	//Hàm xem độ dài của chuỗi/tên mình strlen(đưa chuỗi vào) -> độ dài. NULL không tính
	int len = strlen(name);
	printf("Length of your name: %d\n", len);
	printf("Your name: %s\n", name);
	//%s quét chuỗi cho đến khi gặp NULL dừng ngay. Báo hiệu hết chuỗi, không cần quét hết mảng
	//Nếu muốn in phần sau NULL thì dùng for quét từng phần tử bình thường:
	printf("Your name (printed by using for)\n");
	int i;
	for (i = 0; i < 5; i++)
		printf("%c", name[i]);
}

void storeNameV2() {
	char name[] = "Et-O-Et";
	//Khai báo chuỗi nhanh hơn, khỏi cần dùng kí tự nháy đôi vì C tự chèn thêm kí tự null vào cuối chuỗi
	printf("Your name: %s\n", name);
	printf("The length of your name:%d\n", strlen(name));
	
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	//storeName();
	storeNameV2();

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
  }
