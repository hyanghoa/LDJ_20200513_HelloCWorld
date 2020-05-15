#pragma once
#include <stdio.h>
#include <math.h>

void input_number();
int max_num(int arr[]);
int min_num(int arr[]);
double avg_num(int arr[]);
double deviation_num(int arr[], double avg);

//1. �����Է�
void input_number()
{
    printf("10���� ���ڸ� �Է��ϼ���.\n");

    int arrNum[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &arrNum[i]);
    }

    int maxNum = max_num(arrNum);
    int minNum = min_num(arrNum);
    double avgNum = avg_num(arrNum);
    double devNum = deviation_num(arrNum, avgNum);

    printf("�ִ밪 : %d\n", maxNum);
    printf("�ּҰ� : %d\n", minNum);
    printf("��հ� : %lf\n", avgNum);
    printf("ǥ������ : %lf\n", devNum);

    return;
}

//2. �ִ밪 ���
int max_num(int arr[])
{
    int max = arr[5];
    int i;
    for (i = 0; i < 10; i++)
    {  
        if (arr[i] > max)
        {
            max = arr[i];
        }
    } 

    return max;
}

//3. �ּҰ� ���
int min_num(int arr[])
{
    int min = arr[0];
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

//4. ��� ���
double avg_num(int arr[])
{
    double sum = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    double avg = sum /= 10.0;
    return avg;
}

//5. ǥ������ ���
double deviation_num(int arr[], double avg)
{
    double dispersion; //�л�
    double sigma; //ǥ������
    int i;
    double sum = 0.0;
    for (i = 0; i < 10; i++)
    {
        sum += pow((arr[i] - avg), 2);
    }
    dispersion = sum / 10.0; //�л�
    sigma = sqrt(dispersion);

    return sigma;
}
