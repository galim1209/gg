#include <stdio.h>




int main() 

{	// �ݺ� Ƚ���� ��Ȯ�� ������������ �ַ� ��
	//for (�ʱ��; ���ǽ�; ������)
	//{
	//		�ݺ� ����� ��ɹ���...
	//}

	//0	1	2	3	4	5	6	7	8	9	0
	int i;
	for (i = 0; i < 10; i++)
	{
		printf(" %d\t", i);
	}
	
	printf("\n\n ========================== \n\n");
	
	// 2~ 9 ����
	for (i = 0; i < 10; i++)
	
		printf(" \n 4 X %d = %d", i , 4*i);
	
	printf("\n");
	
	for (i = 2; i < 10; i++)	//�ܼ�
	{

		for (int a = 2; a < 10; a++)	//����
			printf(" %d x %d = %d\n", i, a, i * a);

		printf("\n");
	}

	printf("\n\n=========================\n\n");

	// 2 X 1 = 2	3 X 1 = 3	4 X 1 = 4
	for (int gop = 1; gop < 10; gop++)
		{
		for (int dan = 2; dan < 10; dan++)
		{
			printf(" %d X %d = %d\t", dan, gop, dan * gop);
		}
			printf("\n");
		}

	printf("\n\n==========================\n\n");
		
	//
	/*
	1	2	c	4	5	c	7	8	9	10	
	11	12	13	14	15	16	17	18	19	20
	21	22	...							c
	c	c	C
	...
	81	82	83 ...
	c	c	C	c	c	C	c	c	C	100
	*/
	
		
		
		for (int i = 1; i <= 100; i++)
			{
				int ten = i / 10;	// i���� 10�� �ڸ��� �и� 
				int il = i % 10;	// i ���� 1�� �ڸ��� �и�
				
				char ch = 'a';

				if (ten % 3 == 0 && ten !=0)	// 10�� �ڸ����� 3�� ������ 
					ch = 'c';		// ch�� ���� 'c'�� ����
				
				if (il % 3 == 0 && ch == 'c'&& il != 0)	// 1�� �ڸ����� 3�� ����̰� 10�� �ڸ��� 10�� ������
					ch = 'C';		//ch�� 'C'�� ����
				else if (il % 3 == 0 && il != 0)			//�׷��� �ʰ� 1�� �ڸ����� 3�� ������
					ch = 'c';		//ch�� 'c'�� ����

				if (ch == 'c' || ch == 'C') //ch�� ���� 'a'�� �ƴϰ�, 'c'�� 'C'��� ���ڴ�� ch�� ���
					printf("%c\t", ch);
				else
					printf("%d\t", i);	//���� ��쿡 �ش����� �ʴ´ٸ� i�� ��� 
						
				if (i % 10 == 0)
				printf("\n");
				
			}
		
	
	

	return 0;

}