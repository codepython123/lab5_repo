#include <iostream>

using namespace std;

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












