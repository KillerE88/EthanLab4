#ifndef QUEUE_H
#define QUEUE_H
#include "Itemtype.h"

using namespace std;

struct node {
    int data;
    struct node* next;
};

class Queue
{
public:
    Queue();
    ~Queue();
    void Insert();
    void Delete();
    void Display();
private
};