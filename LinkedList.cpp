#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
	tail = head;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp != NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}

// Fungsi untuk menambahkan node baru di akhir linked list
void LinkedList::insertToTail(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

// Fungsi untuk menambahkan node baru setelah node tertentu pada linked list
void LinkedList::insertAfter(Node* prevNode, int newData) {
    if (prevNode == NULL) {
        cout << "Node sebelumnya tidak dapat NULL";
        return;
    }

    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Fungsi untuk mencetak semua elemen dalam linked list
void LinkedList::printAll(Node* head) {
    Node* tmp = head;

    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }

    cout << endl;
}
}
