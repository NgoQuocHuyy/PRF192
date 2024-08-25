#include <stdio.h>
#include <stdlib.h>

//Viết đoạn code lưu thông tin 5 con số nguyên. Viết hàm lưu mảng 5 con số nguyên và in ra
void printIntegersList();
void printIntegersListHeap(); //Mình sẽ đi xin RAM theo cách của mình, lưu các phần tử của mảng vào heap
int main(int argc, char *argv[]) {
	printIntegersList();
	printIntegersListHeap();
	return 0;
}
void printIntegersList() {
	int a[] = {5, -10, 15, -20, 25, -30}; //Mảng local array nằm trong stack segment gồm 6 biến int
	printf("The array has values of\n");
	for (int i = 0; i < 6; i++)
		//printf("%d ", a[i]);
		printf("%d ", *(a + i));
	printf("\n"); 
}
void printIntegersListHeap() {
	int* hari;
	int* p; //pointer - là 1 vùng ram cần tạo độ
	//p = &một biến int nào đó
	//p = một địa chỉ, một tọa độ/con số là địa chỉ
	//p = (int*)6000000; ép 6000000 là địa chỉ
	//Byte 6000000, +1, +2, +3 là 4 byte của 1 biến int nào đó
	p = (int*)malloc(24); //em xin windows 24 byte, chia hết cho 4
						//con trỏ int mai mốt sẽ nhảy 4 ++ --
						//Hàm malloc sẽ xin 24 byte ở HEAP và chốt tọa độ byte đầu, đưa tọa độ đó cho p
						//p lưu tọa độ đầu tiên của 24 byte
	//p có mùi giống biến tên mảng, cai quản 24/4 = 6 cụm 4
	//											6 biến int
	//p giống tên mảng vì nó lưu tọa độ cụm 4 đầu tiên, lưu đầu dãy
	//p được quyền dùng như mảng, tức là p[0] 4 byte đầu
	//									p[1] 4 byte kế
	//Khai báo con trỏ xài như mảng
	p[0] = 5;
	p[1] = -10;
	p[2] = 15;
	p[3] = -20;
	p[4] = 25;
	p[5] = -30;
	
	printf("The array has values of (using Heap)\n");
	for (int i = 0; i < 6; i++)
		//printf("%d ", a[i]);
		printf("%d ", *(p + i));
}