/* int�� ť IntQueue �ҽ�(����ť)*/
#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

//ť �ʱ�ȭ
int Initialize(IntQueue* q, int max)
{
	q->num = q->front = q->rear = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL) {
		q->max = 0;	//�迭 ������ ����
		return -1;
	}
	q->max = max;
	return 0;
}

int IsEmpty(const IntQueue* q)
{
	return q->num <= 0;
}
int IsFull(const IntQueue* q)
{
	return q->num >= q->max;
}

int Enque(IntQueue* q, int x)
{
	if (IsFull(q))
		return -1;	//ť�� ���� ��
	else {
		q->num++;
		q->que[q->rear++] = x;
		if (q->rear == q->max)
			q->rear = 0;
		return 0;
	}
}

int Deque(IntQueue* q, int* x)
{
	if (IsEmpty(q))	//ť�� ��� ����
		return -1;
	else {
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return 0;
	}
}

int Peek(IntQueue* q, int* x)
{
	if (IsEmpty(q))
		return -1;
	*x = q->que[q->front];
	return 0;
}

void Clear(IntQueue* q)
{
	q->num = q->front = q->rear = 0;
}

int Capacity(const IntQueue* q)
{
	return q->max;
}
int Size(const IntQueue* q)
{
	return q->num;
}

int Search(const IntQueue* q, int x)
{
	int i, idx;
	for (i = 0; i < q->num; i++) {
		if (q->que[idx = (i + q->front) % q->max] == x)
			return idx;	//�˻� ����
	}
	return -1;	//�˻� ����
}

void Print(const IntQueue* q)
{
	int i;
	for (i = 0; i < q->num; i++)
		printf("%d ", q->que[(i + q->front) % q->max]);
	putchar('\n');
}

void Terminate(IntQueue* q)
{
	if (q->que != NULL)
		free(q->que);	//�޸� ������ �Ҵ��� �迭 ����
	q->max = q->num = q->front = q->rear = 0;
}