#include<bits/stdc++.h>
using namespace std;


class MinHeap{
public:
    vector<int> values;

    void bubbleUp(){
        int idx = this->values.size()-1;
        int element = this->values[idx];

        int parent, parentIdx;
        while(idx > 0){
            parentIdx = (idx-1)/2;
            parent = this->values[parentIdx];

            if(parent<=element) break;
            int temp = this->values[parentIdx];
            this->values[parentIdx] = element;
            this->values[idx] = temp;
            idx = parentIdx;
        }
    }

    void insertVal(int val){
        this->values.push_back(val);
        this->bubbleUp();
    }

    void siftDown(){
        int idx = 0;
        int element = this->values[idx];
        int length = this->values.size();


        while(true){
            int leftChild, rightChild;
            bool swapped = false;
            int swapVal;
            int leftChildIdx = (2*idx) + 1;
            int rightChildIdx = (2*idx) + 2;

            if(leftChildIdx < length){
                leftChild = this->values[leftChildIdx];
                if(leftChild < element) {
                    swapVal = leftChildIdx;
                    swapped = true;
                }
            }

            if(rightChildIdx < length){
                rightChild = this->values[rightChildIdx];
                if((!swapped && rightChild<element) || (swapped && rightChild < leftChild)){
                    swapVal = rightChildIdx;
                    swapped = true;
                }
            }

            if(!swapped) break;
            int temp = this->values[swapVal];
            this->values[swapVal] = element;
            this->values[idx] = temp;
            idx = swapVal;

        }
    }

    int pop(){
        int min_val = this->values[0];
        int last = this->values[this->values.size()-1];
        this->values.pop_back();
        if(this->values.size() > 0){
            this->values[0] = last;
            this->siftDown();
        }
        return min_val;
    }
};

int main(){

    MinHeap heap;
    heap.insertVal(5);
    heap.insertVal(2);
    heap.insertVal(11);
    heap.insertVal(1);
    heap.insertVal(7);


    cout<<heap.pop()<<endl;
    cout<<heap.pop()<<endl;
    cout<<heap.pop()<<endl;


    return 0;
}
