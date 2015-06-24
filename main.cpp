//
//  main.cpp
//  cashregister
//
//  Created by Emilie Benoit on 2015-06-19.
//  Copyright (c) 2015 Emilie Benoit. All rights reserved.
//
//adding in this line of comment

#include <iostream>
#include <iomanip>
using namespace std;

void calcNumber_ofcoins(int&,int&,int&,int&,int&);


int main() {

    double item,total,payment,change;
    int coins,dollars,quarters,dimes,nickels,pennies;
    char answer = 'y';
    
    while (answer == 'y')
    {
        cout<<"enter price of first item:"<<endl;
        cin>>item;
        total += item;
        cout<<"do you have another item? y/n"<<endl;
        cin>>answer;
    }
    cout<<"Total due is "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Enter amount of payment"<<endl;
    cin>>payment;
    change=payment-total;
    
    dollars=change; //implicit conversion
    coins=change*100 - dollars;
    
    calcNumber_ofcoins(coins,quarters,dimes,nickels,pennies);
    
    cout<<"Your change is "<<fixed<<setprecision(2)<<change<<endl;
    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickels: "<<nickels<<endl;
    cout<<"Pennies: "<<pennies<<endl;
    
    return 0;
}



void calcNumber_ofcoins(int& change, int& quarters, int& dimes, int& nickels, int& pennies){
    
    quarters = change / 25;
    dimes = change % 25  / 10;
    nickels = change % 25 % 10 / 5;
    pennies = change % 25 % 10 % 5;
}

