#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a[5] = {5, -10, -15, 20, -25};
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; addr: %u\n", i, a[i], &a[i]);
	//Tên mảng là biến con trỏ, chốt số nhà thằng đầu mảng
	//Có tọa độ a[0], còn muốn xem value a[0] thì phải là *a
	printf("A stores/holds the addr: %u\n", a);
	//Vào value a[0] bằng con trỏ a
	printf("a[0] = %d\n", *a);
	//In value a[1]
	printf("a[1] = %d\n", *(a + 1));
	//Sửa value mảng:
	//a[1] = 69;
	*(a + 1) = 69; //Gán luôn con vợ này
	printf("Array after 69:\n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %4d; addr: %u\n", i, a[i], &a[i]);
	//a++; - Sai 
	//Chơi thử với hari coi
	int* hari;
	hari = &a[0]; &a[1];
	hari = a; //Vì tên mảng chính là địa chỉ a[0]
	//in thử mảng qua hari
	printf("The array has values (hari pointer):\n");
	for (int i = 0; i < 5; i++)
		//printf("%d\t", a[i]);
		printf("%d\t", *(hari++));
	//Sau khi for xong, hari trỏ phần tử cuối
	printf("Hari now points to: %u\n", --hari);
	printf("The last element of array: %d\n", *hari);
	return 0;
}