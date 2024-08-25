#include <stdio.h>
#include <stdlib.h>

//Lễ tình nhân, tặng phiếu mua hàng or $
//Tự hỏi liệu anh ny có tặng tiền/phiếu mua hàng hay không?
//?$
int main(int argc, char *argv[]) {
	int gift = 16164; //trong ram lưu con số 4 byte
	int* hari = &gift;
	//Char* hack = biến char khác
	//char* hack = & địa chỉ của biến char khác
	char* hack = &gift; //Chỉ lấy 1 byte so với int lấy 4 byte vì kích thước kiểu char là 1
	
	//Hỏi rằng hari đang trỏ đến value cụ thể nào
	printf("Gift = %d\n", *hari);
	//Hỏi hari đang lưu địa chỉ gì
	printf("Gift addr = %u\n", hari);
	//Hỏi hack đang chứa trỏ kí tự gì
	printf("Hack? $$$$ = %c\n", *hack); //$ là byte đầu của vùng địa chỉ lưu biến gift
	//In ra kí tự ? - kí tự ? là byte thứ 2 của biến gift, bên trên byte $
	hack++;
	printf("Finally hack ???? = %c\n", *hack); 
	return 0;
}