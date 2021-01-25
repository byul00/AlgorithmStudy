/*
프로그램 :검색하는 key와 일치하는 모든 요소의 인덱스 
*/
#include <stdio.h>
#include <stdlib.h>
//검색하는 key와 일치하는 요소의 인덱스를 idx[]에 저장하고, 개수 반환
int search_idx(const int a[], int n, int key, int idx[])
{
	int i;	
	int count = 0;
	for (int i = 0; i < n; i++) {	
		if (a[i] == key)
			idx[count++] = i;
	}return count;	//만약 count==0이면 탐색실패!
}
int main(void)
{
	int i, nx, sn, count;
	int* idx;
	int* x;
	puts("선형 검색");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);

	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));

	if (x == NULL || idx == NULL)		//널포인터 체크
		exit(1);

	for (i = 0; i < nx; i++) {
		printf("x[%d] = ", i);
		scanf_s("%d", &x[i]);	
	}
	printf("검색값 : ");
	scanf_s("%d", &sn);

	count = search_idx(x, nx, sn, idx);
	if (count == 0)
		puts("일치하는 요소가 존재하지 않습니다.");
	else {
		printf("일치한 요소의 개수는 %d개 입니다.\n", count);
	}
	free(x);	//배열 해제
	free(idx);


	return 0;
}