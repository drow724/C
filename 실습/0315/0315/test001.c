//3월 15일

//printf문 연습
/*
#include<stdio.h>
int main(void){
    printf("Hello \"C\" world 1 \n");
    printf("Hello \'C\' world 2\n");
    printf("Hello\tC world 3 \n");
    printf("Hello 송재근 C world 4 \n");
    printf("Hello abc C world 5 \n");
    printf("c:\workExample\java \n");
    return 0;
}*/

// printf문 연습2
/*
#include<stdio.h> //전처리기 preprocessor
int main(void){
//    printf("3+4=%d \n", 7);
      printf("A=%d \n", 'A');
      printf("A=%c \n", 'A');
      printf("A=%x \n", 'A');
      printf("A=%o \n", 'A');
      printf("A=%#X \n", 'A');
      printf("A=%#o \n", 'A');
      printf("--------------------- \n");

      printf("A=%d \n", 65);
      printf("A=%c \n", 65);
      printf("A=%x \n", 65);
      printf("A=%o \n", 65);
      printf("A=%#X \n", 65);
      printf("A=%#o \n", 65);
      printf("--------------------- \n");
    return 0;
}
*/

// printf문 연습3
/*
#include<stdio.h>

int main(void){
      char ch = 'A';

      printf("ch=%d \n", ch);
      printf("ch=%c \n", ch);
      printf("ch=%x \n", ch);
      printf("ch=%o \n", ch);
      printf("ch=%#X \n", ch);
      printf("ch=%#o \n", ch);
      printf("--------------------- \n");
      ch = ch + 1;
      printf("A=%d \n", ch);
      printf("A=%c \n", ch);
      printf("A=%x \n", ch);
      printf("A=%o \n", ch);
      printf("A=%#X \n", ch);
      printf("A=%#o \n", ch);
      printf("--------------------- \n");
    return 0;
}
*/

//printf문 연습4
/*
int main(void)
{

	int ch = 65;
	printf("ch=%d, &ch=%#X  \n", ch, &ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", 65, 65, 65, 65);
	printf("--------------------------- \n");

	ch = 97;
	printf("ch=%d, &ch=%#X  \n", ch, &ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", 97, 97, 97, 97);
	printf("--------------------------- \n");

	ch = 49;
	printf("ch=%d, &ch=%#X  \n", ch, &ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d, ch=%#X, ch=%#o, ch=%c \n", 49, 49, 49, 49);
	printf("--------------------------- \n");
	return 0;
}
*/

//3월 16일
//printf문 연습5
/*
#include<stdio.h>
int main(void)	{
	printf("10진수 정수(0.5)=%%d : %d \n", 0.5);
	printf("10진수 정수 : %d \n", 6.5);

	printf("10진수 실수(0.5)=%%f : %f \n", 0.5);
	printf("10진수 실수 : %f \n", 6.5);

	printf("10진수 정수(6)=%%f : %f \n", 6);
	return 0;
}
*/

//printf문 연습6
/*
#include<stdio.h>
int main(void)	{
	int a = 6;
	float b = 6.5;
	printf("10진수 정수(0.5)=%%d : %d \n", b);

	printf("10진수 실수(0.5)=%%f : %f \n", b);

	printf("10진수 정수(6)=%%f : %f \n", a);

	return 0;
}
*/

//숫자 출력하기 실수 float형 double 형 연습
/*
#include<stdio.h>
int main(void)	{
	int a = 10, b = 3;
	float c;
	double d;
//	c = (float)(a / b);

	printf("a/b=  : %f \n", a / b);
	printf("a/b=  : %d \n", a / b);
	printf("(float)(a / b) =  : %f \n", (float)(a / b));
	printf("(float)a / b =  : %f \n", (float)a / b);
	printf("(float)a / b =  : %.8f \n", (float)a / b);
	printf("(float)a / b =  : %.2f \n", (float)a / b);
	printf("(double)a / b =  : %f \n", (double)a / b);
	printf("(double)a / b =  : %.10f \n", (double)a / b);
	printf("(double)a / b =  : %.2f \n", (double)a / b);
	return 0;
}
*/

//문자와 문자열 출력하기 예제 실수 : 2-7.c
/*
#include <stdio.h>
int main(void)	{

	char ch = 'A';
	char ch1 = "A";
	printf("a를 대문자로 표현하면 %c 입니다. \n", 'ch');

	printf("%s %c 입니다. \n", "a를 대문자로 표현하면", ch1);

	printf("%s %d  %s \n", "2곱하기3은", 2 * 3, "입니다.");

	return 0;
}
*/

//필드 폭 지정
/*
#include <stdio.h>
int main(void)
{
	printf("%d, %d, %d \n", 1, 20, 300);
	printf("%d, %d, %d \n", 100, 20, 3);
	printf("%3d, %3d, %3d \n", 1, 20, 300);
	printf("%3d, %3d, %3d \n", 100, 20, 3);
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);
	printf("%-3d, %-3d, %-3d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", 10, 20, 3);

	printf("%f, %.2f, %.5f, %12.3f \n", 123.4567, 123.4567, 123.4567, 123.4562);
	printf("%c, %3c, %+3c, %-3c, \n", 'A', 'A', 'A', 'A');
	return 0;
}
*/

//키보드로부터 데이터 입력받기 -scanf()함수 _ buffer 사용
//키보드로부터 데이터 입력받기 -scanf_s() 함수 (사용))
/*
#include <stdio.h>
int main(void)
{
	int age = 0;
	char ch;

	printf("age를 입력하세요");
	scanf_s("\n%d", &age);
	printf("age=%d \n", age);
	printf("&age=%#X \n", &age); // & 번지
	printf("*&age=%d \n", &age); //값

	printf("한 문자를 입력하세요");
	scanf_s("\n%c", &ch);
	printf("ch=%c \n", ch);
	return 0;
}
*/

//
/*
#include <stdio.h>
int main(void)	{

	int a, b, c;

	printf("10진수 정수 1개 입력: ");
	scanf_s("%d", &a);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", a, a, a);

	printf("16진수 정수 1개 입력:");
	scanf_s("%x", &b);
	printf("10진수: %d, 16진수: %x, 8진수: %o \n", b, b, b);

	printf("8진수 정수 1개 입력:");
	scanf_s("%o", &c);
	printf("10진수: %d, 16진수: %x, 8진수: %o \n", c, c, c);
	return 0;
}
*/
