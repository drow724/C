//3�� 15��

//printf�� ���� 1
/*
#include<stdio.h>
int main(void){
    printf("Hello \"C\" world 1 \n");
    printf("Hello \'C\' world 2\n");
    printf("Hello\tC world 3 \n");
    printf("Hello ����� C world 4 \n");
    printf("Hello abc C world 5 \n");
    printf("c:\workExample\java \n");
    return 0;
}*/

// printf�� ����2
/*
#include<stdio.h> //��ó���� preprocessor
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

// printf�� ����3
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

// printf�� ����4
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

//3�� 16��

//printf�� ���� 5   ����(�Ǽ�) ����ϱ�
/*
#include<stdio.h>
int main(void) {
    printf("10���� ����(0.5) : %%d : %d \n", 0.5);
    printf("10���� ���� : %d \n", 6.5);

    printf("10���� �Ǽ�(0.5) : %%f : %f \n", 0.5);
    printf("10���� �Ǽ� : %f \n", 6.5);

    printf("10���� ����(6) : %%f : %f \n", 6);
    
    return 0;
}
*/

//printf�� ���� 6   ���� ����ϱ�
/*
#include<stdio.h>
int main(void) {
    int a = 6; 
    float b = 6.5;
    printf("10���� ����(6.5) : %%d : %d \n", b);
    
    printf("10���� �Ǽ�(6.5) : %%f : %f \n", b);
    
    printf("10���� ����(6) : %%i : %i \n", a);

    return 0;
}
*/

//���� ����ϱ� �Ǽ� Float Double ����
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

//���ڿ� ���ڿ� ����ϱ� ���� �ǽ� 2-7c
/*
#include <stdio.h>
int main(void)
{
    char ch = 'A';
    char ch1 = "A";
    printf("a�� �빮�ڷ� ǥ���ϸ� %c �Դϴ�. \n", ch);

    printf("%s %s �Դϴ�. \n", "a�� �빮�ڷ� ǥ���ϸ�", "A");

    printf("%s %d  %s \n", "2���ϱ�3��", 2 * 3, "�Դϴ�.");

    return 0;
}
*/

//�ʵ� �� ����
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

//Ű����κ��� ������ �Է¹ޱ� - scanf() �Լ� ... 
//Ű����κ��� ������ �Է¹ޱ� - scanf_s() �Լ� (���� ���)

#include <stdio.h>
int main(void)
{
    int age = 0;
    char ch;
   
    printf("age�� �Է��ϼ��� : ");
    scanf_s("%d", &age);
    printf("age = %d \n", age);
    printf("&age = %#x \n", &age);   // & ����(�������ּ�)
    printf("*&age = %d \n", *&age);   // * ��

    printf("�� ���ڸ� �Է��ϼ��� : ");
    scanf_s("\n %c", &ch);
    printf("ch = %c \n", ch);
    
    return 0;
}


//Ű����κ��� ������ �Է¹ޱ�
/*
#include <stdio.h>
int main(void)
{
    int a, b, c;

    printf("10���� ���� 1�� �Է�: ");
    scanf_s("%d", &a);
    printf("10����: %d, 16����: %#x, 8����: %#o \n", a, a, a);

    printf("16���� ���� 1�� �Է�: ");
    scanf_s("%x", &b);
    printf("10����: %d, 16����: %#x, 8����: %#o \n", b, b, b);

    printf("8���� ���� 1�� �Է�: ");
    scanf_s("%o", &c);
    printf("10����: %d, 16����: %#x, 8����: %#o \n", c, c, c);
    return 0;
}
*/

//�ɺ��� ���(��ȣ�� ���)
// 1) const Ű����   2) #define��
/*
#include <stdio.h>
#define  PI   3.14
#define  NUM  3+4 // macro �� ���� // call by name
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


//3��17��
// �Լ� ȣ�� *100
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
    answer = (double)x / y;      //���� ����ȯ
    return answer;
}
*/

// max ���ϱ� �Լ� �̿�
/*
#include <stdio.h>
int max(int a, int b);
int main(void)
{
    int i, j, k;
    printf("���� i�� �Է��ϼ���: ");
    scanf_s("%d", &i);
    printf("���� j�� �Է��ϼ���: ");
    scanf_s("%d", &j);
    printf("i=%d, J=%d �Դϴ�. \n", i, j);
    k = max(i, j);
    printf("%d�� %d �� ū ���� %d�Դϴ�. \n", i, j, k);
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

// max ���ϱ�
/*
#include <stdio.h>
int max(int a, int b);
int main(void)
{
    int i, j, max;
    printf("���� i�� �Է��ϼ���: ");
    scanf_s("%d", &i);
    printf("���� j�� �Է��ϼ���: ");
    scanf_s("%d", &j);
    printf("i=%d, J=%d �Դϴ�. \n", i, j);
    if (i > j) {
        max = i;
    }
    else {
        max = j;
    }
    printf("%d�� %d �� ū ���� %d�Դϴ�. \n", i, j, max);
    return 0;
}
*/

//�Լ� ���� ���  9-3.c  �����
/*
#include <stdio.h>
void information(void);                        // �Լ��� ����(00 ����)
float input(void);                             // �Լ��� ����(10 ����)
float divide(float x, float y);                // �Լ��� ����(11 ����)
void output(float x);                         // �Լ��� ����(01 ����)

int main(void)
{
    float num1, num2, result;
    information();

    printf("ù ��° �Ǽ� �Է�: ");
    num1 = input();                            
//    output(num1);         //  printf("num1=%d \n", num1);
    printf("�� ��° �Ǽ� �Է�: ");
    num2 = input();
//    output(num2);         //  printf("num2=%d \n", num2);
    result = divide(num1, num2);
    output(result);         //  printf("result=%d\n",result);

    return 0;
}
void information(void)
{
    printf("--���α׷� ���� ---\n");
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
    printf("��°� : %f \n", x);
    return;
}
*/

//������ ������ ���� 9-5.c  ��������
/*
#include <stdio.h>
void func_A (void);						
int main(void)
{
    int aaa = 10;
        printf("main( ) �Լ��� aaa �� : %d\n", aaa);
        func_A( );	
        printf("main( ) �Լ��� aaa �� : %d\n", aaa);
        return 0;
}
void func_A(void)								
{
        int aaa=20;								
        int bbb=30;								

        printf("func_A( ) �Լ��� aaa �� : %d\n", aaa );
        printf("func_A( ) �Լ��� bbb �� : %d\n", bbb );
        return ;
}
*/

//������ ������ ���� 9-6.c  �����1
/*
#include <stdio.h>
int main(void)
{
        int i=0;
        int total=0;
        for (i = 1; i <= 10; i++){              //for (�ʱ�ġ; ���ǽ�; ����)
            printf("i���� %d�Դϴ�.\n", i);
        }
            printf("---�ݺ� ����---\n");
            printf("i ���� %d�Դϴ�.\n", i);
        return 0;
}
*/

//������ ������ ���� 9-6.c  �����2
/*
#include <stdio.h>
int main(void)
{
    int i = 0;
    int total = 0;
    for (i = 1; i >= 10; i++) {             //���ǽ��� Ʋ���⿡ �ٷ� �ݺ� �����...
        printf("i���� %d�Դϴ�.\n", i);
    }
    printf("---�ݺ� ����---\n");
    printf("i ���� %d�Դϴ�.\n", i);
    return 0;
}
*/
