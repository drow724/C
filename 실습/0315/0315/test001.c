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

// printf문 연습4

#include<stdio.h>
int main(void){
      int ch_$h01 = 65;
      printf("ch_$h01=%d , &ch_$h01=%#X , \n", ch_$h01, &ch_$h01);
      printf("ch_$h01=%d , ch_$h01=%#X , ch_$h01=%#o, ch_$h01=%c \n", ch_$h01, ch_$h01, ch_$h01, ch_$h01);
      printf("ch_$h01=%d , ch_$h01=%#X , ch_$h01=%#o, ch_$h01=%c \n", 65, 65, 65, 65);
      printf("--------------------- \n");
      ch_$h01 = 97;
      printf("ch=%d , &ch=%#X , \n", ch_$h01, &ch_$h01);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", ch_$h01, ch_$h01, ch_$h01, ch_$h01);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", 97, 97, 97, 97);
      printf("--------------------- \n");
      ch_$h01 = 49;
      printf("ch=%d , &ch=%#X , \n", ch_$h01, &ch_$h01);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", ch_$h01, ch_$h01, ch_$h01, ch_$h01);
      printf("ch=%d , ch=%#X , ch=%#o, ch=%c \n", 97, 97, 97, 97);
      printf("--------------------- \n");
    return 0;
}