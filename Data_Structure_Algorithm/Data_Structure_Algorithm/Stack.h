#pragma once
#ifndef _STACK_H_
#define _STACK_H_

#define SIZE 10000
#define INF 999999999

//extern int stack[SIZE];
//extern int top;

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

typedef struct Stack
{
	Node* top;
} Stack;

//void push(int data);
void push(Stack* stack, int data);
int pop(Stack* stack);
void show(Stack* stack)
;
#endif //_STACK_H_