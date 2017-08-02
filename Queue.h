class Queue
{
    char m_data;
    char* m_head;
    char* m_tail;

    public:
        Queue();
        ~Queue();
        void addBack() // puts on item at the end of the structure
        char getFront() // returns the value at the front of the structure
        void removeFront() // removes the first item in the structure
        bool isEmpty()
};
