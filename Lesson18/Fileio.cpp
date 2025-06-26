#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

typedef unsigned int UINT;

typedef struct {
	UINT id;
	char email[20];
	char pw[10];
	UINT age;
}USER;

void save_user(USER* pUser)
{
	if (!pUser) return;

	//  File Open Mode
	// Write Mode(w) : �����͸� ���Ͽ� �����ϱ� ���ؼ� ���� ���� ������ ���
	// Read Mode(r) : �����͸� ���Ϸκ��� �б� ���ؼ� �б� ���� ������ ��� 
	// Append Mode(a) : �����͸� ���Ͽ� �����ϱ� ���ؼ� ���� ���� ������ ��� 

	// Text Mode (t)
	// Binary Mode (b)

	// �����͸� �����ϱ� ���� ������ ���� 
	
	FILE* fd = fopen("user. dat", "wb");
	if (!fd)
	{
		printf(" ���� ���� ���� .. \n");
		return;

	}
	
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	fwrite(arr, sizeof(int), 10);*/
	
	//����(fd)�� pUser�� ������ ���� �õ�
	size_t res = fwrite(
				pUser,				// �޸𸮿� �ִ� ������ ������ 
				sizeof(USER),		// �������� ���� ũ��
				1,					// �� ������ ����	
				fd);				// ���� �ڵ鷯 

	if (res != 1)
	{
		printf(" ������� \n");
		fclose(fd);
	}
}


int main()
{

	USER user = { 0 };	// ��� �����߿� ���ڿ� �����͸� ���� �Է��ϱ� ���ؼ� ...

	user.id = 1;

	printf(" �̸����� �Է��ϼ��� : ");
	scanf("%s", user.email);
	printf(" ��й�ȣ�� �Է��ϼ��� : ");
	scanf("%s", user.pw);
	printf(" ���̸� �Է��ϼ��� : ");
	scanf("%s", &user.age);

	// �Է¹��� �����͸� ���Ͽ� �����ϱ� 
	save_user(&user);


	return 0;
}