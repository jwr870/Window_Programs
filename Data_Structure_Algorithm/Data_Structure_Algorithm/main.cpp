#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "def.h"

#ifdef ArrayBasedList
#include "ArrayBasedList.h"
#endif

#ifdef LinkedList
#include "LinkedList.h"
#endif

#ifdef DoublyLinkedList
#include "DoublyLinkedList.h"
#endif

#ifdef Stack_lib
#include "Stack.h"
#endif

/* variables */
//#ifdef LinkedList
//Node* head;
//#endif
//
//#ifdef DoublyLinkedList
//Node* head;
//Node* tail;
//#endif

int main(void)
{
#ifdef ArrayBasedList
	printf("Array Based List\n");
	addBack(5);
	addBack(8);
	addBack(7);
	addFirst(3);
	addFirst(4);

	removeAt(0);

	show();
#endif

#ifdef LinkedList
	printf("Linked List\n");
	Node* head = (Node*)malloc(sizeof(Node));
	Node* node1 = (Node*)malloc(sizeof(Node));
	Node* node2 = (Node*)malloc(sizeof(Node));

	node1->data = 1;
	node2->data = 2;
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	Node* cur = head->next;

	while (cur != NULL)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}

	if (node1 != NULL)
		free(node1);

	if (node2 != NULL)
		free(node2);
#endif

#ifdef DoublyLinkedList
	printf("Doubly Linked List\n");
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));

	head->next = tail;
	head->prev = head;
	tail->next = tail;
	tail->prev = head;
	insert(2);
	insert(1);
	insert(3);
	insert(9);
	insert(7);
	removeFront();

	show_DoublyLinkedList();
#endif

#ifdef Stack_lib
	printf("Stack\n");
	Stack stack;
	stack.top = NULL;
	push(&stack, 7);
	push(&stack, 5);
	push(&stack, 4);
	pop(&stack);
	push(&stack, 6);
	pop(&stack);
	show(&stack);
#endif

	system("pause");
	return 0;
}