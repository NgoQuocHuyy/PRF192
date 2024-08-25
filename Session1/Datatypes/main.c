#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a = 10, b =3; // 8 byte trong RAM đã được lưu 2 value/con số
	//1. Hỏi giá trị a, b. In ra màn hình
	printf("a = %d; b = %d\n", a, b);
	//2. Hỏi nhà của 2 em gái này ở đâu?
	printf("address of a = %u; address of b = %u\n", &a, &b);
	//3. Nhập từ bàn phím, scanf(&)
	//4. Tại một thời điểm, biến chỉ lưu được một value
	//mất value nếu gán value mới cho biến 
	//on/off đảo thứ tự bit ra số khác ngay
	//0 1 10 11 100 101 110 111
	// int a =69 -> Sai do biến trùng tên. a sẽ quên 10 bên trên và chỉ nhớ em 69 này.
	// Chơi với số thực
	double c = 0.1, d = 3.14; // 10% viết theo kiểu số
	// Vừa khai báo vừa gán value, nhiều biến cùng dòng
	//1. In ra kết quả 2 con số thực lớn 
	printf("c = %.1lf; d = %.2lf\n", c, d);
	//2. Nhà 2 em ở đâu?
	printf("address of c = %u; address of d = %u\n", &c, &d);
	//C cung cấp một lệnh để hỏi CPU rằng một data type bất kì chiếm mấy byte trong RAM
	printf("The number of bytes allocated of an int: %d\n", sizeof(int));
	int size = sizeof(int); // Đây là một hàm/lệnh đưa ra 1 value
		printf("The number of bytes allocated of an int: %d\n", size);
    printf("The number of bytes allocated of an float: %d\n", sizeof(float));
    // Vì sao dùng %d chứ k phải %f. Vì hỏi biến float cần mấy byte chứ kp in ra float
    printf("The number of bytes allocated of an double: %d\n", sizeof(double));
    // Chơi vơi long, số nguyên lớn
    int m = 2100000000; //%d
    long money = 3000000000; //%ld
    printf("The amount 1: %d\n", m);
    printf("The amount 2: %ld\n", money);
    
    


	
	
	return 0;
}