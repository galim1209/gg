#include <stdio.h>

//�Լ� ��� ��Ģ 
// 1. ȣ���ϱ����� ������ �Լ��� ���ǵǾ� �־�� �Ѵ� [!]
// 2. �Լ��� ȣ���Ҷ��� ���ǵ� ���İ� �����ϰ� �����ϰ� ȣ���ؾ� �Ѵ�.
// 3. �� �� ������ �ۼ� ��Ģ�� �����ϰ� �����Ѵ�.
// 4. �Լ��� �ٸ� �Լ� ���ο� ���Ե� �� ����. �ݵ�� ���������� �����ؾ� �Ѵ�.

// �Լ��� ����ϴ� ������ : �ڵ��� ����(���꼺 ���δ�, Productivity)

// �Լ��� �����ϴ� ���
// �Լ���(�ڷ���) �Լ���( [�Ű����� 1, �Ű����� 2, ...] ) { }
//
//�Ű����� : Parameters, Arguments, �μ�, ����
//
// Define a function (�Լ��� ����) 

int add_number(int n1, int n2) // n1, n2 = ȣ��ηκ��� �ʱ�ȭ 
{
	return n1 + n2;	//return �Լ��� ó���ϰ� ����� ȣ��η� ��ȯ�ϴ� ���
}

int add_number(int n1, int n2, int n3) 
{
	return n1 + n2 +n3;	//return �Լ��� ó���ϰ� ����� ȣ��η� ��ȯ�ϴ� ���
}

// void : ��ȯ���� ����, ȣ�����ʿ� ����� ��ȯ���� �ʴ´�.
void display_number(int n)
{
	printf(" �Ű����� : %d\n", n);
	// return; �ʿ����
}

float get_pi()
{
	return 3.141592F;
}

int multiply(int n1, int n2)
{
	//return n1 * n2;
	int result = 0;
	for (int i = 0; i < n2; i++)
	{
		result = add_number(result, n1);
	}
	return result;
}
//1.
// 1���� n������ ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �����ϰ�,
// main()�Լ����� 100�� �Է��Ͽ� ȣ���� �� �� ����� ����ϼ��� .

// 1 + 2 + 3 +... n = ???
int total(int n)
{
	int sum = 0;	// ���� ���� 
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

//2.
// ������ (float)�� �Է��ϸ� ���� ���� ���� ���ϴ� �Լ��� �����ϼ���.(���� * ������ * ������)
// ���� ���� ��ȯ�ϵ��� �����ϼ��� .
// scanf()�� ������� �ʰ� �Ű������� ������(float)�� �Է¹޵��� �Լ��� �����ϼ���.

float circle(float r)
{
	return get_pi() * r * r;
}

int main()
{
		
	// ������ ������ [= �ʱ�ȭ �� ��] ;
	
	// Call a function (�Լ��� ȣ��) 
	int n = add_number(10, 20);		//add_number()�Լ��� ȣ���ϰ� �� ����� n�� �����Ѵ�.
	printf(" n = %d \n", n);

	n = add_number(30, 5); // add_number()�Լ��� ȣ���ϰ� �� ����� n�� �����Ѵ�.
	printf(" n = %d \n", n);

	/*int n1;
	int n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	n = add_number(n1, n2); */

	display_number(50); //void�� �Լ� ���(��ȯ��X)

	printf(" ���� : %.4f\n", get_pi());
	

	printf(" %d\n", multiply(10, 5));


	printf(" 1���� 100������ �� : %d\n", total(100));



	return 0;
}