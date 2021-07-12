#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

//int stack[SIZE] = { 0, };
//int top = -1;

void push(Stack* stack, int data)
{
	//if (top == SIZE - 1)
	//{
	//	printf("���� �����÷ο찡 �߻��߽��ϴ�.\n");
	//	return;
	//}
	//
	//stack[++top] = data;

	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;

}

int pop(Stack* stack)
{
	if (stack->top == NULL)
	{
		printf("���� ����÷ο찡 �߻��߽��ϴ�.\n");
		return -INF;
	}

	Node* node = stack->top;
	int data = node->data;
	stack->top = node->next;
	free(node);
	
	return data;
}

void show(Stack* stack)
{
	Node* cur = stack->top;
	printf("--- ���� �ֻ�� ---\n");
	while (cur != NULL)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- ���� ���ϴ� ---\n");
}