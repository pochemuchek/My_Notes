#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include <string>

struct Data{

    int Age;

    std::string Name;
    std::string Surename;

    Data(int age, std::string surename, std::string name);
    ~Data();
};

struct Node{
    Data* data;

    int num_node;
    static int all_nodes;
    struct Node* next;

    Node();
    ~Node();

    void AddData();
};

class SINGLELINKEDLIST
{
private:
    Node* node;

    struct Node* head;
    struct Node* tail;

    int count_element;
    ~SINGLELINKEDLIST();

public:
    SINGLELINKEDLIST();
    void ShowElements(Node *element);
    void AddElement();//(Data* data)
};

#endif // SINGLELINKEDLIST_H
