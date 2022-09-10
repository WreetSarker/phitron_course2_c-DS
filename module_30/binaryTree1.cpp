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

void spacePrint(int level){
    for(int i = 0; i < level; i++){
        cout<<"   ";
    }
}

void printTree(Node* root, int level){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<endl;
        return;
    }else{
        cout<<endl;
        spacePrint(level);
        cout<<"Root: "<<root->data<<endl;
    }

    if(root->left != NULL){
        spacePrint(level);
        cout<<"Left: ";
        printTree(root->left, level + 1);
    }

    if(root->right != NULL){
        spacePrint(level);
        cout<<"Right: ";
        printTree(root->right, level + 1);
    }

}


/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/

int main(){


    int n;
    cin>>n;

    Node* allNodes[n];
    for(int i = 0; i <n; i++){
        allNodes[i] = new Node(-1);
    }

    for(int i = 0; i < n; i++){
        int val, leftC, rightC;
        cin>>val>>leftC>>rightC;

        allNodes[i]->data = val;
        if(leftC != -1){
            allNodes[i]->left = allNodes[leftC];
        }

        if(rightC != -1){
            allNodes[i]->right = allNodes[rightC];
        }
    }

    printTree(allNodes[0], 0);


    return 0;
}
