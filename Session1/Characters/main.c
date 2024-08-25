#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
// Viết app nhập chữ cái đầu trong tên bạn (chữ hoa), sau đó in ra chữu thường
   char fL; // Cú pháp con lạc đà gù lưng (camel case notation)
   printf("Input the 1st letter in your first name: ");
   scanf("%c", &fL);
   printf("You have just input the character: %c\n", fL);
   //Đổi hoa sang thường
   fL += 32;
   printf("And it is converting to lower case as:            %c\n", fL);
   printf("And it is converting to lower case as\t\t\t%c", fL);
	return 0;
}