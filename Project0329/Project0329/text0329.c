//  ����, ����, �����˻�, �̺а˻�
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
	srand((unsigned int)time(NULL));  // �ð��� ���� seed �� ����
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					printf("��ȣ�� �ߺ� �Ǿ�� �ȵ˴ϴ�.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----�ʱ��ڷ� ���-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}

	// ���� �� �ڷ� �˻� ���_�����˻� (1+N)/2
	while (1) {
		printf("�˻� �ڷ� �Է� : ��_0_���� : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		flag = 0;
		cnt = 0;
		for (i = 0; i < NUM; i++) {
			cnt = cnt + 1;
			if (arr1[i] == input) {
				printf("---------------�˻��� �ڷ� ���---------------\n");
				printf("cnt=%2d, arr1[%d]=%4d \n",cnt, i, arr1[i]);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("�ش� �ڷᰡ �����ϴ�. \n");
		}
	}
	// ���� ���ϱ�
	for (i = 0; i < NUM; i++) {
		rank = 1;
		for (j = 0; j < NUM; j++) {
			if (arr1[i] < arr1[j]) {
				rank = rank + 1;
			}
		}
		printf("arr1[%2d]=%4d, rank=%3d \n", i, arr1[i], rank);
	}

//  ���� ���� ����
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

	//  ���� ���� ����
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

	printf("----�����ڷ� ���-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}

	// �̺� �˻� ����*100
	while (1) {
		printf("�˻����� �Է� : ��_0_�Է�:���� : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		// �̺а˻�
		low = 0, high = NUM - 1, cnt = 0;
		while (1) {

			if (low > high) {
				printf("�ش� �ڷᰡ �����ϴ�. \n");
				break;
			}
			else {   // if (low <= high) {
				mid = (low + high) / 2;
				cnt = cnt + 1;
				if (arr1[mid] == input) {
					printf("---------------�˻��� �ڷ� ���---------------\n");
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


	printf("����^^ \n");
	return 0;
}
*/

//�������� ����-3_�¿� �����_����
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
//					printf("��ȣ�� �ߺ� �Ǿ�� �ȵ˴ϴ�.\n");
					i--;
					break;
				}
			}
		}
	}
	printf("-----------������ �ڷ�  �� ��� ---------\n");
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
		printf("cnt=%2dȸ��, left=%2d, right=%2d \n", cnt, left, right);
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
		printf("cnt=%2dȸ��, left=%2d, right=%2d \n", cnt, left, right);
		for (j = 0; j < NUM; j++) {
			printf("%3d", arr[j]);
		}
		printf("\n");
		left = shift;
	}


	printf("�ȳ�^^\n");
		return 0;
	}

*/

//  ����, ��������, �����˻�, �̺а˻�
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
	srand((unsigned int)time(NULL));  // �ð��� ���� seed �� ����
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
//					printf("��ȣ�� �ߺ� �Ǿ�� �ȵ˴ϴ�.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----�ʱ��ڷ� ���-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}
	//  ��������
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

	printf("����^^ \n");
	return 0;
}
*/

//  ����, ��������, �����˻�, �̺а˻�

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main() {
	int i, j, k;
	int input, flag, rank, temp, sw, key;
	int low, high, mid, cnt;
	int arr1[NUM] = { 0 };
	srand((unsigned int)time(NULL));  // �ð��� ���� seed �� ����
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					//					printf("��ȣ�� �ߺ� �Ǿ�� �ȵ˴ϴ�.\n");
					i--;
					break;
				}
			}
		}
	}

	printf("----�ʱ��ڷ� ���-------\n");
	for (i = 0; i < NUM; i++) {
		if ((i + 1) % 10 == 0) {
			printf("%4d", arr1[i]);
			printf("\n");
		}
		else {
			printf("%4d", arr1[i]);
		}
	}
	//  ��������
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

	printf("����^^ \n");
	return 0;
}


