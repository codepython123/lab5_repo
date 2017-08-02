class Node
{
    char* m_data;
    Node* m_next;

    public:
        Node(char data);
        ~Node();
        char getData() { return m_data; }
        Node* getNext() { return m_next; }
        void setNext(Node* next) { m_next = next; }
}