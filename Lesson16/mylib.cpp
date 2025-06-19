#include "mylib.h"


void random_value(int arr[], int count)
{
	if (!arr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		arr[i] = rand() % 100;	// arr�迭�� i��° ��ҿ� ������ ���� ����(100�̸��� ������ ����)
	}
}


// arr = 0x1
// arr(pointer) + i : �ּ��� ����
// ������ + 1�� �ǹ̴� + (sizeof(type) * i)�� ����
void print_array(int arr[], int count)
{
	if (!arr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		//printf("%3d ", arr[i]);
		printf("%3d ", *(arr + i));
	}

	printf("\n");
}

void exchange_value(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// ���� ����(���� �⺻���� ���� �˰���)
void sequence_sort(int arr[], int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (arr[i] > arr[j])
				exchange_value(&arr[i], &arr[j]);
		}
	}
}

/*
find_value : ���� Ž�� �Լ�
��ȯ�� : int, ã�� ���� �ε���, ã�� ���� �迭�� ���ٸ� -1�� ��ȯ

�Ű�����
int arr[] : ��� �迭
int count : �迭�� ��ҵ��� ����
int to_find : ��� �迭���� ã�� ��
*/
int find_value(int arr[], int count, int to_find)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == to_find)
			return i;
	}

	return -1;
}

// ���� Ž��
int binary_search(int arr[], int count, int to_find)
{
	int start = 0;			// �ʱ� ���� �ε���
	int end = count - 1;	// �ʱ� ������ �ε���

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == to_find)
			return mid;

		if (arr[mid] > to_find)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}

// ��� ȣ�� �Լ�(Recursive Function)

// 1���� n������ ���� ���ϴ� �Լ�
int sum(int n)
{
	if (n == 0)
		return 0;	// �Լ��� ��� �ߴܽ�Ű�� ȣ���������� ����� ����.

	return n + sum(n - 1);	// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

	//int total = 0;
	//for (int i = 1; i <= n; i++)
	//{
	//	total += i; // 1 + 2 + 3 + 4 + 5 + ... + 10
	//}

	//return total;
}

// 1 ���� 10���� ���丮���� ���ϴ� ��� ȣ�� �Լ��� �����ϼ��� 
int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;	// �Լ��� ��� �ߴܽ�Ű�� ȣǮ�������� ����� ����.

	return n * factorial(n - 1);

}


// reft : ���� �ε���
// right : ������ �ε��� 
void my_qsor(int arr[], int left, int right)
{
	if (left >= right) return;

	// ������ ���� ���ذ��� ���� 
	int pivot = arr[left]; // �Ϲ����� �迭�� ���۰��� ���ذ����� ���Ѵ�.
	int i = left + 1;
	int j = right;

	while (i <= j)
	{
		// while���� ���ǽ��� ������ �Ǹ� ����(����)�� �ߴ��� 
		while (i <= right && arr[i] <= pivot) i++;
		while (j >= left+1 && arr[j] >= pivot) j--;
		// ���� i�� j�� �������� �ʾҴٸ� �� ���� ���� ��ȯ�Ѵ�. (exchange_Value)
		if (i <= j) exchange_value(&arr[i], &arr[j]);

		//i �� j �� ������ �Ǵ� ���� �� while �ݺ��� �������� 
	}
	
	exchange_value(&arr[left], &arr[j]);
	
	my_qsor(arr, left, j - 1);
	my_qsor(arr, j + 1, right);


}

int my_strlen(char* psz);
{
	int count = 0;
	int i = 0;
	while (psz[i])
	{
		++ cpunt;
		++i;
	}

	return count;
}