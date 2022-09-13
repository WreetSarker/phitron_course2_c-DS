#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void traverse(Node* node){
    if(node->left != NULL){
        traverse(node->left);
    }
    cout<<node->data<<" ";
    if(node->right != NULL){
        traverse(node->right);
    }

}

class BST{
Node* root;
public:

    BST(){
        this->root = NULL;
    }

    Node* insertVal(int val){
        Node * newNode = new Node(val);
        if(this->root == NULL){
            this->root = newNode;
            return root;
        }else{
            Node* current = root;
            while(true){
                if(val == current->data){
                    return root;
                }else if(val < current->data){
                    if(current->left == NULL){
                        current->left = newNode;
                        return root;
                    }else{
                        current = current->left;
                    }
                }else if(val>current->data){
                    if(current->right == NULL){
                        current->right = newNode;
                        return root;
                    }else{
                        current = current->right;
                    }
                }
            }
        }
    }

    bool findVal(int val){
        bool found = false;
        Node* current = root;

        while(current != NULL && !found){
            if(current->data == val){
                return true;
            }else if(val < current->data){
                current = current->left;
            }else{
                current = current->right;
            }
        }
        return found;
    }

    void print(){

        Node* current = root;
        if(current == NULL) return;


        traverse(current);
    }


    void zizagtraversal()
{   Node* current = this->root;
    // if null then return
    if (!current)
        return;

    // declare two stacks
    stack<Node*> currentlevel;
    stack<Node*> nextlevel;

    // push the root
    currentlevel.push(current);

    // check if stack is empty
    bool lefttoright = true;
    while (!currentlevel.empty()) {

        // pop out of stack
        Node* temp = currentlevel.top();
        currentlevel.pop();

        // if not null
        if (temp) {

            // print the data in it
            cout << temp->data << " ";

            // store data according to current
            // order.
            if (lefttoright) {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }

        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
    }
}
};


int main(){

    BST bst;
    bst.insertVal(10);
    bst.insertVal(5);
    bst.insertVal(15);
    bst.insertVal(1);
    bst.insertVal(7);
    bst.insertVal(12);
    bst.insertVal(18);
    bst.insertVal(2);
    bst.insertVal(6);
    bst.insertVal(17);
    bst.insertVal(21);



    bst.print();

    cout<<endl;

    bst.zizagtraversal();



    return 0;
}
