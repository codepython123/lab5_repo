#include "Queue.h"
#include "Node.h"

#include <iostream>

using namespace std;

int main()
{
    Queue string;
    char data;

    cout << "Enter a series of characters, separated by space. Enter 0 to end input.\nEnter: ";
    cin >> data;

    while (data != '0')
    {
        //cout << "Does it get here?\n";
        string.addBack(data);
        cin >> data;
    }

    while ( !string.isEmpty() )
    {
        cout << string.getFront() << endl;
        string.removeFront();
    }

    return 0;
}