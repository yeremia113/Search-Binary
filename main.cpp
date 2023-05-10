#include <iostream>
#include "LinkedList.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	
	LinkedList list2;
	
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printAll();
	

	Node* head = NULL;

    // Insert elemen baru di akhir linked list
    LinkedList list3;
    list3.insertToTail(head, 1);
    list3.insertToTail(head, 2);
    list3.insertToTail(head, 3);
    list3.insertToTail(head, 4);

    // Cetak linked list
    cout << "Linked List setelah insertToTail: ";
    printLinkedList(head);

    // Insert elemen baru setelah elemen kedua
    insertAfter(head->next, 5);

    // Cetak linked list
    cout << "Linked List setelah insertAfter: ";
    printLinkedList(head);

    
	return 0;
}
