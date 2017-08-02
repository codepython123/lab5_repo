#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue
{
    Node* m_head;
    Node* m_tail;

    public:
        Queue();
        ~Queue();
        void addBack(char data); // puts on item at the end of the structure
        char getFront() { return m_head->getData(); } // returns the value at the front of the structure
        void removeFront(); // removes the first item in the structure
        bool isEmpty(); // checks if queue is empty
};

#endif