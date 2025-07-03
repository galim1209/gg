#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>	// 한글지원하기 위해 사용
#include <memory.h> // heap 관련 함수들
#include <string.h> // 문자열 처리 함수들
#include <conio.h> // windows os 전용 콘솔 입출력 함수 (키 입력)

#define FREE(x)		if(x) {free(x); x = NULL;}

typedef unsigned int	UINT;

// 부서 정보를 구성하는 데이터 타입 정의
typedef struct {
	UINT		id;			// 부서코드
	TCHAR	name[20];		// 부서명
}PART;

// 직급 정보를 구성하는 데이터 타입 정의
typedef struct {
	UINT		id;			// 직급 코드
	TCHAR	name[20];		// 직급명
}RANK;

// 사원 정보를 구성하는 데이터 타입 정의
typedef struct {
	UINT		id;		// 사원코드
	TCHAR	name[20];	// 사원명
	UINT		part;	// 부서 코드
	UINT		rank;	// 직급 코드
}EMPLOYEE;

void show_main_menu();

int input_menu();

UINT insert_part(PART** ppPart, UINT size);	// 부서 정보 입력 함수
UINT print_part(PART* pPart, UINT size);	// 부서 정보 출력 함수
