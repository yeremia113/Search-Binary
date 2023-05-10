#include <cstddef>

class Node{
	
	public:
		int		value, data; //data value
		Node	*next; //pointer untuk node selanjutnya
		
		Node(){ //constructor: sebuah methode yang dipanggil pertama kali
			next = NULL;
		}
};

class LinkedList {
	
	
	public:
		Node *head;
		Node *tail;
		
		void insertToHead(int);
		void insertToTail(int);
		void insertAfter(int, int); //(insert Node X, setelah Node B) insertAfter(X, B)
		
		void deleteFromHead();
		void deleteFromTail();
		void deleteByValue(int);
		
		void printAll();
		
		LinkedList(){
			head = tail = NULL;
		}
};
