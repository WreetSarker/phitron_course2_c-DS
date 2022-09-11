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


Node* inorderSuccessor(Node* root){
    Node* current = root;

    while(current->left!= NULL){
        current = current->left;
    }
    return current;
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

//    Node* deleteVal(int val){
//        Node* current = root;
//        if(current == NULL){
//            cout<<"Empty BST"<<endl;
//            return current;
//        }
//        if(!findVal(val)) return current;
//
//        while(true){
//            if(val == current->data){
//                break;
//            }else if(val < current->data){
//                current =  current->left;
//            }else{
//                current = current->right;
//            }
//        }
//
//        if(current->left == NULL && current->right == NULL){
//            current = NULL;
//            return root;
//        }else if(current->left != NULL && current->right != NULL){
//            Node* minVal = minValue(current->right);
//            current = minVal;
//            return root;
//        }else{
//            if(current->left != NULL){
//                current = current->left;
//                return root;
//            }else{
//                current = current->right;
//                return root;
//            }
//        }
//
//    }

};

Node* deleteVal(Node* root, int val){

    if(val < root->data){
        root->left = deleteVal(root->left, val);
    }else if(val > root->data){
        root->right = deleteVal(root->right, val);
    }else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }else{
            Node* temp = inorderSuccessor(root->right);
            root->data = temp->data;
            root->right = deleteVal(root->right, temp->data);
        }
        return root;
    }
}

int main(){

    BST bst;
    bst.insertVal(10);
    bst.insertVal(5);
    bst.insertVal(15);
    bst.insertVal(1);
    bst.insertVal(3);
    bst.insertVal(12);
    Node* rt = bst.insertVal(18);
    bst.print();
    cout<<endl;
    deleteVal(rt, 10);
    bst.print();
    cout<<endl;
    cout<<bst.findVal(12);



    return 0;
}
