#include<bits/stdc++.h>
using namespace std;

class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;


};

void build_restaurant(int n, Restaurant *myRestaurant){
    int tot = n;
    int code, price;
    string name;
    for(int i = 0; i < n; i++){
        cout<<"Food item "<<i+1<<" code: ";
        cin>>code;
        cout<<"Food item "<<i+1<<" name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Food item "<<i+1<<" price: ";
        cin>>price;
        myRestaurant->food_item_codes[i] = code;
        myRestaurant->food_item_names[i] = name;
        myRestaurant->food_item_prices[i] = price;
    }
}

void show_restaurant(int n, Restaurant *myRestaurant){
    int len = n;
    cout<<"MAKE BILL"<<endl;
    cout<<"Item Code\t\t"<<"Item Name\t\t"<<"Item Price"<<endl;
    for(int i = 0; i < len; i++){
        cout<<myRestaurant->food_item_codes[i]<<"\t\t"<<myRestaurant->food_item_names[i]<<"\t\t"<<myRestaurant->food_item_prices[i]<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter Number of food items: ";
    cin>>n;

    Restaurant *myRestaurant = new Restaurant();
    build_restaurant(n, myRestaurant);
    show_restaurant(n, myRestaurant);





    return 0;
}
