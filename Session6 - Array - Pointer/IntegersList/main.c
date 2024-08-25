#include <stdio.h>
#include <stdlib.h>
//Bà con giữa mảng và con trỏ, giữa mảng tĩnh/mảng động và con trỏ, truyền tham chiếu, mảng/con trỏ là đầu vào
//của hàm
//Lưu và in ra 1 mảng 10 con số nguyên bất kì
int main(int argc, char *argv[]) {
	int a[] = {5, -10, 15, 20, -25};
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	//Địa chỉ cách nhau 4 byte, dùng con trỏ ++, -- để xem các value
	int* hari = &a[0]; //trỏ vào đầu dãy lưu địa chỉ của biến đầu mảng
	//printf("a[0] = %d\n", a[0]); - quá bình thường
	printf("a[0] = %d\n", *hari);
	printf("a[1] = %d\n", a[1]);
	//Cách để tìm value của a[1]
	hari++;
	printf("a[1] = %d\n", *hari);
	//++ rồi in* đi hết mảng, sao không for
	hari = &a[0]; //reset con trỏ về đầu mảng
	//In cả mảng cho ngon
	printf("The array has value:\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(hari + i));
		//Hari vẫn chốt đầu mảng, lấy tọa độ cộng thêm i và vào tọa độ đó in value gốc
		
	//Biến con trỏ + thì là có địa chỉ mới
	//vào địa chỉ mới *(con trỏ +)
	//Con trỏ vẫn chốt mà vẫn duyệt được mảng
	
	
	return 0;
}