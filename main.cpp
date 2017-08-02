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

/*
void setData(char temp)
{
    data = temp;
}
*/

struct Queue
{
    Node* head = NULL;
    Node* tail = NULL;
};

Node * addBack(Node *temp, Queue &list)
{
	
	list.tail = temp;
	return list.tail;
}



Node * getFront(Queue &list)
{
 
    return list.head;
}

void removeFront(Queue &list)
{
	list.head = (*list.head).next;
        
//delete list.head;
}


bool isEmpty(Queue &list)
{
    if (list.head == NULL)
    {
        return true;
    }

    return false;
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












