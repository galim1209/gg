#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	// ���� ������
	// ���ǽ�(�񱳽�, ����) ? ���϶� ��ȯ�� : �����ϋ� ��ȯ�� :

	int n = 5;
	char ch;

	ch = (n % 2) == 0 ? 'e' : 'o';
	printf(" ch = %c\n", ch);

	// ��� : if, switch
	// if�� 
	/*
	if (���ǽ�) {
		// local(����)
		���ǽ��� ���϶� ����Ǵ� ��ɹ�1
		���ǽ��� ���϶� ����Ǵ� ��ɹ�2
		...
		}

		if (���ǽ�) {
		// local(����)
		���ǽ��� ���϶� ����Ǵ� ��ɹ�1
		���ǽ��� ���϶� ����Ǵ� ��ɹ�2
		...
		}
	else
		{
		���ǽ��� ���϶� ����Ǵ� ��ɹ�1
		���ǽ��� ���϶� ����Ǵ� ��ɹ�2
		}

	if (���ǽ�1){
		���ǽ�1�� ���ϋ� ����Ǵ� ��ɹ���...
		}
		else if (���ǽ�2) {
		���ǽ�2�� ���ϋ� ����Ǵ� ��ɹ���...
		}
		else if (���ǽ�2) {
		���ǽ�2�� ���ϋ� ����Ǵ� ��ɹ���...
		}
		...
		else {
			���� ��� ���ǽĵ��� �����϶� ����Ǵ� ��ɹ���...
			}

	*/
	
// n = 5;
	//if���� ù��° ����
	if (n % 2 == 0)
		
	printf("%d�� ¦���Դϴ�.\n", n);

	if (n % 2 == 0)
		printf("%d�� ¦���Դϴ�.\n", n);
	else
		printf("%d�� Ȧ���Դϴ�.\n", n);
	
	//���̿� ���� ������� �����ϱ�
	int age = 15;
	int payment = 0;

	if (age >= 65)
	payment = 0;
	else if (age< 65 && age >=18) // 18 < age < 65
	payment = 1500;
	else if (age <= 18 && age >= 8)
	payment = 1000;
	else payment = 500;

	printf("\n ================================\n");
	//// ����)
	//// ������ 90 ~100�̸� A����
	//// ������ 80 ~ 89�̸� B����
	//// ������ 70 ~ 79�̸� C����
	//// ������ 60 ~ 69�̸� D����
	//// �׿ܴ� F����

	//// �������)
	//// ������ �Է��ϼ��� (0~100������) >>> xxx
	//// ������ 90���̰�, A�����Դϴ�.
	//
	/*int score;
	printf(" ������ �Է��ϼ��� (0~100������) >>> ");
	scanf("%d", &score);
	

	if (score >= 90)
		printf("������ %d���̰�, A�����Դϴ�.", score);
	else if (score >= 80 && score <= 89)
		printf("������ %d���̰�, B�����Դϴ�.", score);
	else if (score >= 70 && score <= 79)
		printf("������ %d���̰�, C�����Դϴ�.", score);
	else if (score >= 60 && score <= 69)
		printf("������ %d���̰�, D�����Դϴ�.", score);
	else 
		printf("������ %d���̰�, F�����Դϴ�.", score);*/

	int grade;
	int score;
	printf(" ������ �Է��ϼ��� (0~100������) >>> ");
	scanf("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("������ %d���̰�, %c�����Դϴ�\n", score, grade);


	return 0;

}