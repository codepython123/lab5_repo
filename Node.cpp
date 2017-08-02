#include "Node.h"

Node::Node(char data)
    : m_data(data)
{
    m_next = NULL;
}

Node::~Node()
{}