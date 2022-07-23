#include<bits/stdc++.h>
using namespace std;

class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    float total_tax = 0;

    void set_total_tax(float val){
        this->total_tax += val;
    }
    float show_total_tax(){
        return this->total_tax;
    }

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
    cout<<"--------------------MAKE BILL-------------------"<<endl;
    cout<<"Item Code\t\t"<<"Item Name\t\t"<<"Item Price"<<endl;
    for(int i = 0; i < len; i++){
        cout<<myRestaurant->food_item_codes[i]<<"\t\t"<<myRestaurant->food_item_names[i]<<"\t\t"<<myRestaurant->food_item_prices[i]<<endl;
    }
    cout<<endl;
}

void show_summary(Restaurant *myRestaurant,int n, int itemCodes[], int itemQuantities[], int tableNo){
    int netTotal = 0;
    float tax = 0 ;
    cout<<"Table No: "<<tableNo<<endl;
    cout<<"Item Code\t\t"<<"Item Name\t\t"<<"Item Price\t\t"<<"Item Quantity\t\t"<<"Total Price"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 12; j++){
            if(myRestaurant->food_item_codes[j] == itemCodes[i]){
                int total = 0;
                int iCode = myRestaurant->food_item_codes[j];
                string iName = myRestaurant->food_item_names[j];
                int iPrice = myRestaurant->food_item_prices[j];
                total = iPrice * itemQuantities[i];
                netTotal += total;
                cout<<iCode<<"\t\t"<<iName<<"\t\t"<<iPrice<<"\t\t\t\t"<<itemQuantities[i]<<"\t\t"<<total<<endl;
            }
        }
    }
    tax = netTotal*0.05;
    myRestaurant->set_total_tax(tax);
    cout<<"TAX"<<"\t\t\t\t\t\t\t\t"<<tax<<endl<<endl;
    cout<<"NET TOTAL\t\t\t\t\t\t"<<float(netTotal)+tax<<endl;

}

bool validate_code(Restaurant *myRestaurant, int code){
    int ct = 0;
    for(int i = 0; i < 12; i++){
        if(myRestaurant->food_item_codes[i] == code){
            ct = 1;
        }
    }
    if(ct>0){
        return 1;
    }else{
        return 0;
    }
}


int main(){

    int n;
    cout<<"Enter Number of food items: ";
    cin>>n;

    Restaurant *myRestaurant = new Restaurant();
    build_restaurant(n, myRestaurant);
    show_restaurant(n, myRestaurant);

    Flag:
        cin.ignore(INT_MAX,'\n');
        int tableNo, noItems, itemCode;
        int itemCodes[noItems];
        int itemQuantities[noItems];
        cout<<"Enter Table No: ";
        cin>>tableNo;
        cout<<"Enter number of items: ";
        cin>>noItems;
        for(int i = 0; i < noItems; i++){
            cout<<"Enter item "<<i+1<<" code: ";
            cin>>itemCode;
            if(validate_code(myRestaurant, itemCode)){
                itemCodes[i] = itemCode;
            }else{
                cout<<"This is not a valid item code! Please enter your details again."<<endl;
                goto Flag;
            }
            cout<<"Enter item "<<i+1<<" quantity: ";
            cin>>itemQuantities[i];
        }
        cout<<"-------------------------BILL SUMMARY-------------------------"<<endl;
        show_summary(myRestaurant,noItems, itemCodes, itemQuantities, tableNo);
        goto Flag;



    return 0;
}
