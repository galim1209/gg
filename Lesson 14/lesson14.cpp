#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// �迭�� ���޹޾Ƽ� �迭�� ��� ��ҵ��� ������ ����ϱ� 
// �Լ��� �迭�� �����Ҷ��� �ݵ�� �迭�� ���� �ּҿ� �迭�� ���̸� ���� �����ؾ� �Ѵ�!
void display_array(int p[], int count)
{
	printf(" [display_array] p�� ũ�� : %u\n", sizeof(p));
	printf(" p[0] = %d\n ", p[0]);
	for (int i = 0; i < count; i++)
	{
		printf("%d\t", p[i]);

	}
	printf("\n");

}

int main()
{
	/*int num;
	printf(" ������ �Է��ϼ��� ==>>> ");
	scanf("%d", &num);
	printf(" �Էµ� ������ : %d\n", num);*/

	char sz[] = "abcde";
	// �迭���� �ּ�(���)�̴�.
	//char sz[30] = { 0 };	// (char : 1byte) sz�� 30����Ʈ 0���� �ʱ�ȭ 
	//sz[0] = 'A';	// "A" == sz
	//printf(" ���ڿ��� �Է��ϼ��� ==>>> ");
	//scanf("%s", sz);
	printf(" �Էµ� ���ڿ� : %s\n", sz);

	int num = 5;
	printf(" num�� �ּ� : %p \n", &num);
	printf(" sz�� �ּ� : %p \n", & sz);

	char* ptr = sz; // ����
	//sz = ptr;	//�Ұ���
	printf(" %c\n", sz[0]); //a
	printf(" %c\n", ptr[0]);

	int arr[] = { 10,20,30,40,50 };
	int* ptr2 = arr;	// arr = ptr2; (X)
	printf(" %d\n", arr[2]);
	printf(" %d\n", ptr2[2]);
	printf(" arr�� ũ�� : %u\n", sizeof(arr));
	printf(" ptr2�� ũ�� : %u\n", sizeof(ptr2));


	int count = sizeof(arr) / sizeof(int); // ������ ����
	display_array(arr, count);


	// �ҹ��ڸ� �빮�ڷ� ����ϴ� �Լ��� �ۼ��ϼ��� 
	//char sz[] = "abcde";
	/*
	A
	B
	C
	D
	E
	*/

	//������ ���� �������� ��µǴ� �Լ��� �ۼ��ϼ��� 
	//char sz[] = "abcde";
	/*
	abcde
	bcde
	cde
	de
	e
	*/

	


	return 0;
}


