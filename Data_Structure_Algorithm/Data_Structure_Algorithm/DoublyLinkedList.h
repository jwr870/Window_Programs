#pragma once
#ifndef _DOUBLYLINKEDLIST_H_
#define _DOUBLYLINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

/* Structure */
typedef struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
} Node;

extern Node* head;
extern Node* tail;

/* Function */
void insert(int data);
void removeFront();
void show_DoublyLinkedList();

#endif // _DOUBLYLINKEDLIST_H_