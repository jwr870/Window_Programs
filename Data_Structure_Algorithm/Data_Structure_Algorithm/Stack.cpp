#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

//int stack[SIZE] = { 0, };
//int top = -1;

void push(Stack* stack, int data)
{
	//if (top == SIZE - 1)
	//{
	//	printf("스택 오버플로우가 발생했습니다.\n");
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
		printf("스택 언더플로우가 발생했습니다.\n");
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
	printf("--- 스택 최상단 ---\n");
	while (cur != NULL)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("--- 스택 최하단 ---\n");
}