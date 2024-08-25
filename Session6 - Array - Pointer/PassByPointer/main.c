#include <stdio.h>
#include <stdlib.h>

//Cho tao địa chỉ, tao sẽ dọn nhà mày
//void f(int x);//Mỗi lần sài hàm, tôi cần con số cụ thể 5 10 15 20 hay một biến int bình thường
			//Truyền tham trị chỉ cần thảy 1 value thường là oke

void f(int* x); //Tui cần mỗi lần sài hàm đừng đưa value 5 10 15 20, không cần
				//Truyền tham chiếu. Tao cần 1 tọa độ, cho t một tọa độ nào đó. Không đưa value thường
				//Tao cần địa chỉ một biến int nào đó, lát tao dọn nhà nó
//Logic: *x sẽ chính là bản gốc, biến ở xa nào đó

int main(int argc, char *argv[]) {
	int x = 10; //biến local
	printf("In main(), before calling f() x is %d\n", x);
	f(&x);
	printf("In main(), after calling f() x finally is %d\n", x);
	
	
	
	return 0;
}

void f(int *x) { //biến local khác
	*x = *x * *x; //chết mẹ em!!!
	//*x =         *x               *               *x;
	//Biến xa = biến xa         Phép nhân		biến xa
	//Trong hàm làm phép nhân, ở xa bị ảnh hưởng
	//Giống với hari tiêu tiền TT
}