#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string acc_holder, string addr, int age, string pass){
        this->account_holder = acc_holder;
        this->address = addr;
        this->age = age;
        this->password = pass;
        this->balance = 0;
        this->account_number = rand()%100000000;
        cout<<"Your account number is: "<<account_number<<endl;
    }

    int show_balance(string pass){
        if(pass == this->password){
            return this->balance;
        }else{
            return -1;
        }
    }

    void add_money(string password, int balance){
        if(this->password == password){
            this->balance += balance;
            cout<<"Add money successful"<<endl;
        }else{
            cout<<"Password didn't match!"<<endl;
        }
    }

    void deposit_money(string password, int amount){
        if(this->password == password){
            this->balance -= amount;
            cout<<"Deposit money successful!"<<endl;
        }else{
            cout<<"Wrong password!"<<endl;
        }
    }
};

class MyCash{
protected:
    int balance;
private:
    string password = "123";
public:
    MyCash(){
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount){
        if(this->password == password){
            this->balance += amount;
            myAccount->deposit_money(password, amount);
            cout<<"Add money from bank successful!"<<endl;
        }else{
            cout<<"Bank and App password didn't match!"<<endl;
        }
    }
    void show_balance(string password,BankAccount *myAccount){
        if(this->password == password){
            cout<<"Your app balance is: "<<this->balance<<endl;
            cout<<"Your bank balance is: "<<myAccount->show_balance("123")<<endl;
        }else{
            cout<<"Password didn't match"<<endl;
        }
    }

};

BankAccount* create_account(){
    string account_holder, address, password;
    int age;
    cout<<"CREATE ACCOUNT"<<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
    return myAccount;
}

void add_money(BankAccount *myAccount){
    string password;
    int balance;
    cout<<"ADD MONEY"<<endl;
    cin>>password>>balance;
    myAccount->add_money(password, balance);
    cout<<"Your Account Balance is: "<<myAccount->show_balance("123")<<endl;
}

void deposit_money(BankAccount *myAccount){
    string password;
    int amount;
    cout<<"DEPOSTI MONEY"<<endl;
    cin>>password>>amount;
    myAccount->deposit_money(password, amount);
    cout<<"Your account balance is: "<<myAccount->show_balance("123")<<endl;
}

void add_money_from_bank(BankAccount *myAccount, MyCash *myCash){
    string password;
    int amount;
    cout<<"ADD MONEY FROM BANK ACCOUNT"<<endl;
    cin>>password>>amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    myCash->show_balance("123", myAccount);

}

int main(){

    BankAccount *myAccount = create_account();
    add_money(myAccount);
    deposit_money(myAccount);
    MyCash *myCash = new MyCash();
    add_money_from_bank(myAccount, myCash);
    return 0;
}
