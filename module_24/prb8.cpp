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

    int getLength(){
        return this->length;
    }


    void insertAtTail(int data){
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


    void printList(){
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



    void skipAndDel(int M, int N)
{
    Node *curr = head;
    Node* t;
    int count;

    while (curr)
    {
        for (count = 1; count < M &&
                curr!= NULL; count++)
            curr = curr->next;

        if (curr == NULL)
            return;

        t = curr->next;
        for (count = 1; count<=N && t!= NULL; count++)
        {
            Node *temp = t;
            t = t->next;
            free(temp);
        }

        curr->next = t;

        curr = t;
    }
}


};

int main(){

    LinkedList lst;
    int n, M, N, val;
    cin>>n>>M>>N;
    for(int i = 0; i < n; i++){
        cin>>val;
        lst.insertAtTail(val);
    }
    lst.skipAndDel(M, N);

    lst.printList();

}
