//  석차, 정렬, 선형검색, 이분검색
/*
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 50
int main() {
	int i, j;
	int input, flag,  rank, temp, sw;
	int low, high, mid, cnt;
	int arr1[NUM] = { 0 };
	srand((unsigned int)time(NULL));  // 시간에 따라 seed 값 변경
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					printf("번호는 중복 되어서는 안됩니다.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----초기자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}

	// 정렬 전 자료 검색 출력_선형검색 (1+N)/2
	while (1) {
		printf("검색 자료 입력 : 단_0_종료 : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		flag = 0;
		cnt = 0;
		for (i = 0; i < NUM; i++) {
			cnt = cnt + 1;
			if (arr1[i] == input) {
				printf("---------------검색한 자료 출력---------------\n");
				printf("cnt=%2d, arr1[%d]=%4d \n",cnt, i, arr1[i]);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("해당 자료가 없습니다. \n");
		}
	}
	// 석차 구하기
	for (i = 0; i < NUM; i++) {
		rank = 1;
		for (j = 0; j < NUM; j++) {
			if (arr1[i] < arr1[j]) {
				rank = rank + 1;
			}
		}
		printf("arr1[%2d]=%4d, rank=%3d \n", i, arr1[i], rank);
	}

//  향상된 선택 정렬
//	for (i = 0; i < NUM - 1; i++) {
// 	   int lo=i;
//		for (j = i + 1; j < NUM; j++) {
//			if (arr1[lo] > arr1[j]) {
//				lo=j;
//			}
//		}
// 		temp = arr1[i];
//		arr1[i] = arr1[lo];
//		arr1[lo] = temp;
//	}

	//  향상된 버블 정렬
	for (i = 0; i < NUM-1; i++) {
		sw = 0;
		for (j = 0; j < NUM-1- i; j++) {
			if (arr1[j] > arr1[j+1]) {
				temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
				sw = 1;
			}
		}
		if (sw == 0) {
			printf("i=%4d\n", i);
			break;
		}
	}

	printf("----정렬자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}

	// 이분 검색 공부*100
	while (1) {
		printf("검색석차 입력 : 단_0_입력:종료 : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		// 이분검색
		low = 0, high = NUM - 1, cnt = 0;
		while (1) {

			if (low > high) {
				printf("해당 자료가 없습니다. \n");
				break;
			}
			else {   // if (low <= high) {
				mid = (low + high) / 2;
				cnt = cnt + 1;
				if (arr1[mid] == input) {
					printf("---------------검색한 자료 출력---------------\n");
					printf("cnt=%2d, arr1[%d]=%4d \n", cnt, mid, arr1[mid]);
					break;
				}
				else if (arr1[mid] > input) {
					high = mid - 1;
				}
				else {
					low = mid + 1;
				}
			}
		}
	}


	printf("수고^^ \n");
	return 0;
}
*/

//버블정렬 응용-3_좌우 교대로_진행
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main(void) {
	int i, j, temp, cnt = 0;
	int left, right, shift;
	int arr[NUM];
	srand((unsigned int)time(NULL));
	for (i = 0; i < NUM; i++) {
		printf("%3d", i);
	}
	printf("\n");
	for (i = 0; i < 20; i++) {
		arr[i] = rand() % 30 + 25;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr[i] == arr[j]) {
//					printf("번호는 중복 되어서는 안됩니다.\n");
					i--;
					break;
				}
			}
		}
	}
	printf("-----------정렬전 자료  재 출력 ---------\n");
	for (i = 0; i < NUM; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");

	left = 0, right = NUM - 1;
	while (left < right) {
		for (i = left; i < right; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i]; arr[i] = arr[i + 1]; arr[i + 1] = temp;
				shift = i;
			}
		}
		cnt++;
		printf("cnt=%2d회전, left=%2d, right=%2d \n", cnt, left, right);
		for (j = 0; j < NUM; j++) {
			printf("%3d", arr[j]);
		}
		printf("\n");
		right = shift;

		for (i = right; i > left; i--) {
			if (arr[i] < arr[i - 1]) {
				temp = arr[i]; arr[i] = arr[i - 1]; arr[i - 1] = temp;
				shift = i;
			}
		}
		cnt++;
		printf("cnt=%2d회전, left=%2d, right=%2d \n", cnt, left, right);
		for (j = 0; j < NUM; j++) {
			printf("%3d", arr[j]);
		}
		printf("\n");
		left = shift;
	}


	printf("안녕^^\n");
		return 0;
	}

*/

//  석차, 삽입정렬, 선형검색, 이분검색
/*
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main() {
	int i, j, k;
	int input, flag,  rank, temp, sw, key;
	int low, high, mid, cnt;
	int arr1[NUM] = { 0 };
	srand((unsigned int)time(NULL));  // 시간에 따라 seed 값 변경
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
//					printf("번호는 중복 되어서는 안됩니다.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----초기자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}
	//  삽입정렬
	for (i = 1; i < NUM; i++) { // for (i = 0; i < NUM-1; i++) {
		key = arr1[i];
		for (j = i - 1; j >= 0;j--) {
			if (arr1[j] > key) {
				arr1[j + 1] = arr1[j];
			}
			else {
				break;
			}
		}
		arr1[j + 1] = key;
		printf("i=%2d : ", i);
		for ( k = 0; k < NUM; k++) {
			if ((k + 1) % 10 == 0) {
				printf("%4d", arr1[k]);
				printf("\n");
			}
			else {
				printf("%4d", arr1[k]);
			}
		}
		printf("\n");
	}

	printf("수고^^ \n");
	return 0;
}
*/

//  석차, 삽입정렬, 선형검색, 이분검색

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main() {
	int i, j, k;
	int input, flag, rank, temp, sw, key;
	int low, high, mid, cnt;
	int arr1[NUM] = { 0 };
	srand((unsigned int)time(NULL));  // 시간에 따라 seed 값 변경
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					//					printf("번호는 중복 되어서는 안됩니다.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----초기자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}
	//  삽입정렬
	for (i = 0; i < NUM - 1; i++) { // for (i = 0; i < NUM-1; i++) {
		key = arr1[i + 1];
		for (j = i; j >= 0; j--) {
			if (arr1[j] > key) {
				arr1[j + 1] = arr1[j];
			}
			else {
				break;
			}
		}
		arr1[j + 1] = key;
		printf("i=%2d : ", i);
		for (k = 0; k < NUM; k++) {
			if ((k + 1) % 10 == 0) {
				printf("%4d", arr1[k]);
				printf("\n");
			}
			else {
				printf("%4d", arr1[k]);
			}
		}
		printf("\n");
	}

	printf("수고^^ \n");
	return 0;
}


