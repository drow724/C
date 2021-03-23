// 3월 15일
// printf문 연습
/*
#include<stdio.h>
int main(void) {
	printf("Hello \"C\"  world 1 \n\n");
	printf("Hello \'C\' world 2 \n");
	printf("Hello\tC world 3 \n");
	printf("Hello 박성효 C world 4 \n");
	printf("Hello abc C world 5 \n");
	printf("c:\workexam\java \n");
	return 0; 
}
*/

//  printf문 연습2
/*
#include<stdio.h>  // 전처리기 preprocessor
int main(void) {
//	printf("3+4=%d \n", 3+4);
	printf("A=%d \n", 'A');
	printf("A=%c \n", 'A');
	printf("A=%x \n", 'A');
	printf("A=%o \n", 'A');
	printf("A=%#X \n", 'A');
	printf("A=%#o \n", 'A');
	printf("-------------------- \n");
	printf("A=%d \n", 65);
	printf("A=%c \n", 65);
	printf("A=%x \n", 65);
	printf("A=%o \n", 65);
	printf("A=%#X \n",65);
	printf("A=%#o \n", 65);
	printf("-------------------- \n");
	return 0;
}
*/

//  printf문 연습3
/*
#include<stdio.h>  // 전처리기 preprocessor
int main(void) {
//	char ch = 'A';
	int ch = 65;
	printf("ch=%d \n", ch);
	printf("ch=%c \n", ch);
	printf("ch=%x \n", ch);
	printf("ch=%o \n", ch);
	printf("ch=%#X \n", ch);
	printf("ch=%#o \n", ch);
	printf("-------------------- \n");
	ch = ch + 1;
	printf("ch=%d \n", ch);
	printf("ch=%c \n", ch);
	printf("ch=%x \n", ch);
	printf("ch=%o \n", ch);
	printf("ch=%#X \n", ch);
	printf("ch=%#o \n", ch);
	printf("-------------------- \n");
	return 0;
}
*/

//  printf문 연습4
/*
#include<stdio.h>  
int main(void) {
	int ch = 65;
	printf("ch=%d , &ch=%#X  \n", ch, &ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c\n", 65, 65, 65, 65);
	printf("-------------------- \n");
	ch = 97;
	printf("ch=%d , &ch=%#X  \n", ch, &ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c\n", 97, 97, 97, 97);
	printf("-------------------- \n");
	ch = 49;
	printf("ch=%d , &ch=%#X  \n", ch, &ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c \n", ch, ch, ch, ch);
	printf("ch=%d , ch=%#X , ch=%#o , ch=%c\n", 49, 49, 49, 49);
	printf("-------------------- \n");
	
	return 0;
}
*/

// 3월 16일
// printf문 연습5 숫자(실수) 출력하기  
/*
#include<stdio.h>
int main(void) {
	printf("10진수 정수(0.5)=%%d : %d  \n", 0.5);
	printf("10진수 정수: %d  \n", 6.5);

	printf("10진수 실수(0.5)=%%f : %f  \n", 0.5);
	printf("10진수 실수: %f  \n", 6.5);

	printf("10진수 정수(6)=%%f : %f  \n", 6);

	return 0;
}
*/

// printf문 연습6 숫자(실수) 출력하기  
/*
#include<stdio.h>
int main(void) {
	int a = 6;
	float b = 6.5;
	printf("10진수 정수(6.5)=%%d : %d  \n", b);
	
	printf("10진수 실수(0.5)=%%f : %f  \n", b);
	
	printf("10진수 정수(6)=%%f : %f  \n", a);

	return 0;
}
*/

// 숫자 출력하기 실수 float형 double형 연습
/*
#include <stdio.h>
int main(void){
	int a = 10, b = 3;  
	float c;
	double d;
//	c = (float)(a / b);
	printf("a/b= %f \n", a / b);
	printf("a/b= %d \n", a / b);
	printf("(float)(a / b)= %f \n",(float)(a / b));
	printf("(float)a / b= %f \n", (float)a / b);
	printf("(float)a / b= %.8f \n", (float)a / b);
	printf("(float)a / b= %.2f \n", (float)a / b);
	printf("(double)a / b= %f \n", (double)a / b);
	printf("(double)a / b= %.10f \n", (double)a / b);
	printf("(double)a / b= %.2f \n", (double)a / b);
	

	return 0;
}
*/

// 문자와 문자열 출력하기 예제 실습 : 2-7.c
/*
#include <stdio.h>
int main(void){
	char ch = 'A';
	char ch1 = "A";
	printf("a를 대문자로 표현하면 %c 입니다. \n", ch);
	printf("%s %c 입니다. \n", "a를 대문자로 표현하면", "A");

	printf("%s %d  %s \n", "2곱하기3은", 2 * 3, "입니다.");

	return 0;
}
*/

// 필드 폭 지정
/*
#include <stdio.h>
int main(void){
	printf("%d, %d, %d \n", 1, 20, 300);
	printf("%d, %d, %d \n", 100, 20, 3);
	printf("%3d, %3d, %3d \n", 1, 20, 300);
	printf("%3d, %3d, %3d \n", 100, 20, 3);
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);
	printf("%-3d, %-3d, %-3d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", 100, 20, 3);

	printf("%f, %.2f, %.5f, %12.3f \n", 123.4567, 123.4567, 123.4567, 123.4562);
	printf("%c, %3c, %+3c, %-3c, \n", 'A','A','A', 'A');

	return 0;
}
*/

// 키보드로부터 데이터 입력받기 – scanf() 함수 _ buffer 사용 
// 키보드로부터 데이터 입력받기 – scanf_s() 함수 (사용)
/*
#include <stdio.h>
int main(void) {
	int age=0;
	char ch;

	
	printf("age를 입력하세요 : ");
	scanf_s("\n%d", &age);
	printf("age=%d \n", age);
	printf("&age=%#X \n", &age);  // & 번지
	printf("*&age=%d \n", *&age);  // * 값

	printf("한 문자를 입력하세요 : ");
	scanf_s("\n%c", &ch);
	printf("ch=%c \n", ch);

	return 0;
}
*/

//  키보드로부터 데이터 입력받기 
/*
#include <stdio.h>
int main(void){
	int a, b, c;

	printf("10진수 정수 1개 입력: ");
	scanf_s("%d", &a);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", a, a, a);

	printf("16진수 정수 1개 입력: ");
	scanf_s("%x", &b);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", b, b, b);

	printf("8진수 정수 1개 입력: ");
	scanf_s("%o", &c);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", c, c, c);
	return 0;
}
*/

// 심볼릭 상수: 상수를 기호화 하여 변수처럼 이름이 있는 상수
// ① const 키워드 이용하기
// ② #define문 이용하기
 /*
#include <stdio.h>
#define  PI   3.14
#define  NUM  3+4  // macro 로 동작 // call by name 
#define  BUFFER_SIZE  200
//  call by name(macro) , call by value, call by referance(address)
int main(  ){
	int a=3, b;
	printf("&a=%d  \n", &a);
//	b = a++ + a++ + a++ 의 결과는 a는 4 b는 9 인가요 ? 
	b = a++ + ++a + ++a;
	printf("a=%d  \n", a);
	printf("b=%d  \n", b);
	printf("&a=%d  \n", &a);

	//	b= ++a + ++a + ++a;
//	printf("a=%d  \n", a);
//	printf("b=%d  \n", b);
//	printf("&a=%d  \n", &a);

	a=NUM* NUM;
//	a = 3+4 * 3+4;
	printf("%d  \n", a);
	b = (NUM) * (NUM);
	//	b = (3+4) * (3+4);
	printf("%d  \n", b);
	int f = 5;
	printf("%d  \n", f);
	printf("%lf  \n", PI);
	printf("%d  \n", NUM);
	printf("%d  \n", BUFFER_SIZE);

	return 0;
}
*/

// 3월 17일
// 함수호출 *100
/*
#include <stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
// int div(int x, int y);
double div(int x, int y);
int main(void){
	int result, result1, result2 ; // result3;
	double result3;
	int a = 10, b = 4;
	printf("a=%d , b=%d \n", a, b);
	result = sum(a, b);
	printf("result=%d \n", result);
	result1 = sub(a, b);
	printf("result1=%d \n", result1);
	result2 = mul(a, b);
	printf("result2=%d \n", result2);
	result3 = div(a, b);
	printf("result3=%f \n", result3);
	return 0;
}
int sum(int x, int y) {
	int answer;
	answer = x + y;
	return answer;
}
int sub(int x, int y) {
	int answer;
	answer = x - y;
	return answer;
}
int mul(int x, int y) {
	int answer;
	answer = x * y;
	return answer;
}

//int div(int x, int y) {
//	int answer;
//	answer = x / y;
//	return answer;
//}

double div(int x, int y) {
	double answer;
	answer = (double)x / y;
	return answer;
}
*/

// max 구하기 함수 이용
/*
#include <stdio.h>
int max(int a, int b);
int main(void){
	int i, j, k;
	printf("숫자 i를 입력하세요: ");
	scanf_s("%d", &i);
	printf("숫자 j를 입력하세요: ");
	scanf_s("%d", &j);
	printf("i=%d , j=%d 입니다. \n", i, j);
	k = max(i, j);  
	printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, k);
	return 0;
}
int max(int a, int b){
	if (a > b){ 
		return a; 
	}
	else { 
		return b;
	}
}
*/

// max 구하기
/*
#include <stdio.h>
int main(void) {
	int i, j, max;
	printf("숫자 i를 입력하세요: ");
	scanf_s("%d", &i);
	printf("숫자 j를 입력하세요: ");
	scanf_s("%d", &j);
	printf("i=%d , j=%d 입니다. \n", i, j);
	if (i > j) {
		max = i;
	}else {
		max = j;
	}
	printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, max);
	return 0;
}
*/
// 함수 적용 방법
/*
#include <stdio.h>
void information(void);
float input(void);                          
void output(float x);                     
float divide(float x, float y); 

int main(void){
	float num1, num2, result;
	information();
	printf("첫 번째 실수 입력: ");
	num1 = input();                         
//	output(num1);  //	printf("num1=%d\n", num1);
	printf("두 번째 실수 입력: ");
	num2 = input();
//	output(num2);  //	printf("num2=%d\n", num2);
	result = divide(num1, num2);
	output(result);  //	printf("result=%d\n", result);
	return 0;
}
void information(void){
	printf("--- 프로그램 시작 ---\n");
	return;
}

float input(void){
	float val;
	scanf_s("%f", &val);
	return val;
}
float divide(float x, float y) {
	float val;
	val = x / y;
	return val;
}
void output(float x) {
	printf("출력값 : %f \n", x);
	return;
}
*/

// 변수의 종류와 범위
// 9-5.c  // 지역변수
/*
#include <stdio.h>
void func_A (void);		
int main(void){
	int aaa = 10;
		printf("main( ) 함수의 aaa 값 : %d\n", aaa );
		func_A( );	
		printf("main( ) 함수의 aaa 값 : %d\n", aaa);
		return 0;
}

void func_A(void)					
{
		int aaa=20;								
		int bbb=30;							
		printf("func_A( ) 함수의 aaa 값 : %d\n", aaa );
		printf("func_A( ) 함수의 bbb 값 : %d\n", bbb );
		return ;
}
*/

// 9-6.c
/*
#include <stdio.h>
int main(void){
		int i=0;		
		for(i=1; i<=10; i=i+1){   
			printf("Hello C world %2d\n", i);
		}
		printf("----반복 종료----\n");
		printf("i 값은 %2d입니다.\n", i);
		return 0;
}
*/
// 3월 18일
// 반복문 for
// 1) Sum=7+7+7+...+7   NUM(10) 항까지의 합
/*
#include <stdio.h>
int main(void) {
	int cnt, sum=0;
	for (cnt = 1; cnt < 11; cnt = cnt + 1) {
//	for (cnt = 1; cnt != 11; cnt = cnt + 1) {
//	for (cnt = 1; cnt <= 10; cnt = cnt + 1) {
		sum = sum + 7;
		printf("cnt=%2d, sum=%4d\n", cnt,  sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, sum=%4d\n", cnt, sum);
	return 0;
}
*/
// 2) Sum=1+2+3+4+?...+NUM   NUM(10)항까지의 합-1유형
//        i   1  2  3  4
//              1  1  1  1
//  cnt++; ++cnt; cnt=cnt+1; cnt+=1;  cnt 1 증가
/*
#include <stdio.h>
int main(void) {
	int cnt, i=1, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i; 
		printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
		i = i + 1;  // i++;
		
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	return 0;
}
*/

// 2) Sum=1+ 1+2+3+4+?...+NUM   NUM(10)항까지의 합- 2 유형 *100
//             i   1  2  3  4
//                   1  1  1  1
/*
#include <stdio.h>
int main(void) {
	int cnt, i=0, sum=1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;  
		sum = sum + i;
		printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	return 0;
}
*/
// 3) Sum=2+4+6+8+?...+NUM   NUM(10)항까지의 합
//        i   2  4   6  8
//              2  2  2  2
/*
#include <stdio.h>
int main(void) {
	int cnt, i=2, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
		i = i + 2;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	return 0;
}
*/

// 3-2) Sum=2+4+6+8+?...+NUM   NUM(10)항까지의 합
//           i   2  4   6  8
//                 2  2  2  2
/*
#include <stdio.h>
int main(void) {
	int cnt, i=0, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 2;
		sum = sum + i;
		printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
		
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	return 0;
}
*/
// 3-3) Sum=1+3+5+?...+...+NUM   NUM(10)항까지의 합 _시험용
//           i   1  3  5  7
//                 2  2  2  2
/*
#include <stdio.h>
int main(void) {
	int cnt, i=1, sum=1;  // i=3;
	for (cnt = 1; cnt <= 9; cnt++) {
		i = i + 2;
		sum = sum + i;
		printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	//	i = i + 2;

	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%d, i=%d, sum=%d\n", cnt, i, sum);
	return 0;
}
*/
// 6) Sum = 2 + 3 + 5 + 8 + 12 + 17 + ? ... + NUM(10항) 항까지의 합
//          i    2   3    5    8 
//          j      1   2    3    4
/*
#include <stdio.h>
int main(void) {
	int cnt, j=0, i=2, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
		j = j + 1;
		i = i + j;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/

// 6-2) Sum = 2 + 3 + 5 + 8 + 12 + 17 + ? ... + NUM(10항) 항까지의 합
//            i    2    3    5    8 
//            j       1    2    3    4
/*
#include <stdio.h>
int main(void) {
//	int cnt, j=-1 , i=2 , sum=(0 );
	int cnt, j = 0, i = 2, sum =2;
	for (cnt = 1; cnt <= 9; cnt++) {
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
		
	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/

// 7) Sum = 1 + 2 + 4 + 7 + 11 + 16 + ? ... + NUM(10항) 항까지의 합
//         i    1    2    4    7     11
//         j       1    2    3    4
//                    1    1    1
/*
#include <stdio.h>
int main(void) {
	int cnt, j =0 , i =1 , sum =0 ;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
		j = j + 1;   // j++;  ++j;   j+=1;
		i = i + j;

	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/

// 7-2) Sum = 1 + 2 + 4 + 7 + 11 + 16 + ? ... + NUM(10항) 항까지의 합
//            i    1    2    4    7     11
//            j      1    2    3    4
//                      1    1    1
/*
#include <stdio.h>
int main(void) {
	int cnt, j =0 , i =1 , sum =1 ;
	for (cnt = 1; cnt <= 9; cnt++) {
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/


// 8) Sum = 1 + 3 + 6 + 10 + 15 + 21 + ? ... + NUM(10항) 항까지의 합
//         i     1   3     6   10    15
//         j       2    3    4      5
/*
#include <stdio.h>
int main(void) {
	int cnt, j =1 , i =1 , sum =0 ;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
		j = j + 1;
		i = i + j;
	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/

// 8-2) Sum = 1 + 3 + 6 + 10 + 15 + 21 + ? ... + NUM(10항) 항까지의 합
//            i     1   3     6   10    15
//            j       2    3    4      5
/*
#include <stdio.h>
int main(void) {
	int cnt, j =1 , i =1 , sum =1 ;
	for (cnt = 1; cnt <= 9; cnt++) {
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/

// 8-3) Sum = 0 +1 + 3 + 6 + 10 + 15 + 21 + ? ... + NUM(10항) 항까지의 합
//            i     0   1   3     6   10    15
//            j       1   2    3    4      5
/*
#include <stdio.h>
int main(void) {
	int cnt, j =0 , i =0 , sum =0 ;
	for (cnt = 1; cnt <= 10; cnt++) {
		j = j + 1;
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	}
	printf("----------반복문 종료---------\n");
	printf("cnt=%2d, j=%2d, i=%2d, sum=%4d\n", cnt, j, i, sum);
	return 0;
}
*/
//10)Sum = 1!+ 2!+ 3!+ ... + NUM!  (10)항까지의 합
//10)Sum = (1) + (1 * 2) + (1 * 2 * 3) + (1 * 2 * 3 * 4)... + (1 * 2 * 3 * 4*...*NUM)
/*
#include <stdio.h>   // 0!=1 ; 정의 
int main() {
	int cnt, i = 0, sum = 0, fact = 1;
//	float sum=0, fact = 1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		fact = fact * i;  // 1! = 1*1;
		sum = sum + fact;
		printf("cnt=%2d, i=%2d, fact=%10d, sum =%10d\n", cnt, i, fact, sum);
//		printf("cnt=%2d, i=%2d, fact=%12.0f, sum =%12.0f\n", cnt, i, fact, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, fact=%10d, sum =%10d\n", cnt, i, fact, sum);
//	printf("cnt=%2d, i=%2d, fact=%12.0f, sum =%12.0f\n", cnt, i, fact, sum);
	return 0;
}
*/
// fact 구하기
/*
#include <stdio.h>
int fact(int n);
int main(void) {
	int i, j, num, result;
	printf("숫자 num를 입력하세요: ");
	scanf_s("%d", &num);
	printf("num=%d 입니다. \n",num);
	result = fact(num);
	printf("num=%d , result=%d. \n", num, result );
	return 0;
}
int fact(int n) {
	if (n==1) {
		return 1;
	}
	else {
		return n * fact(n-1);  // 5*fact(4)
	}                               //     4*fact(3)
}                                   //          3*fact(2)
                                    //              2*fact(1)
                                    //                   1

*/

// Sum=1 + 1 +  2  +  3 + 5 + 8 + 13 + 21 + 34 +...+NUM(10항) 항까지의 합;
 //        i     j     fi=i+j
 //              i      j      fi
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i = 1, j = 1, fi, sum = 2;  // sum = (i+j );
	for (cnt = 3; cnt <= NUM; cnt++) {  //  cnt <= 10
//	for (cnt = 1; cnt <= NUM-2; cnt++) {
		fi = i + j;
		sum = sum + fi;
		printf("cnt=%2d, i=%2d, j=%2d, fi=%3d, sum=%4d\n", cnt, i, j, fi, sum);
		i = j;
		j = fi;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, fi=%3d, sum=%4d\n", cnt, i, j, fi, sum);

	return 0;
}
*/

// 피보나치 구하기
/*
#include <stdio.h>
int fibo(int n);
int main(void) {
	int i, j, num, result;
	printf("숫자 num를 입력하세요: ");
	scanf_s("%d", &num);
	printf("num=%d 입니다. \n",num);
	result = fibo(num);
	printf("num=%d , result=%d. \n", num, result );
	return 0;
}
int fibo(int n) {   // fibo(5)=fibo(5-2) + fibo(5-1);
	if (n<=2) {    // fibo(5)= fibo(3) + fibo(4);
		return 1;  // fibo(3) = fibo(1) + fibo(2);
	}                // fibo(4) = fibo(2) + fibo(3);
	else {          // fibo(3) = fibo(1) + fibo(2);
		return fibo(n-2) + fibo(n-1);
	}                               
}                                  
*/

// 3월 19일 금요일 반복문 제어문
// 반복문 for 변형1 선 처리 후 증가
//2_Sum=1+2+3+4+?...+NUM   NUM(10)항까지의 합
//      i    1  2  3  4
//             1  1  1
/*
#include <stdio.h>
int main() { 
	int cnt, i=1, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		i = i + 1;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	return 0;
}
*/

// 반복문 for 변형2 선 증가 후 처리
//2_Sum=1+2+3+4+?...+NUM   NUM(10)항까지의 합
//      i    1  2  3  4
//             1  1  1
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, sum=0;
	float avg;
	for (cnt = 1; cnt <= NUM; cnt++) {
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
//	avg = (float)sum /( cnt-1);
//	avg = (float)sum /i;
	avg = (float)sum /NUM;
	printf("avg=%.2f\n", avg);
	return 0;
}
*/
	
// 반복문 for 를 while 변형 // cnt 선처리 후 증가
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, sum=0;
	float avg;
	cnt = 1;
	while( cnt <=  10 ) {
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		cnt++;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);

	return 0;
}
*/

// 반복문 for 를 while 변형 // cnt 선처리 후 증가
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, sum=0;
	cnt = 0;
	while( cnt < 10) {  // while( cnt <= NUM-1) {  // while( cnt != NUM) {
		cnt++;
		i = i + 1;
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);

	return 0;
}
*/
// for문을 do while 문으로 변경
//2_Sum=1+2+3+4+?...+NUM   NUM(10)항까지의 합
//      i    1  2  3  4
//             1  1  1
/*
#include <stdio.h>
int main() {
	int cnt, i=1, sum=0;
	cnt = 0;
	do{   
		cnt++;
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		i = i + 1;
		
	} while (cnt < 10);   //  while(cnt (<= ) 9 ) {  //   while(cnt <= ( 9 ) ) {
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	return 0;
}
*/

// for문을 do while 문으로 변경
//2_Sum=1+2+3+4+?...+NUM   NUM(10)항까지의 합
//      i    1  2  3  4
//             1  1  1
/*
#include <stdio.h>
int main() {
	int cnt, i=1, sum=0;
	cnt = 1;
	do{
		sum = sum + i;
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
		i = i + 1;
		cnt++;
	} while (cnt <= 10);   //  while(cnt (< ) 11 ) {  //   while(cnt != 11 ) {
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	return 0;
}
*/

//12)Sum= (1*10)+(2*9)+(3*8)+...+(10*1)
//         i    1        2       3           10
//         j       10       9       8            1
/*
#include <stdio.h>
#define NUM 10 
int main() {
	int cnt, i=0, j= NUM+1, m, sum=0;
	for (cnt = 1; cnt <= NUM; cnt++) {
		i = i + 1;
		j = j - 1;
		m = (i * j);
		sum = sum + m;
		printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
	return 0;
}
*/

//12)Sum= (1*10)+(2*9)+(3*8)+...+(10*1)  응용
//         i    1        2       3           10
//         j       10       9       8            1
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, j= NUM+1, m, sum=0;
	cnt = 1;
	do{
		i = i + 1;
		j = (1+NUM)-i;
		m = (i * j);
		sum = sum + m;
		printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
		cnt++;
	} while (cnt <= NUM);
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
	return 0;
}
*/

// 구구단
// 구구단-1  for 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++){
		for (j = 1; j <= 9; j++){
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
		printf("단 종료 %2d * %2d = %2d \n", i, j, k);
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/


// 구구단
// 구구단-1  while 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i =2;
	while( i <= 9){
		j = 1;b
		while( j <= 9 ){
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
			j++;
		}
		printf("-----%d단 종료---- \n", i);
		i++;
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/

// 구구단
// 구구단-1  while-2 이용  // 선 증가 후 처리
/*
#include <stdio.h>
int main() {
	int i, j, k;
		i = 1;
AA:	i = i + 1;
			j = 0;
BB:		j = j + 1;
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
				if (j < 9)goto BB;
			printf("-----%d단 종료---- \n", i);
		if (i < 9)goto AA;
		printf("---구구단 종료----- \n");
		printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/

// 구구단-1  do-while 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i = 1;
	do{
		i = i + 1;
		j = 0;
		do{
			j = j + 1;
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		} while (j < 9);
		printf("-----%d단 종료---- \n", i);
		printf("단 종료 %2d * %2d = %2d \n", i, j, k);
	} while (i < 9);
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/

// 구구단-1  for 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i =2; i <=9; i++){
//		for (j = 1; j <= 9; j++) {
//		for (j = 1; j <= i; j++) {
//		for (j = i; j <=9; j++){
//		for (j = 1; j <= (2+9)-i; j++) {
		for (j = (2 + 9) - i; j <= 9; j++) {
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
		
	}
	printf("---구구단 종료----- \n");
	
	return 0;
}
*/
//   Sum=1 - 2 +3 -  4 +...+NUM   NUM(10)항까지의 합
//   Sum=1+(-2)+3+(-4)+...+NUM   NUM(10)항까지의 합
//      i    1    2   3    4
//     sw  1   -1   1   -1
//     m   1   -2   3   -4 
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, sw=1, m,  sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		m = i * sw;
		sum = sum + m;
		printf("cnt=%2d, i=%2d, sw=%d, m=%2d, sum=%4d\n", cnt, i, sw, m, sum);
		sw = -sw;  // sw=sw *(-1)
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sw=%d, m=%2d, sum=%4d\n", cnt, i, sw, m, sum);
	return 0;
}
*/
//   Sum=1 - 2 +3 -  4 +...+NUM   NUM(10)항까지의 합
// 시험용
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0, sw=-1, m,  sum=0;  // sw=1 , -1 부호 양수 음수
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		(sw = -sw);
		m = ( i*sw );
		sum = sum + m;
		printf("cnt=%2d, i=%2d, sw=%d, m=%2d, sum=%4d\n", cnt, i, sw, m, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sw=%d, m=%2d, sum=%4d\n", cnt, i, sw, m, sum);
	return 0;
}
*/

//   Sum=1 - 2 +3 -  4 +...+NUM   NUM(10)항까지의 합
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0,  sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		if (i % 2 == 0) {
			sum = sum - i;
		}
		else {
			sum = sum + i;
		}
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	return 0;
}
*/

//   Sum=1 - 2 +3 -  4 +...+NUM   NUM(10)항까지의 합
/*
#include <stdio.h>
#define NUM 10
int main() {
	int cnt, i=0,  sum=0, na;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
	//	na = i % 2;
	//	mok = i / 2;
	//  na = i - mok * 2;
		na = i - i / 2 * 2;
		if (na = 0) {  // if(0)   // 	if (na == 0) {
			sum = sum - i;
		}
		else {
			sum = sum + i;
		}
		printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sum=%4d\n", cnt, i, sum);
	return 0;
}
*/

//   Sum=1 - 2 +3 -  4 +...+NUM   NUM(10)항까지의 합
/*
#include <stdio.h>
#define NUM 10
int main() {
	// 부호 양수 음수라고 기재하신건 부호만 바뀌는 의미이고 
	// 신호등은 값이 A B가 번갈아 가는 걸 의미하는 건가요!?  넵^^
	// 13/2  6
	int cnt, i=0,  sum=0, sw=0;  // sw 신호등
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		if (sw== 0) {
			sum = sum + i;
			sw = 1;
		}
		else {
			sum = sum - i;
			sw = 0;
		}
		printf("cnt=%2d, i=%2d, sw=%2d sum=%4d\n", cnt, i, sw, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, sw=%2d sum=%4d\n", cnt, i, sw, sum);
	return 0;
}
*/


// fact 구하기
/*
#include <stdio.h>
int fact(int n);
int main() {
	int i, j, num, result;
	while (1) {
		printf("숫자 num를 입력하세요: _단 0 종료_");
		scanf_s("%d", &num);
		if (num == 0)break;
		printf("num=%d 입니다. \n", num);
		result = fact(num);
		printf("num=%d , result=%d. \n", num, result);
	}
	printf("수고.^^. \n");
	return 0;
}
int fact(int n) {
	if (n==1) {
		return 1;
	}
	else {
		return n * fact(n-1);  
	}                             
}                                 
*/
// 구구단
// 구구단-1  for 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++){
		if (i % 2 == 0) {
			for (j = 1; j <= 9; j++) {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
			}
			printf("-----%d단 종료---- \n", i);
		}
		else {
			for (j = 9; j >= 1; j--) {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
			}
			printf("-----%d단 종료---- \n", i);
		}
		
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/


// 구구단-1  for 이용 응용*100
// SW 패키징
// 실행파일을 만들어 배포용 설치 파일을 만듬.
// 기능중심으로 모듈화를 빌드 하여 실행파일을 만들어 배포용 설치 파일을 만듬.
/*
#include <stdio.h>
int main() {
	int i, j, k;
	int st=1, end=9, sw=1, temp;
	for (i = 2; i <= 9; i++){
		for (j = st; j != end+sw; j+=sw) { 
				k = i * j;                     
				printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
		temp = st;
		st = end;
		end = temp;
		sw = -sw;
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/
// for (j = st; j != end+sw; j+=sw) { 원리 소개
/*
	st=1, end=9, sw=1;
       for (j = 1; j <= 9; j=j+1) {
       for (j = 1; j < 9+1; j=j+1) {    
       for (j = 1; j != 9+1; j=j+1) { 
       for (j = st; j != end+sw; j+=sw) { 
	temp = st;
	st = end;
	end = temp;
  	sw=-sw;
       for (j = 9; j >= 1; j=j-1) {
       for (j = 9; j > 1-1; j=j-1) {   
       for (j = 9; j != 1-1; j=j-1) {
       for (j = end; j != st+sw; j+=sw) {

 	j=j+sw
	j+=sw
  	j++
	++j
*/

// 구구단-1  for 이용 응용*100
// SW 패키징
// 실행파일을 만들어 배포용 설치 파일을 만듬.
// 기능중심으로 모듈화를 빌드 하여 실행파일을 만들어 배포용 설치 파일을 만듬.
/*
#include <stdio.h>
int main() {
	int i, j, k;
	int st=1, end=9, sw=1, temp;
	for (i = 2; i <= 9; i++){
		for (j = st; j != end+sw; j+=sw) {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
		printf("sw=%2d ,end=%2d , sw=%2d \n", st, end,sw);
		st = st +end;
		end = st - end;
		st = st - end;
		sw = -sw;
		printf("교환 후 sw=%2d ,end=%2d , sw=%2d \n", st, end, sw);
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/
// 제어문 연습 continue; break 논리연산자 && ||
// 논리연산자 && ||  이용 윤년 check
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) 
		{
			if (i % 2 == 0 ||  j%2==1 ) {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
			}
			else {
				continue;
			//	break;
			}
			printf("짝수단 출력 \n", i);
		}
		printf("-----%d단 종료---- \n", i);

	}
	printf("---구구단 종료----- \n");

	return 0;
}
*/
// 윤년 
/*
#include <stdio.h>
int main() {
	int year;
	while (1) {
		printf("년도 입력하세요. : _ 단 0: 종료_");
		scanf_s("%d", &year);
		if (year == 0) break;
		if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
			printf("%d년도는 윤년 : \n", year);
		}
		else {
			printf("%d년도는 윤년 X : \n", year);
		}
	}

	return 0;
}
*/

// 윤년 
/*
#include <stdio.h>
int main() {
	int year;
	while (1) {
		printf("년도 입력하세요. : _ 단 0: 종료_");
		scanf_s("%d", &year);
		if (year == 0) break;
		
		if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
			printf("%d년도는 윤년 : \n", year);
		}
		else {
			printf("%d년도는 윤년 X : \n", year);
		}
	}

	return 0;
}
*/
// 다중 if( )
/*
#include <stdio.h>
int main(void){
	int num;
	while (1) {
	
		printf("점수 입력 :  _단 9999_종료");
		scanf_s("%d", &num);
		if (num == 9999)break;
		if (num >= 90 && num <= 100) {
			printf("A등급\n");
		}
		else if (num >= 80 && num <90) {
			printf("B등급\n");
		}
		else if (num >= 70 && num < 80) {
			printf("C등급\n");
		}
		else if (num >= 60 && num < 70) {
			printf("D등급\n");
		}
		else if (num >= 0 && num < 60) {
			printf("F등급\n");
		}
		else{
			printf("입력 점수 확인 하세요\n");
		}
	}
	printf("수고^^\n");
	
	return 0;
}
*/

//  switch~case문
// test 
// 정적, 동적
// 고객 : 요구사항명세서 (확인)
// 개발자 : 항목명세서 (검증)
// 기능 중심  : 블랙 박스 검사 : 1)입력자료 동등한 수 2) 경계값 위치 3)버전별 검사(비교)
// 구조 중심 : 화이트 박스 검사
/*
#include <stdio.h>
int main(void){
	int num, inum;
	while (1) {

		printf("점수 입력 :  _단 9999_종료");
		scanf_s("%d", &num);
		if (num == 9999)break;
		inum = num;
		num = num / 10;
		if (num == 10 && (inum > 100 && inum < 110)) {
			printf("입력 점수 확인 하세요\n");
			break;
		}
		if (num == 0 && (inum > -10 && inum < 0)) {
			printf("입력 점수 확인 하세요\n");
			break;
		}
		switch (num){
			case 10: case 9:
				printf("A등급\n");
				break;
			case 8:
				printf("B등급\n");
				break;
			case 7:
				printf("C등급\n");
				break;
			case 6:
				printf("D등급\n");
				break;
			case 5: case 4: case 3: case 2: case 1: case 0:
				printf("F등급\n");
				break;
			default:
			printf("입력 점수 확인 하세요\n");
		}
	}
	printf("수고^^\n");

	return 0;
}
*/
// 구구단
// 구구단-1  for 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++){
		for (j = 1; j <= 9; j++) {
				if (j == 5) {
					// continue;
						break;
					//	goto AA ;
				}
				else {
					k = i * j;
					printf("%2d * %2d = %2d \n", i, j, k);
				}
		}
		printf("-----%d단 종료---- \n", i);
	}
	printf("---구구단 종료----- \n");
	printf("%2d * %2d = %2d \n", i, j, k);
	return 0;
}
*/
// 배열1
/*
#include <stdio.h>
int main(void) {
	int student[5];
	int cnt;

//	printf("첫 번째 학생의 점수_student[0] : %d \n", student[0]);
//	printf("cnt= %d \n", cnt); // 오류 뜨지 않을까요? 초기화가 안되어있는것 같아서요
	student[0] = 90;
	student[1] = 80;
	student[3] = 70;
	printf("첫 번째 학생의 점수_student[0] : %d \n", student[0]);
	printf("두 번째 학생의 점수_student[1] : %d \n", student[1]);
	printf("세 번째 학생의 점수_student[2] : %d \n", student[2]);
	printf("네 번째 학생의 점수_student[3] : %d \n", student[3]);
	printf("다섯 번째 학생의 점수_student[4] : %d \n", student[4]);
	for (cnt = 0; cnt < 5; cnt++) {
		printf("student[%2d]= %4d \n", cnt, student[cnt]);
	}

	return 0;
}
*/

// 배열2
/*
#include <stdio.h>
int main(void) {
	int student[5]= { 90,80,70 };
	int st[100] = { 0 };
	int cnt, i;

//	student[0] = 90;
//	student[1] = 80;
//	student[2] = 70;
//  int st[5] = { 0 };
	
//	for (cnt = 0; cnt < 5; cnt++) {
//		st[cnt]=0;
//	}
	for (i = 0; i < 5; i++) {
		printf("student[%2d]= %4d \n", i, student[i]);
	}
	for (cnt = 0; cnt < 5; cnt++) {
		printf("st[%2d]= %4d \n", cnt, st[cnt]);
	}

	for (cnt = 0; cnt <100; cnt++) {
		st[cnt]=2*cnt;
	}
	for (cnt = 0; cnt < 100; cnt++) {
		printf("st[%2d]= %4d \n", cnt, st[cnt]);
	}

	return 0;
}
*/


// 배열3
/*
#include <stdio.h>
int main(void) {
	int st[10] = { 0 };
	int cnt, i;
	
	i = 7;
	printf("i=%d, &i= %d \n",i, &i);
	printf("i=%d, *&i= %d \n", i, *&i);

	for (cnt = 0; cnt <10; cnt++) {
		st[cnt]=2*cnt;
	}
	for (cnt = 0; cnt < 10; cnt++) {
		printf("st[%2d]= %4d , &st[%d]= %4d \n", cnt, st[cnt], cnt, &st[cnt]);
	}
	printf("st[0]= %4d , &st[0]= %4d \n",  st[0],  &st[0]);
	printf("st[0]= %4d , *&st[0]= %4d \n", st[0],  *&st[0]);
	printf("&st[0]= %4d , st = %4d \n",     &st[0],  st);

	printf("i=%d, &i= %d \n", cnt, &cnt);
	printf("i=%d, *&i= %d \n", cnt, *&cnt);

	for (cnt = 0; cnt < 10; cnt++) {
		printf("st[%2d]= %4d , *&st[%d]= %4d \n", cnt, st[cnt], cnt, *&st[cnt]);
	}

	return 0;
}
*/
// 배열4
/*
#include <stdio.h>
int main(void) {
	int st[10] = { 0 };
	int cnt, i;
	st[0] = 7;
	printf("st[0]= %4d \n",  st[0]);
	printf("&st[0]= %4d \n", &st[0]);
	printf("*&st[0]= %4d \n", *&st[0]);
	printf("st= %4d \n", st);
	printf("*st= %4d \n", *st);
	printf("*(st+0)= %4d \n", *(st+0));

	st[1] = 8;
	printf("st[1]= %4d \n", st[1]);
	printf("&st[1]= %4d \n", &st[1]);
	printf("*&st[1]= %4d \n", *&st[1]);
//	printf("st= %4d \n", st);
	printf("*(st+1)= %4d \n", *(st+1));

	return 0;
}
*/

// 배열5 정리
/*
#include <stdio.h>
int main(void) {
	int st[10] = { 0 };
	int cnt;
	int i = 7, j = 8, k = 9;
	printf("i=%d, &i= %4d \n", i, &i);
	printf("j=%d, &j= %4d \n", j, &j);
	printf("k=%d, &k= %4d \n", k, &k);

	for (cnt = 0; cnt < 10; cnt++) {  // st.length -> 10
		st[cnt] = cnt*10;
	}
	for (cnt = 0; cnt < 10; cnt++) {
		printf("st[%d]= %4d \n", cnt, st[cnt]);
		printf("&st[%d]= %4d \n", cnt, &st[cnt]);
		printf("*(st+%d)= %4d \n", cnt, *(st + cnt));
		printf("cnt=%d, &cnt= %4d \n", cnt, &cnt);
	}
	
	return 0;
}
*/

// 기본순위 석차 - 1
/*
#include <stdio.h>
#define NUM 5
int main() { 
	int i, j, rank;
	int arr1[5] = { 50,40,70,30,60 };
	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("arr1[%d]=%3d   ",i, arr1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {    // 선택 점수
		rank = 1;
		for (j = 0; j < 5; j++) {   // 비교 점수
			if (arr1[i] < arr1[j]) {
				rank = rank + 1;
			}
		}
		printf("arr1[%d]=%3d , rank=%d \n", i, arr1[i], rank);
	}

	return 0;
}
*/

// 기본 순위 석차 - 2
/*
#include <stdio.h>
#define NUM 5
int main() {
	int i, j;
	int arr1[5] = { 50,40,70,30,60 };
	int rank[5];
	for (i = 0; i < 5; i++) {
		rank[i] = 1;
	}
	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {    // 선택 점수
		for (j = 0; j < 5; j++) {   // 비교 점수
			if (arr1[i] < arr1[j]) {
				rank[i] = rank[i] + 1;
			}
		}
	}
	printf("----석차  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ",  rank[i]);
	}
	printf("\n");

	return 0;
}
*/

// 고급 순위 석차

#include <stdio.h>
#define NUM 5
int main() {
	int i, j;
	int arr1[5] = { 50,40,70,30,60 };
	int rank[5];
	for (i = 0; i < 5; i++) {
		rank[i] = 1;
	}
	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < 4; i++) {    // 선택 점수
		for (j = i+1; j < 5; j++) {   // 비교 점수
			if (arr1[i] < arr1[j]) {
				rank[i] = rank[i] + 1;
			}else if (arr1[i] > arr1[j]) {
				rank[j] = rank[j] + 1;
			}
			else {
				continue;
			}
		}
	}
	printf("----석차  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ",  rank[i]);
	}
	printf("\n");

	return 0;
}


// 고급 순위 석차의 원리 이용한 
// 선택정렬
/*
#include <stdio.h>
#define NUM 5
int main() {
	int i, j, k, temp;
	int arr1[5] = { 50,40,70,30,60 };
	
	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < 4; i++) {    // 선택 점수
		for (j = i+1; j < 5; j++) {   // 비교 점수
			if (arr1[i] > arr1[j]) {
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
		printf("i=%2d : ", i);
		for (k = 0; k < NUM; k++) {
			printf("%3d ", arr1[k]);
		}
		printf("\n");
	}
	
	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", arr1[i]);
	}
	printf("\n");

	return 0;
}
*/

//  개선 된 선택정렬 * 100
/*
#include <stdio.h>
#define NUM 5
int main() {
	int i, j, temp, k, lo;
	int arr1[NUM] = { 50,40,70,30,60 };

	printf("----정렬 전 기본 data  출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%3d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < NUM-1; i++) {    // 선택 점수
		lo = i;  
		for (j = i+1; j < NUM; j++) {   // 비교 점수
			if (arr1[lo] > arr1[j]) {
				lo = j;
			}
		}
		temp = arr1[i];
		arr1[i] = arr1[lo];
		arr1[lo] = temp;
		
		printf("i=%2d : ", i );
		for (k = 0; k < NUM; k++) {
			printf("%3d ", arr1[k]);
		}
		printf("\n");
	}
	printf("----정렬 완성 data  출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%3d ",  arr1[i]);
	}
	printf("\n");


	return 0;
}
*/
