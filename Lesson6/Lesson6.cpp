#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	

	/*
	*
	swich (����(�Ǵ� �Լ�, ����))
	{
	case n1;
		�� ������ n1�� ������ ����Ǵ� ��ɹ���...;
		break;

	case n2;
		�� ������ n2�� ������ ����Ǵ� ��ɹ���...;
		break;

	case n3;
		�� ������ n3�� ������ ����Ǵ� ��ɹ���...;
		break;
	....
	default:
		�� ������ ��� case�� �ش���� ������ ����Ǵ� ��ɹ���.. */
		// ����ڷκ��� �޴��� ���ù޾Ƽ� �ش� �޴��� ����ϴ� �ڵ带 �ۼ� 

//	printf(" 1. ������\n");
//	printf(" 2. ���� ����\n");
//	printf("3. ���� ����\n");
//	printf(" 4. �μ�\n");
//	printf("\n====================\n");
//	printf(" 0. ���α׷� ����\n");
//	printf("\n====================\n");
//
//	printf(" �޴� ��ȣ�� �����Ͽ� �Է��ϼ��� >>> ");
//	int menu
//		scanf("% d"), & menu);
//		printf(" ���õ� �޴��� %d\n", menu);
//
//		switch (menu)
//		{
//		case 1:
//			printf("�� ������ ���õǾ����ϴ�\n");
//			break
//
//		case 2:
//			printf("���Ͽ��Ⱑ ���õǾ����ϴ�\n");
//			break
//
//		case 3:
//			printf("���������� ���õǾ����ϴ�\n");
//			break
//
//		case 4:
//			printf("�μ��� ���õǾ����ϴ�\n");
//			break
//
//		case 0:
//			printf("�� ������ ���õǾ����ϴ�\n");
//			break
//
//				default // menu���� 0 ~ 5������ ���� �ش���� ������ 
//				printf("�˼����� ���� �����Ǿ����ϴ�\n");
//}


	int score;
	int grade;

	printf(" ������ �Է��ϼ���(0 ~ 100������) >>>  ")
		scanf ("%d", &score);
	
	int n = score / 10;
	switch (n)
	{
	case 10;
	case 9;
		grade = 'A';
		break;
			
	case 8;
		grade = 'B';
		break;

	case 7;
		grade = 'C';
		break;
	case 6;
		grade = 'D';
		break;
	default;
	grade = 'F';
	}
	
	printf("������ % d���̰�, % c�����Դϴ�", score, grade);
	
	return 0;
	;
}
