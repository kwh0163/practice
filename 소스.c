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

void Mystrcat(char* str1, const char* str2)
{
	int len = strlen(str1);
	str1 += len;
	for (int i = 0; i <= strlen(str2); i++)
	{
		*(str1 + i) = *(str2 + i);
	}
	str1 -= len;
	printf("%s\n", str1);
}

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
	
	//strlen - (���ڿ��� ���̸� ����ϴ� �Լ�)
	/*
	char name[] = { "asdf" };
	printf("name�� �� : %s\n", name);
	printf("name�迭�� ���� : %d\n",strlen(name));
	//strlen()�Լ��� ���ڿ��� ���̸� ���� �� 
	//NULL���� ������ ������ ���̸� ����մϴ�.
	*/

	//strcpy - (���ڿ��� �����ϴ� �Լ�)
	/*
	char A[10] = { "qwer" };
	char B[10] = { "zxvc" };

	//read only ������ �ִ� ���ڿ� ���ͷ��̱� ������ ���� ������ �� ����.
	const char* C = "Player";
	const char* D = "Monster";

	int i = 0;
	while (A[i])
	{
		A[i] = B[i];
		i++;
		printf("A�� ���ڿ� : % s\n", A);
	}
	
	strcpy(A, B);
	printf("������ A ���ڿ��� �� : %s", A);
	
	//strcpy()�Լ��� ù ��° �Ű������� ������� ���ڿ�
	//strcpy()�Լ��� �� ��° �Ű������� ���� �� ���ڿ��̴�.
	*/

	//strcmp - (���ڿ��� ���ϴ� �Լ�)
	/*
	char memory1[] = { "ABCD" }; //266
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" }; //270

	//strcmp�� ù��° ���ڿ��� ũ�Ⱑ ũ�ٸ� ���(+1)�� ��ȯ�մϴ�.
	//�׷��� �ι�° ���ڿ��� ũ�Ⱑ ũ�ٸ� ����(-1)�� ��ȯ�մϴ�.
	//���࿡ �ΰ� �� ���ڿ��� ũ�Ⱑ ���ٸ� 0�� ��ȯ�մϴ�.
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory2));
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory3));

	//strcmp ���� ���� ������ �켱 ������ �����˴ϴ�.

	//strncmp : ù��° �Ű������� ���� ���ڿ�
	//			�ι�° �Ű������� ���� ���ڿ�
	//			����° �Ű������� ���� ���ڿ��� ����

	//ABC == ABC = 0
	printf("�� ���� ���ڿ��� ���� �� : %d\n",strncmp(memory1, memory2, 3));
	*/

	//strcat - (���ڿ��� �����ϴ� �Լ�)
	char name1[11] = { "Kim" };
	char name2[] = { "Woohyup" };

	//strcat���� ��쿡�� ������� ���ڿ��� ũ�⸦ �˳��� �������־�� �մϴ�.
	strcat(name1, name2);
	printf("%s\n", name1);

	char myname1[11] = { "Kim" };
	char myname2[] = { "Woohyup" };

	Mystrcat(myname1, myname2);

	return 0;
}