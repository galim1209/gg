#include <stdio.h>

int main()

{	// �ݺ� Ƚ���� ��Ȯ�� ������������ �ַ� ��
	//for (�ʱ��; ���ǽ�; ������)
	//{
	//		�ݺ� ����� ��ɹ���...
	//}

	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %d\t", i);
	}
	
	
	
	for (i = 0; i < 10; i++)
	
		printf(" \n 4 X %d = %d", i , 4*i);
	
	printf("\n");
	
	for (i = 2; i < 10; i++)	//�ܼ�
	{
		
		for (int a = 2; a < 10; a++)	//����
			printf(" %d x %d = %d\n", i, a, i * a);

		printf("\n");
	}
	//
	/*
	
	
	
	
	*/

		
	
	
	


	return 0;

}