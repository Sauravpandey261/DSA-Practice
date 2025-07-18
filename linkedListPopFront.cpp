#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{

    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
     void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node *newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"List is empty\n";
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
  
    void pop_back(){
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // Case: Only one element
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
}
    void reverseLL(){
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }

   
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.pop_front();
    ll.pop_front();

    ll.pop_back();
    ll.pop_back();
    ll.pop_back();
    ll.pop_back();
    ll.pop_back();


    ll.printLL();

    ll.reverseLL();
    ll.printLL();

    return 0;
}