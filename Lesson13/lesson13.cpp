#include <stdio.h>

// 1111 0000 
//  F    F

int add(int a, int b)
{
	a = 100;
	b = 200;

	return a + b;
}

// �Լ��� �����ε�( Over Loading )
int add(int *p1, int *p2)
{
	printf(" %d\n", *p1);
	printf(" %d\n", *p2);
	
	*p1 = 100;
	*p2 = 200;

	return *p1 + *p2;
}

void add(int a, int b, int* ret)
{
	*ret = a + b;

}

void exchange(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

}
/*
deaf exchange(n1,n2);
	 n1,n2 + n2,n1

*/


int main()
{	//Local (����)
	
	short num;	// �޸� 2 ����Ʈ Ȯ�� (����������, �ý����� �˾Ƽ� ��������)
	num = 5;	// Ȯ���� �޸� num������ ���� 5�� �����϶�

	// &�� ���ó 
	// �� ������ : 1 && 0
	// ��Ʈ ������ : 1 & 0
	// �ּ� ������ : &����, ������ �ּ� 

	printf(" num = %d\n", num);
	printf(" num�� ũ�� : %u bytes\n", sizeof(num));
	printf(" num�� �ּ� : %p\n", &num);

	// Pointer (������) ���� : ������ �ּҸ� �����Ҽ� ����.
	// �ڷ���* ������;

	short* addr = &num;	// short* ���� ���� ���� addr�� �����Ѵ�. num�� �ּҸ� �����Ѵ�.
	printf(" addr�� ũ�� : %u bytes \n", sizeof(addr));
	printf(" addr�� �� : %p \n", addr);

	//addr = 100; (x) ������ ���� �̱� ������ �ȵ� 
	printf(" addr�� �����ϴ� ���� �� : %d\n", *addr);
	*addr = 20;
	printf(" num = %d ", num);
	*addr = 200;
	printf(" num = %d\n", num);
	*addr = 20;


	long long num2 = 200000L;
	printf(" num2 = %lld\n", num2);
	printf(" num2�� ũ�� : %u bytes\n", sizeof(num2));
	printf(" num2�� �ּ� : %p\n", &num2);
	long long* addr2 = &num2;
	printf(" addr2�� ũ�� : %u bytes \n", sizeof(addr2));
	printf(" addr2�� �� : %p \n", addr2);
	printf(" addr2�� �����ϴ� ���� �� : %d\n", *addr2);
	printf("\n\n");
	
	int n1 = 10;
	int n2 = 20;
	int n3 = add(n1, n2);	 //���� ���� ȣ��(Call by Value)

	printf(" n1 = %d \n", n1);
	printf(" n2 = %d \n", n2);
	printf(" n3 = %d \n", n3);

	n3 = add(&n1, &n2);	// ������ ���� ȣ�� (CAll by Referance)
	printf(" n1 = %d \n", n1);
	printf(" n2 = %d \n", n2);
	printf(" n3 = %d \n", n3);

	printf("=======================\n");
	n1 = 5;
	n2 = 8;

	add(n1, n2,&n3);
	printf(" n1 = %d \n", n1);
	printf(" n2 = %d \n", n2);
	printf(" n3 = %d \n", n3);


	int tmp = n1;
	n1 = n2;
	n2 = tmp;

	add(n1, n2, &n3);
	printf(" n1 = %d \n", n1);
	printf(" n2 = %d \n", n2);
	printf(" n3 = %d \n", n3);
	printf("=======================\n");
	
	/*exchange(&n1, &n2, n3);
	printf(" n1 = %d \n", n1);
	printf(" n2 = %d \n", n2);
	printf(" n3 = %d \n", n3);*/
	
	return 0;

}