#include "singlelinkedlist.h"
#include <iostream>

Data::Data(int age, std::string surename, std::string name)
{
    Age = age;
    Name = name;
    Surename = surename;
}

Data::~Data()
{

}

Node::Node()
{
   num_node = Node::all_nodes++;
   next = NULL;
}

Node::~Node()
{
    if(num_node != 0){
        delete data;
        delete next;
    }
}

void Node::AddData()
{
    data = new Data(num_node, "Paul", "Ivanon");
}

SINGLELINKEDLIST::SINGLELINKEDLIST()
{
    count_element = 0;
    head = new Node;
    tail = head;
}

SINGLELINKEDLIST::~SINGLELINKEDLIST()
{
    delete head;
}

void SINGLELINKEDLIST::AddElement()
{
    tail->AddData();
    ++count_element;
    tail->next = new Node;
    tail = tail->next;

}
