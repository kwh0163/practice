#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //���ڿ� ���� �Լ�

//�ڱ� ���� ����ü
/*
struct Node
{
	int data;
	struct Node* pointer;

};
*/

int main()
{
	//�ڱ� ���� ����ü
	/*
	//�ڽŰ� ������ ����ü�� ����ų �� �ִ� ������ ������
	//��� ������ ������ ����ü
	//NULL�� �����Ͱ� �ƹ� ��ġ�� ����Ű�� �ʵ��� �ʱ�ȭ �ϴ°�

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	struct Node* structPtr = &node1;
	
	printf("ù ��° ����ü data�� �� : %d\n", structPtr->data);

	structPtr->pointer = &node2;
	printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->data);

	structPtr->pointer->pointer = &node3;
	printf("�� ��° ����ü data�� �� : %d\n", structPtr->pointer->pointer->data);
	*/

	//���ڿ� �Լ�
	
	char name[] = { "asdf" };
	printf("name�� �� : %s\n", name);
	
	//strlen - (���ڿ��� ���̸� ����ϴ� �Լ�)
	printf("name�迭�� ���� : %d\n",strlen(name));
	//strlen()�Լ��� ���ڿ��� ���̸� ���� �� 
	//NULL���� ������ ������ ���̸� ����մϴ�.
	
	//strcpy - (���ڿ��� �����ϴ� �Լ�)
	char A[10] = { "qwer" };
	char B[10] = { "zxvc" };

	//read only ������ �ִ� ���ڿ� ���ͷ��̱� ������ ���� ������ �� ����.
	const char* C = "Player";
	const char* D = "Monster";

	/*
	int i = 0;
	while (A[i])
	{
		A[i] = B[i];
		i++;
		printf("A�� ���ڿ� : % s\n", A);
	}
	*/
	
	strcpy(A, B);
	printf("������ A ���ڿ��� �� : %s", A);
	
	//strcpy()�Լ��� ù ��° �Ű������� ������� ���ڿ�
	//strcpy()�Լ��� �� ��° �Ű������� ���� �� ���ڿ��̴�.

	//strcmp - (���ڿ��� ���ϴ� �Լ�)
	//strcat - (���ڿ��� �����ϴ� �Լ�)






	return 0;
}