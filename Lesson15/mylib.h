// #pragma once // 이 헤더파일을 중복 포함시키는걸 방지, cpp style

#ifndef ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____
#define ___SBS_ACADEMY__C_PRGRAMMING__178489392848739____



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 매크로 상수 정의
#define COUNT		10



// 함수의 선언(함수의 원형 정의)
int binary_search(int arr[], int count, int to_find);
int find_value(int arr[], int count, int to_find);
void random_value(int arr[], int count);
void my_qsor(int arr[], int left, int right);
void sequence_sort(int arr[], int count);
void exchange_value(int* p1, int* p2);
void print_array(int arr[], int count);

// 재귀 호출 함수(Recursive Function)

// 1부터 n까지의 합을 구하는 함수
int sum(int n);

// 1 부터 10까지 팩토리얼을 구하는 재귀 호출 함수를 구현하세요 
int factorial(int n);


#endif


