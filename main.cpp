#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* next;
	void setNext(Node *Ptr);
};

void Node :: setNext(Node *Ptr)
{
	next = Ptr;	// Set next to pointer passed in
	
}

int main()
{
    Node *first;
    Queue list;
    char temp;
    cout << "Enter a series of characters, separated by space: ";
    while (cin.get() != "")
    {
        cin >> temp;
   	first = new Node;
	first.data = temp;
	first.next = addBack(first, list);
    }
}












