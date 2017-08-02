#include "Queue.h"

Queue::Queue()
{}

Queue::~Queue()
{}

void Queue::addBack(char data)
{
    Node *newNode = new Node(data);
    if (m_tail)
    {
        m_tail->setNext(newNode);
        m_tail = newNode;
    }
    else
    {
        m_tail = newNode;
        m_head = newNode;
    }        
}

void Queue::removeFront()
{
    if (m_head)
    {
        Node* temp;
        temp = m_head->getNext();
        delete m_head;
        m_head = temp;
    }
}

bool Queue::isEmpty()
{
    if (!m_head) // if head is NULL
    {
        return true;
    }

    return false;
}