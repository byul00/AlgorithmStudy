#include <stdio.h>
#include <string.h> 
//��ȭ ����ü ����
typedef struct
{
	char name[50];
	int year;
}movie;

void insertionSort(movie a[], int n, int (*compare)(movie x, movie y))
{
	for (int i = 1; i < n; i++)
	{
		movie x = a[i];
		int j = i - 1;
		while (j >= 0 && compare(a[j], x) > 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}




//�������� �������� ���Լ�
int cmp_year(movie m1, movie m2)
{
	if (m1.year < m2.year) return -1;
	if (m1.year > m2.year) return 1;
	return 0;
}

//��ȭ���� �����ټ� ���Լ�
int cmp_name(movie m1, movie m2)
{
	return strcmp(m1.name, m2.name);
}

//�������� �ֽż�, ���� ������ �����ټ� ���Լ�
int cmp_year_name(movie m1, movie m2)
{
	if (m1.year < m2.year) return 1;
	if (m1.year > m2.year) return -1;
	return strcmp;
}

int main(void)
{
	movie hits[5] = { {"��", 2014},{"��������", 2019},{"�����", 2019},{"��������", 2014},{"�λ���", 2016} };

	insertionSort(hits, 5, cmp_year_name);
	for (int i = 0; i < 5; i++)
		printf("%s %d\n", hits[i].name, hits[i].year);

	return 0;
}