#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>	// �ѱ������ϱ� ���� ���
#include <memory.h> // heap ���� �Լ���
#include <string.h> // ���ڿ� ó�� �Լ���
#include <conio.h> // windows os ���� �ܼ� ����� �Լ� (Ű �Է�)

#define FREE(x)		if(x) {free(x); x = NULL;}

typedef unsigned int	UINT;

// �μ� ������ �����ϴ� ������ Ÿ�� ����
typedef struct {
	UINT		id;			// �μ��ڵ�
	TCHAR	name[20];		// �μ���
}PART;

// ���� ������ �����ϴ� ������ Ÿ�� ����
typedef struct {
	UINT		id;			// ���� �ڵ�
	TCHAR	name[20];		// ���޸�
}RANK;

// ��� ������ �����ϴ� ������ Ÿ�� ����
typedef struct {
	UINT		id;		// ����ڵ�
	TCHAR	name[20];	// �����
	UINT		part;	// �μ� �ڵ�
	UINT		rank;	// ���� �ڵ�
}EMPLOYEE;

void show_main_menu();

int input_menu();

UINT insert_part(PART** ppPart, UINT size);	// �μ� ���� �Է� �Լ�
UINT print_part(PART* pPart, UINT size);	// �μ� ���� ��� �Լ�
