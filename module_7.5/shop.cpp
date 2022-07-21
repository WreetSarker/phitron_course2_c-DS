#include<bits/stdc++.h>
using namespace std;

class Shop{
private:
    int total_income = 0;
public:
    int n;
    Shop(int N){
        this->n = N;
    }
    string productName[10];
    int productPrice[10];
    int productQuantity[10];

    void set_total_income(int amount){
        this->total_income += amount;
    }
    int get_total_income(){
        return this->total_income;
    }
};

void create_shop(Shop *myShop, int i){
    string prodName;
    int prodPrice, prodQuantity;
    cout<<"Product "<<i+1<<" Name: ";
    cin>>prodName;
    cout<<"Product "<<i+1<<" Price: ";
    cin>>prodPrice;
    cout<<"Product "<<i+1<<" Quantity: ";
    cin>>prodQuantity;

    myShop->productName[i] = prodName;
    myShop->productPrice[i] = prodPrice;
    myShop->productQuantity[i] = prodQuantity;
}

void display_shop(int n, Shop *myShop){
    cout<<"BUY PRODUCT"<<endl;
    int len = n;
    cout<<"Product Index\t\t";
    for(int i = 0; i < len; i++){
        cout<<i+1<<"\t";
    }
    cout<<endl;
    cout<<"Product Name\t\t";
    for(int i = 0; i < len; i++){
        cout<<myShop->productName[i]<<"\t";
    }
    cout<<endl;
    cout<<"Product Price\t\t";
    for(int i = 0; i < len; i++){
        cout<<myShop->productPrice[i]<<"\t";
    }
    cout<<endl;
    cout<<"Product Quantity\t\t";
    for(int i = 0; i < len; i++){
        cout<<myShop->productQuantity[i]<<"\t";
    }
    cout<<endl;
}

void buy_product(int n, Shop *myShop, int no, int quantity){
    int idx = no - 1;
    if(idx > n-1 || quantity > myShop->productQuantity[idx]){
        cout<<"Sorry Purchase not available!"<<endl;
    }else{
        myShop->productQuantity[idx] -= quantity;
        int val = myShop->productPrice[idx]*quantity;
        myShop->set_total_income(val);
        cout<<myShop->productName[idx]<<" bought "<<quantity<<" pieces successfully!"<<endl;
        cout<<"Your total income: "<<myShop->get_total_income()<<endl;
    }

}

int main(){
    int n;
    cout<<"Number of products: ";
    cin>>n;
    Shop *myShop = new Shop(n);
    for(int i = 0; i < n; i++){
        create_shop(myShop, i);
    }
    int prodNo, prodAm;
    while(true){
        display_shop(n, myShop);
        cout<<"Which product you want to buy from "<<1<<" to "<<n<<"?: ";
        cin>>prodNo;
        cout<<"What is the quantity of "<<myShop->productName[prodNo-1]<<" you want to buy?: ";
        cin>>prodAm;
        buy_product(n, myShop, prodNo, prodAm);
        if(prodNo > n || prodAm > myShop->productQuantity[prodNo-1]){
            break;
        }

    }




    return 0;
}
