#include <stdio.h>

int main()
{
	// ������ (Operator)
	// ��������� : +, -, *, /, %
	// ���Կ����� : =(���ʿ��� ������ ����), +=, -=, *=, /=, %=
	// ���������� : ++, --
	// �񱳿����� : >, >=, <, <=, ==, !==
	// �������� : &&, ||, !
	// ��Ʈ������ : <<, >>, &(and), |(or), ^(xor), ~
	// ��Ÿ ������ : ? :, &, *

	int n1 = 10;
	int n2 = 3;
	int n3;
	float f1;

	//��� ������
	n3 = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, n3);
	n3 = n1 - n2;
	printf("%d - %d = %d\n", n1, n2, n3);
	n3 = n1 * n2;
	printf("%d * %d = %d\n", n1, n2, n3);
	f1 = n1 / (float)n2;
	printf("%d / %d = %f\n", n1, n2, f1);
	n3 = n1 % n2;
	printf("%d %% %d = %d\n\n\n", n1, n2, n3);
	
	char n = 100;	// -128 ~ 127
	n1 = 300; 

	// ����ȯ(Type cast) : ����ȯ�� �������� �ս��� �߻��� �� �ִ�.
	n = n1; //������ ����ȯ 
	n = (char)n1; //����� ����ȯ 
	f1 = 3.3333F;
	n1 = f1;	//�Ҽ������ϴ� �ҽǵ� , ������ ����ȯ 
	n1 = (int)f1;


	// ���� ������ 
		

	// =, - , * , / , %
	// L.V(����) = R.Value (���� , ���, �Լ�, ����..)
	int num = 1;
	int sum = 0;
	sum += num;     // sum = sum + num; ==> sum = 1
	sum += num;     // sum = sum + num; ==> sum = 2
	sum -= num;		// sum = sum - num; ==> sum = 1
	sum *= num;		// sum = sum * num;
	sum /= num;		// sum = sum / num;
	sum %= num;		// sum = sum % num;

	// �񱳿����� : >, >= , < , <= , == , !=
	// �� ������ ������ ����� �׻� ����(1(true), 0(false))
	int result;
	result = 1 > 5;
	printf(" result = %d\n", result);

	result = 1 <= 5;
	printf(" result = %d\n", result);

	result = 1 == 5;
	printf(" result = %d\n", result);

	result = 1 != 5;
	printf(" result = %d\n", result);

	printf("\n=============================\n\n");

	// �� ������ : &&(AND), ||(OR), !(NOT)
	num = -5;
	sum = 0;
	result = num && sum;	// T && F ==> F (result) �Ѵ� T�ϋ� T
	printf(" result = %d\n",result);

	result = num || sum;	// T && F ==> T (result) ���� �ϳ��� T�϶� T
	printf(" result = %d\n", result);

	result = !num;			// -5�� True�̰� ===> False�� ����
	printf(" result = %d\n", result);
	
	printf("\n=============================\n\n");
	
	// ���� ������ : ++, --
	num = 0;
	num++;	//num = num +1; , num += 1;
	printf(" num = %d\n", num);		// 1
	++num;	//num = num +1;
	printf(" num = %d\n", num);	// 2

	printf(" num = %d\n", num++);	//print 2 ���� ��� �� ���� => 3
	printf(" num = %d\n", ++num);	// 3+1= 4
	printf(" num = %d\n", ++num);	// 5


	//
	sum = -num; // -�� ��ȣ�����ڷ� ���� 

	// ������ �켱���� : ���迡 ���� ���� 
	/*
	1 : ++, --
	2 : +, - (��ȣ ������)
	3 : *, /, %
	4 : +, -
	5 : >,>=,<,<=
	6 : ==, !=
	7 : �� ������
	8 : ���� ������
	*/





	return 0;

}