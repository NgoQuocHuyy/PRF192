#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Có 2 loại hàm:
//a,Hàm có sẵn do các dev viết. Tìm và đem về dùng 
//gọi là Pre-defined function
//tolower(kí tự) -> chữ thường
//sqrt(con số) -> căn bậc 2
//abs(con số) -> trị tuyệt đối
//sin(độ góc cung) -> trả về sin
//pow(5, 2) -> trả về 5^2
//...
//đặt hàm này vào trong các thư viện và phân loại
//Mình có thể tự tạo thư viện cho riêng mình

//b,Hàm tự làm, nhận vào và trả về 
//gọi là Custom function
//getFactorial()
int main(int argc, char *argv[]) {
	//Lấy căn bậc 2 của 100 rồi chạy xem có bằng 10 không?
	//double sqrt(double x)
	//int getF(int n)
	//y = f(x)
	sqrt(100); //Chạy rồi nhưng không in 
	printf("Can bac hai cua %d = %.2lf\n", 100, sqrt(100)); //Hàm trả về value
	//Có thể dùng biến trung gian result -> double result = sqrt(100); -> printf("...", result, sqrt(100));
	//Bài cơ bản re-use tính tổng căn 10 + căn 25 + căn 64
	double sum = sqrt(10) + sqrt(25) + sqrt(64); //3 + 5 + 8 = 16
	printf("Sum of can %.2lf\n", sum);
	
	//Tính trị tuyệt đối -5 = 5
	//int r = abs(-5);
	printf("Tri tuyet doi cua %d is %d", -50, abs(50));
	return 0;
}