#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�����
	printf(" �ȳ��ϼ���\n");	// \n : �ٹٲ�, New Line
	printf(" �ȳ��ϼ���\t ");	// \t : tab ��� ����
	printf("tab��ŭ �̵���\n");
	printf(" Hello C");
	printf("\r Welcome C"); 
	//printf("\rWelcome C") // \r : Ŀ���� ������ ó�� ��ġ�� �̵���Ų��.
	printf("\b\b C++\n");		// \b : back space ���
	printf(" ��⵵ \"������\"\n");		// \", \' : �ο��ȣ ���
	printf(" c:\\test.txt\n");	// \\ :  \��ȣ�� ����Ѵ�.

	//
	int age = 10;	//4 byte
	char ch = 'K';	//1 byte
	short kor = 96; //2 byte
	float pi = 3.14F;	//4 byte
	double math = 42.195;

	printf(" ���̴� %d �Դϴ�.\n", age);	//%d : ���Ĺ��� (Formatted Character)
	printf(" %corea\n", ch);
	printf(" �������� : %hd\n", kor);	//short�� ����
	printf(" PI : %f\n", pi);
	printf(" PI : %4.2f\n", pi);	//�Ҽ��� ���� 4�ڸ��� Ȯ���ϰ� �Ҽ������ϴ� 2�ڸ��� ������ 
	printf(" marathon : %6.1f\n", math);
	printf(" marathon : %.3f\n", math);
	printf(" %5d \n", age);		// 5�ڸ��� Ȯ���ϰ� ���������Ͽ� ��� 
	printf(" %-5d \n", age);	// 5�ڸ��� Ȯ����� ���������Ͽ� ���(-)

	// 16 ���� ���
	printf(" 10 = %X\n", age);  
	
	// %��ȣ�� ��� 
	printf(" ���� %d%%\n", kor);
	
	// %s : ���ڿ� ���
	printf(" �� �̸��� %s \n", "�������Դϴ�");

	// %p : Ư�� ��ü�� �޸� �ּҸ� ����Ѵ�.
	printf(" ch�� �ּ� : %p\n", &ch);	// [& : �ּ� ������, �����տ� �ܵ����� ���� ���]

	printf(" �� �̸��� %s �̰�, ���̴� %d�� �Դϴ�.", "������", age);


	printf("\n\n=================================================\n");
	// ǥ�� �Է� �Լ� : scanf 
	printf("���̸� �Է��ϼ��� >>> ");
	scanf("%d", &age);	// ������ ������ �Ѱ��� �Է¹޴´�. 
	printf(" �� �̸��� %s �̰�, ���̴� %d�� �Դϴ�.\n", "������", age);

	printf(" ����� Ű�� �Է��ϼ��� >>> ");
	float height;
	scanf("%f", &height);
	printf(" �Է¹��� Ű�� %.2fcm�Դϴ�\n", height);
	
	scanf("%c", &ch);	//�Է� ���� Ŭ���� (����Ű ���)
	printf(" ���ĺ� ���ڸ� �Է��ϼ��� >>> ");
	scanf("%c", &ch);	//���ĺ� �ѱ��� �Է¹ޱ� 
	printf(" �Է��Ͻ� ���ĺ��� %c�Դϴ�\n",ch);

	

	printf(" ���������� �Է��ϼ��� >>> ");
	scanf("%hd", &kor);		//[kor�� short���̹Ƿ� �ݵ�� %hd�� ����ؾ� �Ѵ�.]
	printf(" �Էµ� ���������� %d�� �Դϴ�\n",kor);

	short eng;
	short history;
	printf(" ����, ����, ���� ������ �Է��ϼ��� >>> ");
	scanf("%hd %hd %hd", &kor, &eng, &history);
	printf(" ����:%d��, ����:%d��, ����%d��\n", kor, eng, history);


	

	return 0;

}