#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class LinkedList{
    Node* head;
    int length;
public:
    LinkedList(){
        head = NULL;
        length = 0;
    }

    void insertNode(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            this->length++;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        this->length++;
    }
    int getLength(){
        return this->length;
    }

    Node* getHead(){
        return head;
    }



};

void printList(Node* &head){
        Node* temp = head;
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->data;
            if(temp->next != NULL){
                cout<<"->";
            }
            temp = temp->next;
        }
        cout<<endl;
    }

Node* reverse (Node *head, int k)
    {
        if(!head)
         return NULL;

        Node* current = head;
        Node* next = NULL;
        Node* prev = NULL;
        int count = 0;

        while(current!=NULL && count<k)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        if(next!=NULL)
           head->next = reverse(reverse(next,k), k);

        return prev;
    }

int main(){

    LinkedList lst;

    int n, val;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>val;
        lst.insertNode(val);
    }

    int k;
    cin>>k;
    Node* getHead = lst.getHead();
    Node* rev = reverse(getHead, k);
    printList(rev);
}
