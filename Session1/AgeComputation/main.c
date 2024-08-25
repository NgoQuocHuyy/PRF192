#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// viết app nhỏ nhỏ tính tuổi của ai đó dựa trên năm sinh
	// nhập vào từ bàn phím, sau đó in ra tuổi
	// công thức tính tuổi: age = 2022 - năm sinh ( Lấy năm hiện hành từ máy tính )
 int yob, age;
     //printf("Your year of birth is %d\n", yob);
  // Xin biến/ declare a variable mà k gán value thì vùng RAM này trước đó có thể có on/off 
  // của app khác trước đó để lại, nếu mình in value thì sẽ nhận một giá trị vớ vẩn nào đó
  // gọi là GABRAGE VALUE gây nên nguy hiểm cho app vì app xử lý sai
   printf("Please input your yob: ");
   scanf("%d", &yob);
   age = 2022 - yob;
   printf("As I guess, you are %d years old\n", age);
   	
   	
  
  
  
  
	return 0;
}