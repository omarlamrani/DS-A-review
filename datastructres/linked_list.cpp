#include <iostream>

using namespace std;

struct Node{
    int data = NULL;
    struct Node *next = NULL;
};

class LinkedList{
private:
    Node *head, *tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;    
    }

    Node* getHead(){
        return head;
    }

    Node* getTail(){
        return tail;
    }

    void appendNode(Node *node){
        if (head == NULL && tail == NULL){
            head = node;
            tail = node;
        } else {
            tail = node;
            tail->next = node;
        } 
    
    }
    
};

int main(){
    Node *test;
    test->data = 4;

    cout << 5;

    LinkedList list;

    cout << "pre-append head: " << list.getHead();
    cout << "pre-append tail: " << list.getTail();

    list.appendNode(test);

    cout << "post-append head 1: " << list.getHead();
    cout << "post-append tail 1: " << list.getTail();

    Node *bob;
    bob->data = 8;

    list.appendNode(test);

    cout << "post-append head 2: " << list.getHead();
    cout << "post-append tail 2: " << list.getTail();

    return 0;
}