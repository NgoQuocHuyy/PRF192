#include <stdio.h>
#include <stdlib.h>
//Bà con giữa mảng và con trỏ, giữa mảng tĩnh/mảng động và con trỏ, truyền tham chiếu, mảng/con trỏ là đầu vào
//của hàm
//Lưu và in ra 1 mảng 10 con số nguyên bất kì
int main(int argc, char *argv[]) {
	int a[] = {5, -10, 15, 20, -25};
	for (int i = 0; i < 5; i++)
		printf("The addr of a[%d]: %u | value: %d\n", i, &a[i], a[i]);
	//Tên mảng cũng là một biến, lưu số nhà của biến đầu dãy
	//value của biến tên mảng là số nhà
	//Tên mảng lưu số nhà của thằng a[0] đầu dãy
	//Tên mảng chính là con trỏ, hỏi nó có gì, giống hỏi hari
	//Nó có địa chỉ!!!
	printf("a has value of %u\n", a);
	//Tên mảng là con trỏ, sánh ngang bằng int* hari
	//Lúc nãy mình đi qua mảng bằng hari
	//Giờ mình đi qua mảng = a kiểu con trỏ, có được không?
	
	//in mảng
	printf("The array has values: \n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]); - In mảng kiểu bình thường dùng biến a[i] đã học
	//Dùng con trỏ a in mảng:
	printf("The array has values (using pointer): \n");
	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, *(a + i)); //Giống với hari
		//Vẫn giữ chốt a trỏ đầu dãy, +i để rời nhà lấy địa chỉ mới
		//*(a + i) để lấy value con trỏ, mà không mất chốt!!!
	//TUY NHIÊN HÃY NHỚ:
	//int* hari được gọi là con trỏ tường minh, tức là nó thoải mái ++ -- trỏ
	//Còn a được gọi là con trỏ hằng, nó là con trỏ nhưng không được di chuyển. Việc của nó là chốt đầu mảng
	//nhưng được quyền dùng nó + - để hàm ý tăng địa chỉ. Tuyệt đối không được rời địa chỉ, phải luôn trỏ vào
	//a[0]. Tức con trỏ hari có quyền nhảy từ a[0] sang a[i] còn con trỏ a chỉ được lấy giá trị của a[0] +- a[i]
	
	//TÊN MẢNG ĐỨNG MỘT MÌNH ~ INT*
	//Tại sao tên mảng ngta thường kí hiệu luôn là con trỏ
	//Ex: int f(int a[]) ~~ int f(int* a)
	 
	return 0;
}