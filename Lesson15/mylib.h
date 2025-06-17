// #pragma once // �� ��������� �ߺ� ���Խ�Ű�°� ����, cpp style

#ifndef ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____
#define ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ũ�� ��� ����
#define COUNT		10



// �Լ��� ����(�Լ��� ���� ����)
int binary_search(int arr[], int count, int to_find);
int find_value(int arr[], int count, int to_find);
void random_value(int arr[], int count);
void my_qsor(int arr[], int left, int right);
void sequence_sort(int arr[], int count);
void exchange_value(int* p1, int* p2);
void print_array(int arr[], int count);

// ��� ȣ�� �Լ�(Recursive Function)

// 1���� n������ ���� ���ϴ� �Լ�
int sum(int n);

// 1 ���� 10���� ���丮���� ���ϴ� ��� ȣ�� �Լ��� �����ϼ��� 
int factorial(int n);


#endif


