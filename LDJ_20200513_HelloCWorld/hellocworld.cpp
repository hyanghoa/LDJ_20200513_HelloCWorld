#include <stdio.h>
#include <string.h>
#include <math.h>
#include "team.h"

int main(void)
{
	/*
	int num = 100;
	float fnum = 8.5;
	double dnum = 8.5;
	int arr[5] = { 0, };
	int arr2[5];
	*/

	/*char f[6] = {'a', 'p', 'p', 'l', 'e'};
	char f2[6] = "apple";
	const char* str = "apple";

	f[0] = 'A';

	printf("%s\n", f);*/

	/*int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);*/

	/*char grade;
	char name[20];

	printf("���� �Է�: ");
	scanf("%c", &grade);
	printf("�̸� �Է�: ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);*/

	/*int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);*/

	/*int a = 10;
	int b = 12;
#if 0
	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << b : %d\n", a << 1);
	printf("a >> b : %d\n", a >> 2);
#else
	int result_bitAnd = a & b;
	int result_bitXor = a ^ b;
	int result_bitOr = a | b;
	int result_bitComplete = ~a;
	int result_bitLeft = a << 1;
	int result_bitRight = a >> 2;

	printf("a & b : %d\n", result_bitAnd);
	printf("a ^ b : %d\n", result_bitXor);
	printf("a | b : %d\n", result_bitOr);
	printf("~a : %d\n", result_bitComplete);
	printf("a << b : %d\n", result_bitLeft);
	printf("a >> b : %d\n", result_bitRight);
#endif
	return 0;*/


	//-----------------------------------------------

	/* 5�� �ǽ�
	int rank = 0, m = 0;
	printf("rank �Է�: ");
	scanf("%d", &rank);
	printf("m �Է�: ");
	scanf("%d", &m);

	switch (rank)
	{
	case 1:
		m = 300;
		break;

	case 2:
		m = 200;
		break;

	case 3:
		m = 100;
		break;

	default:
		m = 10;
		break;

	}

	printf("rank: %d, m: %d\n", rank, m);
	*/

	//-----------------------------------------------

	/*int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);*/

	/*int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);*/

	//-----------------------------------------------

	/*int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);

	printf("a: %d\n", a);*/

	/*int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//-----------------------------------------------

	/*int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("������ ��: %d\n", sum);
	printf("���������� ���� ��: %d\n", i);*/

	//-----------------------------------------------

	//6�� �ǽ�

	/*int sum(int x, int y);

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result: %d\n", result);*/

	/*int get_num(void);

	int result;

	result = get_num();
	printf("��ȯ �� : %d\n", result);*/

	/*void print_char(char ch, int count);

	print_char('@', 5);*/

	//-----------------------------------------------

	// 7�� �ǽ�

	/*void print_line(void);

	print_line();
	printf("�й�      �̸�       ����       ����\n");
	print_line();*/

	/*void fruit(void);

	fruit();*/

	/*void fruit(int count);

	fruit(1);*/

	//-----------------------------------------------

	// 8�� �ǽ�

	/*int ary[5];
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/

	//-----------------------------------------------

	/*int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0;i < 5;i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0;i < 5;i++)
	{
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("���: %.1lf\n", avg);*/

	//-----------------------------------------------

	/*char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);*/

	//-----------------------------------------------

	/*char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);*/

	//-----------------------------------------------

	/*char str[80];

	printf("���ڿ� �Է�: ");
	gets_s(str);
	puts("�Էµ� ���ڿ�: ");
	puts(str);*/

	//-----------------------------------------------

	/*char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);*/

	//-----------------------------------------------


	//void fruit(int num, int count);
	//int count;
	//printf("�ݺ��� Ƚ�� �Է�: ");
	//scanf("%d", &count);
	//fruit(1, count);

	//-----------------------------------------------
	//9�� �ǽ�

	/*int a;
	double b;
	char c;

	printf("int�� ������ �ּ�: %u\n", &a);
	printf("double�� ������ �ּ�: %u\n", &b);
	printf("char�� ������ �ּ�: %u\n", &c);*/

	//-----------------------------------------------

	/*int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);*/

	//-----------------------------------------------

	/*int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ ��: %d, %d\n", *pa, *pb);
	printf("�� ������ ��: %d\n", *pt);
	printf("�� ������ ��� %.1lf\n", *pg);*/

	//-----------------------------------------------

	/*int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a ��: %d\n", *pa);
	pa = &b;
	printf("���� b ��: %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a ��: %d\n", *pa);*/

	//-----------------------------------------------

	/*char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ��: %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ��: %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ��: %d\n", sizeof(&db));

	printf("char* �������� ũ��: %d\n", sizeof(pc));
	printf("int* �������� ũ��: %d\n", sizeof(pi));
	printf("double* �������� ũ��: %d\n", sizeof(pd));

	printf("char* �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pc));
	printf("int* �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pi));
	printf("double* �����Ͱ� ����Ű�� ������ ũ��: %d\n", sizeof(*pd));*/

	//-----------------------------------------------

	/*int a = 10;
	int* p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);*/

	//-----------------------------------------------

	/*void swap(int* pa, int* pb);
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);*/

	//-----------------------------------------------

	/*void swap(void);
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);*/

	//-----------------------------------------------
	input_number();

}


void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int sum(int x, int y) 
{
	int temp;

	temp = x + y;

	return temp;
}

int get_num(void)
{
	int num;

	printf("��� �Է�: ");
	scanf("%d", &num);

	return num;
}

void print_char(char ch, int count) 
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void fruit(int num, int count)
{
	printf("apple\n");
	if (num == count) return;
	fruit(num + 1, count);
	printf("jam\n");
}