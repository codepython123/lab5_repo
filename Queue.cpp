Queue::Queue()
{}

Queue::~Queue()
{}

void Queue::addBack(Node *newNode)
{
    m_tail->setNext(newNode);
    m_tail = newNode;
}

void Queue::removeFront(Queue &list)
{
    Node* temp;
    temp = m_head.getNext();
	delete m_head;
    m_head = temp;
}

bool Queue::isEmpty()
{
    if (m_head == NULL)
    {
        return true;
    }

    return false;
}