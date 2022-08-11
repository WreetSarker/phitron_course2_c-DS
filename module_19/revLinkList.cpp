#include<bits/stdc++.h>
using namespace std;

struct Test{
    int position[1000];
};

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

    void insertAtHead(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            this->length++;
            return;
        }
        Node* temp = head;
        head =  newNode;
        head->next = temp;
        this->length++;
    }

    void printList(){
        Node* temp = head;
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int getLength(){
        return this->length;
    }

    void insertAtPosition(int pos, int val){
        if(pos> this->getLength() || pos< 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos == 1){
            this->insertAtHead(val);
            return;
        }else if(pos == this->getLength()){
            this->insertNode(val);
            return;
        }
        int count = 0;
        Node* newNode = new Node(val);
        Node *temp = head;
        while(count != pos-2){
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        this->length++;
    }

    int findPosition(int val){
        int count = 1;
        Node* temp = head;
        if(head ==NULL){
            cout<<"Value not found!"<<endl;
            return -1;
        }
        while(temp->data!= val){
            temp = temp->next;
            count++;
            if(temp == NULL){
                return -1;
            }
        }
        return count;
    }

    void findPositionDuplicate(int val){
        int count = 1;
        Node* temp = head;
        if(head == NULL){
            cout<<"No value in the list"<<endl;
            return;
        }
        while(temp != NULL){
            if(temp->data == val){
                cout<<"Found at position: "<<count<<" ";
            }
            temp = temp->next;
            count++;
        }
        cout<<endl;
    }

    Test findPositionReturn(int val){
        Node* temp = head;
        Test T;
        int k = 1;
        int count = 1;

        while(temp != NULL){
            if(temp->data == val){
                T.position[k] = count;
                k++;
            }
            temp = temp->next;
            count++;
        }
        T.position[0] = k;
        return T;
    }

    void insertAfterValue(int listValue, int insertValue){
        int pos = this->findPosition(listValue);
        if(pos > -1){
            this->insertAtPosition(pos+1, insertValue);
        }else{
            cout<<"No such value exist!"<<endl;
        }
    }

    void deleteHead(){
        Node* temp = head;
        head = temp->next;
        delete temp;
        this->length--;
    }

    void deleteTail(){
        Node* temp = head;
        if(this->getLength()>1){
            while(temp->next->next != NULL){
            temp = temp->next;
            }
        }else{
            head = NULL;
            delete temp;
            this->length--;
            return;
        }

        Node* delNode = temp->next;
        temp->next = NULL;
        delete delNode;
        this->length--;
    }

    void deleteFromPosition(int pos){
        if(pos<1 || pos> this->getLength()){
            cout<<"Index out of range!"<<endl;
            return;
        }
        int count = 1;
        Node* temp = head;
        if(pos == 1){
            this->deleteHead();
            return;
        }else if(pos == this->getLength()){
            this->deleteTail();
            return;
        }

        while(count != pos-1){
            temp = temp->next;
            count++;
        }
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        this->length--;
        return;

    }

    void deleteByValue(int val){
        if(head == NULL){
            cout<<"List is empty!"<<endl;
            return;
        }
        if(head->data == val){
            this->deleteHead();
            return;
        }
        Node* temp = head;
        while(temp->next->data != val){
            temp = temp->next;
            if(temp->next == NULL && temp->data != val){
                cout<<"Value not found!"<<endl;
                return;
            }
        }
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        this->length--;
        return;
    }

    void reverseNonRecursive(){
        if(this->getLength() == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = head->next;

        while(true){
            current->next = prev;
            prev = current;
            current = nextNode;
            if(current == NULL) break;
            nextNode = nextNode->next;
        }
        head = prev;
        this->printList();

    }
//    Node* reverseRecursive(){
//        if(this->getLength() == 0){
//            cout<<"Empty list"<<endl;
//            return NULL;
//        }
//        if(head->next == NULL){
//            return head;
//        }
//        Node* newHead = head->next;
//        head->next = NULL;
//
//        return newHead->next;
//    }
};

int main(){

    LinkedList lst;
    lst.insertNode(1);
    lst.insertNode(2);
    lst.insertAtHead(0);
    lst.insertNode(5);
    lst.insertAtHead(-1);
    lst.printList();
    lst.insertAtPosition(1, 21);
    lst.insertAtPosition(1, 21);
    lst.insertAtPosition(4, 34);
    lst.printList();
    lst.insertAtPosition(7, 55);
    lst.printList();



    lst.insertAfterValue(100, 31);
    cout<<"Length: "<<lst.getLength()<<endl;
    lst.printList();
    cout<<"Length: "<<lst.getLength()<<endl;
    lst.reverseNonRecursive();
    lst.printList();
    lst.reverseNonRecursive();
}
