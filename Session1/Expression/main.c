#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a =10, b =3;
	int result;
	//int result = 10 - 3; //Viết result = 7 cho nhanh
	result = a - b; //Tính toán đi rồi gán vào biến
	printf("a = %d\nb = %d\n", a, b);
	printf("Result = %d\n", result);
	//Phép nhân, chia
	result = a * b;
	printf("Result = %d\n", result);
	
	result = a / b;
	printf("Result = %d\n", result);
	// Số thực
	float r = a / b; // Bản chất kq là 3 mà lại lưu trong thực nên kq là 3.0000
		printf("r = %f\n", r);
	float re = a * 1.0 / b;
	printf("re = %f\n", re);
    //---------------------------------------------------------------------------
    //Phép toán đặc biệt, 1 ngôi ( 1 số hạng ), tăng tự thân 
    int n = 10;
    n = n + 1; // Được gọi là phép tăng tự thân
    //age = 2022 - yob; (Không tăng giảm tự thân)
    printf("#1 increasing by 1: n =%d\n", n);
    //1.Muốn tăng n lên 1 đơn vị nữa -> n = 12 vì trước đó n = 11
    //n = n + 1; oke
    n =+ 1;
    printf("#2 increasing by 1: n =%d\n", n);
    //2. Muốn tăng n lên 1 nhát nữa
    n++;
    printf("#3 increasing by 1: n =%d\n", n);
    //3. Vẫn muốn tăng n lên một nhát nữa
    ++n;
    printf("#4 increasing by 1: n =%d\n", n);
    
    

	return 0;
}