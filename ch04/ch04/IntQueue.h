/* Int�� ť IntQueue(���) */
#ifndef ___IntQueue
#define ___IntQueue
/* ---ť�� �����ϴ� ����ü---*/
typedef struct {
	int max;	//ť�� �ִ� �뷮
	int num;	//���� ��� ����
	int front;	
	int rear;
	int* que;	//ť�� �� �� ��ҿ� ���� ������
}IntQueue;

//ť �ʱ�ȭ
int Initialize(IntQueue* q, int max);

int IsFull(const IntQueue* q);

int Search(const IntQueue* q, int x);

//ť�� �����͸� ��ť
int Enque(IntQueue* q, int x);

//ť�� �����͸� ��ť
int Deque(IntQueue* q, int* x);

//ť���� �����͸� ��ũ
int Peek(const IntQueue* q, int* x);

//��� ������ ����
void Clear(IntQueue* q);

//ť�� �ִ� �뷮
int Capacity(const IntQueue* q);

//ť�� ����� ������ ����
int Size(IntQueue* q);

int IsEmpty(const IntQueue* q);

void Print(const IntQueue* q);

void Terminate(IntQueue* q);

#endif