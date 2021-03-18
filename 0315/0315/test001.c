//3월 15일

//printf문 연습 1
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

// printf문 연습4
/*
#include<stdio.h>
int main(void){
      int ch = 65;
      printf("ch=%d , &ch=%#X , \n", ch, &ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", ch, ch, ch, ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", 65, 65, 65, 65);
      printf("--------------------- \n");
      ch = 97;
      printf("ch=%d , &ch=%#X , \n", ch, &ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", ch, ch, ch, ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", 97, 97, 97, 97);
      printf("--------------------- \n");
      ch = 49;
      printf("ch=%d , &ch=%#X , \n", ch, &ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", ch, ch, ch, ch);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", 97, 97, 97, 97);
      printf("--------------------- \n");
    return 0;
}
*/

//3월 16일

//printf문 연습 5   숫자(실수) 출력하기
/*
#include<stdio.h>
int main(void) {
    printf("10진수 정수(0.5) : %%d : %d \n", 0.5);
    printf("10진수 정수 : %d \n", 6.5);

    printf("10진수 실수(0.5) : %%f : %f \n", 0.5);
    printf("10진수 실수 : %f \n", 6.5);

    printf("10진수 정수(6) : %%f : %f \n", 6);
    
    return 0;
}
*/

//printf문 연습 6   숫자 출력하기
/*
#include<stdio.h>
int main(void) {
    int a = 6; 
    float b = 6.5;
    printf("10진수 정수(6.5) : %%d : %d \n", b);
    
    printf("10진수 실수(6.5) : %%f : %f \n", b);
    
    printf("10진수 정수(6) : %%i : %i \n", a);

    return 0;
}
*/

//숫자 출력하기 실수 Float Double 연습
/*
#include <stdio.h>
int main(void)
{
      int a = 10, b = 3;
      float c;
      double d;
 //   c = (float)(a / b);

      printf("a/b = %f  \n", a/b);
      printf("a/b = %d  \n", a / b);
      
      printf("(float)(a / b) = %f  \n", (float)(a / b));
      
      printf("(float)a / b = %f  \n", (float)a / b);
      printf("(float)a / b = %.8f  \n", (float)a / b);
      printf("(float)a / b = %.2f  \n", (float)a / b);
      
      printf("(double)a / b = %f  \n", (double)a / b);
      printf("(double)a / b = %.10f  \n", (double)a / b);
      printf("(double)a / b = %.2f  \n", (double)a / b);

      return 0;
}
*/

//문자와 문자열 출력하기 예제 실습 2-7c
/*
#include <stdio.h>
int main(void)
{
    char ch = 'A';
    char ch1 = "A";
    printf("a를 대문자로 표현하면 %c 입니다. \n", ch);

    printf("%s %s 입니다. \n", "a를 대문자로 표현하면", "A");

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
    printf("%-3d, %-3d, %-3d \n", 100, 20, 3);

    printf("%f, %.2f, %.5f, %12.3f \n", 123.4567, 123.4567, 123.4567, 123.4562);
    printf("%c, %3c, %+3c, %-3c \n", 'A', 'A', 'A', 'A');


    return 0;
}
*/

//키보드로부터 데이터 입력받기 - scanf() 함수 ... 
//키보드로부터 데이터 입력받기 - scanf_s() 함수 (실제 사용)

#include <stdio.h>
int main(void)
{
    int age = 0;
    char ch;
   
    printf("age를 입력하세요 : ");
    scanf_s("%d", &age);
    printf("age = %d \n", age);
    printf("&age = %#x \n", &age);   // & 번지(기억공간주소)
    printf("*&age = %d \n", *&age);   // * 값

    printf("한 문자를 입력하세요 : ");
    scanf_s("\n %c", &ch);
    printf("ch = %c \n", ch);
    
    return 0;
}


//키보드로부터 데이터 입력받기
/*
#include <stdio.h>
int main(void)
{
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

//심볼릭 상수(기호형 상수)
// 1) const 키워드   2) #define문
/*
#include <stdio.h>
#define  PI   3.14
#define  NUM  3+4 // macro 로 동작 // call by name
#define  BUFFER_SIZE  200
// call by name(macro), call by value, call by reference(address)

int main()
{
    int a=3, b;
  
  b = ++a + ++a + ++a;   // a = a+1, b = a
  printf("a=%d  \n", a);
  printf("b=%d  \n", b);
  printf("&a=%d  \n", &a);

  b = a++ + a++ + a++;   // b = a, a = a+1
  printf("a=%d  \n", a);
  printf("b=%d  \n", b);
  printf("&a=%d  \n", &a);
    
    a = NUM * NUM;
    a = 3 + 4 * 3 + 4;
    printf("%d  \n", a);
    b = (NUM) * (NUM);
    b = (3 + 4) * (3 + 4);
    printf("%d  \n", b);
    int f=5;
    printf("%d  \n", f);
    printf("%lf  \n", PI);
    printf("%d  \n", NUM);
    printf("%d  \n", BUFFER_SIZE);
   
    return 0;
}
*/


//3월17일
// 함수 호출 *100
/*
#include<stdio.h>
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
//int div(int x, int y);
double div(int x, int y);

int main(void){
    int result, result1, result2; //result3;
    double result3;
    int a = 10, b = 4;
    printf("a=%d, b=%d \n", a, b);

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
int sum(int x, int y)
{
    int answer;
    answer = x + y;
    return answer;
}
int sub(int x, int y)
{
    int answer;
    answer = x - y;
    return answer;
}
int mul(int x, int y)
{
    int answer;
    answer = x * y;  
    return answer;
}
//int div(int x, int y)     
//{
//    int answer;
//   answer = x / y;
//    return answer;
//}

double div(int x, int y)
{
    double answer;
    answer = (double)x / y;      //강제 형변환
    return answer;
}
*/

// max 구하기 함수 이용
/*
#include <stdio.h>
int max(int a, int b);
int main(void)
{
    int i, j, k;
    printf("숫자 i를 입력하세요: ");
    scanf_s("%d", &i);
    printf("숫자 j를 입력하세요: ");
    scanf_s("%d", &j);
    printf("i=%d, J=%d 입니다. \n", i, j);
    k = max(i, j);
    printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, k);
    return 0;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
*/

// max 구하기
/*
#include <stdio.h>
int max(int a, int b);
int main(void)
{
    int i, j, max;
    printf("숫자 i를 입력하세요: ");
    scanf_s("%d", &i);
    printf("숫자 j를 입력하세요: ");
    scanf_s("%d", &j);
    printf("i=%d, J=%d 입니다. \n", i, j);
    if (i > j) {
        max = i;
    }
    else {
        max = j;
    }
    printf("%d와 %d 중 큰 수는 %d입니다. \n", i, j, max);
    return 0;
}
*/

//함수 적용 방법  9-3.c  어레인지
/*
#include <stdio.h>
void information(void);                        // 함수의 선언(00 형태)
float input(void);                             // 함수의 선언(10 형태)
float divide(float x, float y);                // 함수의 선언(11 형태)
void output(float x);                         // 함수의 선언(01 형태)

int main(void)
{
    float num1, num2, result;
    information();

    printf("첫 번째 실수 입력: ");
    num1 = input();                            
//    output(num1);         //  printf("num1=%d \n", num1);
    printf("두 번째 실수 입력: ");
    num2 = input();
//    output(num2);         //  printf("num2=%d \n", num2);
    result = divide(num1, num2);
    output(result);         //  printf("result=%d\n",result);

    return 0;
}
void information(void)
{
    printf("--프로그램 시작 ---\n");
    return;
}
float input(void)
{
    float val;
    scanf_s("%f", &val);
    return val;
}
float divide(float x, float y)
{
    float val;
    val = x / y;
    return val;
}
void output(float x)
{
//  printf("x=%f \n", x);
    printf("출력값 : %f \n", x);
    return;
}
*/

//변수의 종류와 범위 9-5.c  지역변수
/*
#include <stdio.h>
void func_A (void);						
int main(void)
{
    int aaa = 10;
        printf("main( ) 함수의 aaa 값 : %d\n", aaa);
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

//변수의 종류와 범위 9-6.c  어레인지1
/*
#include <stdio.h>
int main(void)
{
        int i=0;
        int total=0;
        for (i = 1; i <= 10; i++){              //for (초기치; 조건식; 증가)
            printf("i값은 %d입니다.\n", i);
        }
            printf("---반복 종료---\n");
            printf("i 값은 %d입니다.\n", i);
        return 0;
}
*/

//변수의 종류와 범위 9-6.c  어레인지2
/*
#include <stdio.h>
int main(void)
{
    int i = 0;
    int total = 0;
    for (i = 1; i >= 10; i++) {             //조건식이 틀리기에 바로 반복 종료로...
        printf("i값은 %d입니다.\n", i);
    }
    printf("---반복 종료---\n");
    printf("i 값은 %d입니다.\n", i);
    return 0;
}
*/
