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

    void insertAtPos(int val,int pos){
        Node *newNode = new Node(val);
        Node *temp=head;
        for(int i=0;i<pos-1;i++){

            if(temp==NULL){
                cout<<"Invalid position\n";
                return;
            }

            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            ;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
         Node *newNode = new Node(val);
         if(head==NULL){
            head=tail=newNode;
         }
         else{
            tail->next=newNode;
            tail=newNode;
         }
    }
    void printList(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
};
int main()
{
    List ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.push_back(6);
    ll.push_back(7);
    ll.printList();
    ll.push_back(10);

    ll.insertAtPos(100,3);
    ll.printList();

    ll.insertAtPos(100,30);

    return 0;
}