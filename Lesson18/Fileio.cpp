#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef unsigned int UINT;

typedef struct {
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
} USER;

// ���� ����(Global variable)
int g_age;


void save_user(USER* pUser)
{
	if (!pUser) return;

	// File Open Mode
	// Write Mode(w) : �����͸� ���Ͽ� �����ϱ� ���ؼ� ���� ���� ������ ���
	// Read Mode(r) : �����͸� ���Ϸκ��� �б� ���ؼ� �б� ���� ������ ���
	// Append Mode(a) : �����͸� ���Ͽ� �����ϱ� ���ؼ� ���� ���� ������ ���

	// Text Mode(t)
	// Binary Mode(b)

	// �����͸� �����ϱ� ���� ������ ����
	FILE* fd = fopen("user.dat", "wb");
	if (!fd)
	{
		printf("���� ���� ����!\n");
		return;
	}

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	fwrite(arr, sizeof(int), 10)*/

	// ����(fd)�� pUser�� ������ ���� �õ�
	size_t res = fwrite(
		pUser,			// �޸𸮿� �ִ� ������ ������
		sizeof(USER),	// �������� ���� ũ��
		1,				// �� ������ ����
		fd);			// ���� �ڵ鷯
	if (res != 1)
		printf("���� ����\n");

	fclose(fd);
}

void load_user(USER* pUser)
{
	if (!pUser) return;

	// ����(user.dat)�� �б� ���� �����Ѵ�.
	FILE* fd = fopen("user.dat", "rb");	// r���� ������ ������ �����Ѵ�.
	if (!fd)
	{
		printf("���� ���� ����!\n");
		return;
	}

	fread(pUser, sizeof(USER), 1, fd);

	fclose(fd);
}

void save_text(const char* text)
{
	FILE* fd = fopen("my_text.txt", "wt");
	if (!fd)
	{
		printf("���� ���� ����!\n");
		return;
	}

	// fputs(text, fd);
	size_t len = strlen(text);	// text ���ڿ��� ���̸� ���Ͽ� len�� ����
	fwrite(text, sizeof(char), len, fd);

	fclose(fd);
}


void load_text()
{
	int number = 10;		// ��������: �Լ��� ����ɶ� �Ҵ�, �Լ��� ����Ǹ� ����
	static int my_st = 10;	// static: ���α׷��� �����Ҷ� �Ҵ�, ���α׷� ����ɶ� ����

	FILE* fd = fopen("my_text.txt", "rt");
	if (!fd)
	{
		printf("���� ���� ����!\n");
		return;
	}

	fseek(fd, 0, SEEK_END);	// cursor�� ������ ���� ������ ��ġ�� �̵���Ŵ
	long size = ftell(fd);	// �� ��ġ�� ���� ���� ũ��(byte ����)�� �ȴ�
	fseek(fd, 0, SEEK_SET);	// cursor�� BOF�������� �̵���Ŵ

	char* text = (char*)malloc(size);	// heap�� �Ҵ� ����
	if (text)
	{
		memset(text, 0, size);
		fread(text, sizeof(char), size, fd);
		printf("%s\n", text);
		free(text);	// heap�Ҵ���� �޸� ����(��ȯ)
	}
	// printf("%d\n", size);
	fclose(fd);

	/*printf("%d\t", ++my_st);
	printf("%d\n", ++number);*/
}



int main()
{
	USER user = { 0 };	// ��� �����߿� ���ڿ� �����͸� ���� �Է��ϱ� ���ؼ�...

	user.id = 1;
	printf("�̸����� �Է��ϼ��� : ");
	scanf("%s", user.email);

	printf("��й�ȣ�� �Է��ϼ��� : ");
	scanf("%s", user.pw);

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &user.age);

	// �Է¹��� �����͸� ���Ͽ� �����ϱ�
	save_user(&user);

	load_user(&user);

	printf("ID : %u\n", user.id);
	printf("Email : %s\n", user.email);
	printf("PASSWORD : %s\n", user.pw);
	printf("AGE : %u\n", user.age);

	char text[2000];

	/*const char* text = "Hello\n�ȳ��ϼ���\nNice to meet you\n�ݰ����ϴ�\n";
	save_text(text);*/


	load_text();

	return 0;
}