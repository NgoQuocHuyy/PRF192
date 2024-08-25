#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int Tt = 5000;
	int Td = 4000; 
	int *Hari; //chưa trỏ ai cả
	printf("1st, TT has %d; TD has %d\n", Tt, Td);
	printf("Vi TT is as %u; Vi TD is as %u\n", &Tt, &Td);
	
	Hari = &Td; //Trỏ ví TD
	printf("1st, Hari said TD now has %d\n", Td);
	printf("1st, Hari said TD now has %d\n", *Hari);
	//Tôi muốn Hari lấy ví TT
	//Hari = &Tt; Quá quen
	Hari++; //Tôi là danh bạ, ++ tôi cũng là đi sang địa chỉ kế tiếp. ++ là nhảy 4 byte đến địa chỉ của TT.
	printf("2st, Hari said TT now has %d\n", *Hari);
	
	(*Hari)++; //*Hari tức là đã đến vùng TT. ++ bây giờ chỉ là cộng 1 byte
	printf("2st, Hari said TT now has %d\n", Tt);
	//Quay trở lại chơi với TD:
	Hari--;
	printf("2st, hari said TD now has %d\n", *Hari);
	
	return 0;
}