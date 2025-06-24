#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <time.h>
#include <string.h> // ���ڿ� ó���� �ϴ� �Լ����� ���ǵǾ� �ִ� ��� ����
#include <stdlib.h>

#define MAX_VALUE			100

#define CHECK_PARAM(x)		if(!x) return
#define RET_CHECK_PARAM(x)		if(!x) return NULL



// Ÿ�� ������ 
typedef unsigned short MyAge;
typedef const char* Mystring;

// ����ü(Structure)
typedef struct {
	// member 
	unsigned int no;			// no		4
	char name[30];				// �̸�		30
	MyAge age;					// ����		2
	unsigned char gender;		// ����		1
} PERSON;

void print_person(PERSON* p)
{
	CHECK_PARAM(p);


	printf(" ��ȣ : %u\n", p->no);	//  (*p).no�� �����ϱ� �� 
	printf(" �̸� : %s\n", p->name);
	printf(" ���� : %u\n", p->age);
	printf(" ���� : %s\n", (p->gender == 1) ? "����" : "����");

}
 
//memcpy(*pDest, pSrc, size_t size);
PERSON copy_person(PERSON* p)
{
	//CHECK_PARAM(p);

	PERSON copy;	// ��������

	copy.no = p->no;
	strcpy(copy.name, p->name);
	copy.age = p->age;
	copy.gender = p->gender;

	return copy;	// ���� ������ �ּҸ� ��ȯ�ϸ� �ȵȴ� !!
}

PERSON* get_person(PERSON* p)
{
	// ...
	return NULL;
}


int main()
{
	// Data Type : char, short, int, long, float, double ... pointer(Address)

	size_t ullSize = sizeof(int);	//4
	MyAge age;
	Mystring name = "ȫ�浿";	// const char *
	name = "�������";
	// name[0] = 'a';

	char car[20] = "Sonata";
	car[0] = 'C';
	car[1] = 'o';
	// car="Grandure;"

	time_t tm = time(NULL);

	PERSON p1 = { 0 }; // 40����Ʈ�� ����ü ������ ������ ��� 0���� �ʱ�ȭ
	PERSON p2;

	p1.no = 1;
	strcpy(p1.name, "ȫ�浿");	// p1.name = "ȫ�浿" , ���ڿ� ���� �Լ�
	p1.age = 20;
	p1.gender = 1;
	
	printf(" PERSON���� ũ�� : %llu\n", sizeof(PERSON));
	print_person(&p1);	// �����͸� �̿��Ͽ� ���� == >  �޸� ����, �ð� ���� 
	
	printf("\n===============\n\n");
	
	// ���� ����(DEEP copy)
	memcpy(&p2, &p1, sizeof(PERSON)); // �޸� ����(��� , ����, ������ ũ��)

	print_person(&p2);
	
	/*p2=copy_person(&p1);
	print_person(&p2);*/


	return 0;

}