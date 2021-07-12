#include "DoublyLinkedList.h"

Node* head;
Node* tail;

void insert(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	Node* cur;
	cur = head->next;
	while (cur->data < data && cur != tail)
	{
		cur = cur->next;
	}
	Node* prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

void removeFront()
{
	Node* node = head->next;
	head->next = node->next;
	Node* next = node->next;
	next->prev = head;
	free(node);
}

void show_DoublyLinkedList()
{
	Node* cur = head->next;
	while (cur != tail)
	{
		printf("%d \n", cur->data);
		cur = cur->next;
	}
}