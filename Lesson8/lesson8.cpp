#include <stdio.h>
#include <conio.h>

int main()

{
	int i = 0;
	/*
	do 
	{	
		�ݺ� ������ ��ɹ���...
	} while(���ǽ�);
	*/

	char ch = '1';

	do {
		printf(" 1. ������\n");
		printf(" 2. ���Ͽ���\n");
		printf(" 3. ��������\n");
		printf(" 4. �μ�\n");
		printf(" =============== \n");
		printf(" x. ���α׷� ���� \n");
		printf(" =============== \n");
		printf(" �޴��� �����ϼ��� : ");

		ch = _getch();
		printf("\n");
	
	} while (ch != 'x' && ch != 'X');
	{
		printf(" 1. ������\n");
		printf(" 2. ���Ͽ���\n");
		printf(" 3. ��������\n");
		printf(" 4. �μ�\n");
		printf(" =============== \n");
		printf(" x. ���α׷� ���� \n");
		printf(" =============== \n");
		printf(" �޴��� �����ϼ��� : ");

	}
	printf(" do ~ while �ݺ����� ����Ǿ����ϴ�. \n");

	return 0;
}
