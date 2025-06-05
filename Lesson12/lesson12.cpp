#include <stdio.h>
#include <string.h>
int main()
{
	printf("\n");

	//char sz[] = { 65, 66, 67, 68,69,70,71 };
	// '\0' == 0 : null terminated chracter ( �� �͹̳��̵� ����)
	 char sz[] = { 'A','B','C','D','E','F','G','\0'};
	// sz �迭�� ũ�� : 7 bytes
	// sz �迭�� ���� : 7��

	printf(" sz �迭�� ũ�� : %d bytes \n", sizeof(sz));
	printf(" sz �迭�� ���� : %d ��\n", sizeof(sz) / sizeof(char));
	
	int length = sizeof(sz) / sizeof(char);
	for(int i = 0; i< length; i++)
		{
			printf(" %c", sz[i]);
		}
	printf("\n");

	
	
	// for ���� �̿��Ͽ� sz�迭�� �ִ� ������ ��� �ҹ��ڷ� �����ϼ��� 
	for (int i=0; i< strlen(sz);i++)
	{
		sz[i] += 32;

	}
	
	printf(" sz : %s\n", sz);
	printf(" sz ���ڿ��� ���� : %d\n", strlen(sz));
	
	//char sz2[] = { 'H','e','l','l','o',' ','W','o','r','l','d',0 };
	char sz2[] = "Hello World";
	printf(" sz2 ���ڿ��� ����: %d\n", strlen(sz2));
	printf(" sz2 �迭�� ����: %d\n", sizeof(sz2));
	
	for (int i = 0; i < strlen(sz2); i++)
	{
		printf("%c", sz2[i]);
	}
	printf("\n");
	
	// if ( sz2[0] > 'A')
	
	//'A' == 65
	//sz2�� ������ �ҹ��ڸ� �빮�ڷ� �����Ͽ� ����ϼ���.
	for (int i = 0; i < strlen(sz2); i++)
	{
		if ( sz2[i] >= 'a' && sz[i] <= 'z' )	//sz[i]��Ұ� �ҹ����̸� ..
			 sz2[i] -= 32;
			
	}
	printf("%s\n", sz2);	// HELLO WORLD
	
	char sz3[] = "�ȳ�";
	printf("%s\n", sz3);
	printf("strlen(sz3) : %d\n", strlen(sz3));
	printf("strlen(sz3) : %d\n", sizeof(sz3));


		return 0;
}