#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include "vendingmachine.h"
#include "fooditeam.h"
#include"moneydrawer.h"

using namespace std;

int main()
{
    //MOHAMED RAGAB KAMAL ID: 20160202 -- MOHAMED AMIN ID:20160194
    string m,r;
   fooditeam x[10]={fooditeam("Chocolate",10,3),fooditeam("Cola",10,12.5),fooditeam("Pepsi",10,11),
fooditeam("Cake",10,3.5),fooditeam("Chipsy",10,7),fooditeam("Doritos",10,2),fooditeam("Samba",10,1.5),fooditeam("Oreo",10,4),fooditeam("moro",10,5)
,fooditeam("Galaxy",10,3.5)};
while(true){
VendingMachine n (x);
cout<<endl;
MoneyDrawer o(m);
if(m=="E"){
    VendingMachine n (x);
    cout<<endl;
    VendingMachine w (r,o,x);
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    }
else if (m=="0"){
    continue;
}}
    return 0;
}
