class Queue
{
    Node* m_head;
    Node* m_tail;

    public:
        Queue();
        ~Queue();
        void addBack(); // puts on item at the end of the structure
        Node* getFront() { return m_head; } // returns the value at the front of the structure
        void removeFront(); // removes the first item in the structure
        bool isEmpty(); // checks if queue is empty
};
