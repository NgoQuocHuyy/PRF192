#include <stdio.h>
#include <stdlib.h>

//Trấn Thành đem 5k đô đi sắm đồ cùng Hari
//Trấn Thành sài tiền mình là chuyện bình thường
//Hari lấy tiền Trấn Thành sai -> bình thường (vợ chồng)
int main(int argc, char *argv[]) {
	int tT = 5000; 
	//Giả sử Trấn Thành mua đồ tốn 1k. Hỏi Trấn Thành còn bao nhiêu?
	//Phải mô phỏng được việc Trấn Thành tiêu tiền
	//tT = 4000; -> Sai vì đây là gán biến = giá trị mới
	//TT tiêu tiền tức là tiền bị giảm, ban đầu 5 trừ 1 còn 4 -> Phải có hành động
	tT -= 1000;
	//Hari xài, ví TT phải giảm, tức TT đưa ví cho Hari tự do mua 
	int* hari = &tT; //Hành động đưa ví
					//&tT là tọa độ, địa chỉ của hộp tT đang chứa 4k
	//int* là 1 data type mới. Nó dùng để đại diện, lưu trữ danh bạ, lưu đại chỉ của biến int khác.
	//địa chỉ của biến cũng là con số nhưng không phải số bình thường mà còn mang ý nghĩa địa chỉ
	
	//Kiểm tra xem có đúng Hari đã cầm ví TT chưa khi đã chỉ ra vị trí
	printf("Vi TT is at %u\n", &tT);
	printf("After buying a LV bag, TT now has %d\n", tT);
	printf("Vi TT is at %u\n", hari); //hari alf một cái hộp danh bạ chứa địa chỉ, cũng là một biến. Hỏi biến
									//có gì thì gọi tên nó ra
	//Đã có ví, giờ sài tiền từ ví TT thôi. Hari hiện đang nắm vị trí của cái ví chứa 4k
	printf("Hari said: TT now has %d\n", *hari); //*hari là zoom đến địa chỉ danh bạ chứa 4k
	//*hari ~ ví TT rồi 
	*hari -= 3000; //Hari tiêu tiền. Vậy TT còn bao nhiêu?
	printf("After buying a Dior bag, TT now has %d\n", tT);
	//Dùng biến con trỏ can thiệp vào biến gốc
	
	return 0;
}