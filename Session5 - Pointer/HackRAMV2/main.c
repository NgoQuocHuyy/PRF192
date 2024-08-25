#include <stdio.h>
#include <stdlib.h>

//Số nhà, địa chỉ là 1 con số nhưng con số thì không hẳn là số nhà
//&yob -> con số, tọa độ vùng RAM 
// 6M80
//Lật ngược vấn đề: cheat engine: Khi tao có một con số và tao muốn nói rằng nó là tọa độ của 1 biến khác
//thì có cách nào convert 1 con số bình thường thành địa chỉ không
//Xưa nay muốn lấy tọa độ phải là &biến. Tự dưng bây giờ có 1 con số và muốn nói rằng đó là địa chỉ
int main(int argc, char *argv[]) {
	int yob = 2004;
	int* hari;
	printf("The addr of yob: %u\n", &yob); //xem thử địa chỉ  6618828
	//xem value của yob
	printf("Yob: %d\n", yob);
	//Ta đã biết địa chỉ của yob và giờ ta sẽ sửa nó
	//hari = &yob; - quá đúng rồi
	//hari = cần 1 địa chỉ, cho em 1 địa chỉ của int nào đó 
	//hari = 6618828; //Ghi thế này không ổn vì đây là con số. Địa chỉ là con số nhưng con số k chắc là địa chỉ
	//CPU sẽ nhầm lẫn với giá trị biến int một số nguyên 
	//Mình phải nhấn đây là con số nhưng nó là địa chỉ, k phải value. Nếu là địa chỉ thì cất vào biến con trỏ int*
	hari = (int*)6618824; //cast/ép kiểu. Đưa địa chỉ qua int*. Giống với &yob nhưng &yob bản chất nó đã convert thành int*
	printf("Yob now is %d\n", *hari);
	//Sửa value
	*hari = 101010;
	printf("Finally, yob now is %d\n", yob);
	return 0;
}