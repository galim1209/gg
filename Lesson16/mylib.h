// #pragma once // �� ��������� �ߺ� ���Խ�Ű�°� ����, cpp style

#ifndef ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____
#define ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// ��ũ�� ��� ����
#define COUNT		10
#define ROW			5
#define COL			6



// �Լ��� ����(�Լ��� ���� ����)
int binary_search(int arr[], int count, int to_find);
int find_value(int arr[], int count, int to_find);

void random_value(int arr[], int count);
void random_value(int arr[], int count, int max_val);

void my_qsor(int arr[], int left, int right);
void sequence_sort(int arr[], int count);
void exchange_value(int* p1, int* p2);
void print_array(int arr[], int count);

int sum(int n); 
int factorial(int n);
int my_strlen(const char* psz);






#endif


