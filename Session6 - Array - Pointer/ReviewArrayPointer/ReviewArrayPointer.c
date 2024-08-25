#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

void printArray() { //Hàm này in ra một mảng các số nguyên 
	int a[] = {5, -10, 15, -20, -25};
	printf("The array has value of (using [i])\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	/*
	//Sử dụng in mảng bằng con trỏ
	printf("The array has value of (using *)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(a + i));
	*/
	}
}
/*
	int *p; //p = &của ai đó
	p = a; //a = a[0]
	//p = a[0]: như nhau
	//CON TRỎ THUẦN CHỦNG
	printf("The array has value of (using *p)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p + i)); //p ngang với a
	
	
	printf("The array has value of (using *p V2)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	//Con trỏ thuần chủng ngon hơn con trỏ tên mảng vì nó được quyền ++ -- vì bản thân của nó là vùng
	//RAM riêng nên đc trỏ lung tung
	
	
	printf("The array has value of (using *p V3)\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(p++)); //p -> a[0]
								//p++ -> a[1]...
*/
//VÙNG NHỚ OANH TẠC TỰ DO (Heap Segment)
void printArrayHEAP() {
	int* hari;
	hari = malloc(20); //Xin RAM 20 byte / 4 -> Lấy 5 biến int
	hari[0] = 5;
	hari[1] = -10;
	hari[2] = 15;
	hari[3] = -20;
	hari[4] = 25;
	printf("The array has value of\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(hari + i)); //C1
		//printf("%d ", hari[i]); //C2
		//CÂU LỆNH QUAN TRỌNG:
		free(hari); //trả lại vùng ram hari đang trỏ cho Windows sau khi chạy xong
		//Hari nằm trong stack, Windows chủ động thu lại vùng RAM này
		//Nếu không trả lại vùng malloc thì vùng Heap sẽ tăng dần. Windows không lấy lại được -> Ram giảm
		//dung lượng -> Hiện tượng rò rỉ memory
	}
	
}
//Viết hàm nhập một mảng từ bàn phím, sử dụng con trỏ
void inputArrayHeap() {
	int n, i;
	scanf("%d", &n);
	int* hari = malloc(n * 4); //Bội số của 4 vì nó sẽ nhảy 4 - biến int
	for (i = 0; i < n; i++) {
		printf("input a[%d]: ", (i + 1));
		scanf("%d", (hari + i)); //Dùng địa chỉ gửi scanf() kiểu con trỏ
	}
	for (i = 0; i < n; i++)
	printf("%d", hari[i]);
	
	free(hari);
}

int main() {
  system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	//printArray();
	//printArrayHEAP();
	inputArrayHeap();
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
  }



