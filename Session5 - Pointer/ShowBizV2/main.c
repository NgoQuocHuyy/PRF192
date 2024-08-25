#include <stdio.h>
#include <stdlib.h>

//TT mang theo 5k đô đi Mỹ 
//Đưa ví cho Hari dùng
//Sau đó về Việt Nam, Hari đi chơi với Tiến Đạt
//Tiến Đạt mua tặng Hari túi HM
int main(int argc, char *argv[]) {
	int Tt = 5000;
	int Td = 4000; 
	printf("1st, TT has %d; TD has %d\n", Tt, Td);
	printf("Vi TT is as %u; Vi TD is as %u\n", &Tt, &Td);
	// 2 ví là sát nhau, vùng RAM của TD 24 - 25 - 26 - 27
					//vùng RAM của TT 28 - 29 - 30 - 31
	int* Hari = &Tt;
	printf("1st, Hari said TT has %d\n", *Hari); //5000
	//Hari mua đồ hết 4k
	*Hari -= 4000;
	printf("2nd, Hari said TT has %d\n", *Hari); //Hỏi Hari hay TT là như nhau
	//Hari xem ví TD
	Hari = &Td; //Gán giá trị biến mới cho con trỏ
	printf("3rd, Hari said TD has %d\n", *Hari);
	*Hari -= 2000; //tiêu của TD 2k
	printf("4th, TD said now has %d\n", Td); //Hỏi trực tiếp TD
	return 0;
}