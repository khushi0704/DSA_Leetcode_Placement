#include <iostream>
using namespace std;
template<typename T>;
class Node{
	T data;
	Node<T> *next;
	Node(T d){
		data = d;
	}
};
template<typename T>;
class Stack{
	Node<T> *head;
	Stack(){
		head = null;
	}
	push(T data){
		Node<T> *n = new Node(data);
		n->next = head;
		head = n;
	}
	pop(){
		if(head != null){
		Node<T> *temp = head;
		head = head -> next;
		delete temp;
		}
	}
	top(){
		return head->data;
	}
	empty(){
		return head==null;
	}
};
int main() {
	
}