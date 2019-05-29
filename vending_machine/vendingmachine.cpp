#include "vendingmachine.h"
#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include "fooditeam.h"
#include "moneydrawer.h"
using namespace std;
 VendingMachine::VendingMachine(){
 q,h,f,t,e,o=0;
 }
VendingMachine::VendingMachine(fooditeam a[])
{
   cout<<"Welcome to Vending Machine"<<endl;
   cout<<"List of Available Item:"<<endl;
   cout<<setw(12)<<"list of food"<<"   |"<<setw(18)<<"No Available"<<"         |"<<setw(15)<<"Price"<<endl;
   cout<<"-----------------------------------------------------------------"<<endl;
   for(int i=0;i<10;i++){
        if(i>=9){
            cout<<i+1<<setw(11)<<a[i].getname()<<"   |"<<setw(18)<<a[i].getnum()<<"         |"<<setw(15)<<a[i].getprice()<<" LE"<<endl;
            continue;
            }

    cout<<i+1<<setw(12)<<a[i].getname()<<"   |"<<setw(18)<<a[i].getnum()<<"         |"<<setw(15)<<a[i].getprice()<<" LE"<<endl;
   }
      cout<<"-----------------------------------------------------------------"<<endl;

    }
 VendingMachine::VendingMachine(string b,MoneyDrawer &x,fooditeam y[]){
 cout<<"Please Enter Your Choice or E to end: ====>"; cin>>b;
 q=0;h=0;f=0;t=0;e=0;o=0;int w=1;int i;double u;double p;
 p=x.money;
 if(b=="E"){
    cout<<"your money is --> "<<x.money<<endl;
   x.money=0;
    w=0;}
 else if(b=="1"){
     i=0;}
 else if(b=="2"){
     i=1;}
 else if(b=="3"){
     i=2;}
 else if(b=="4"){
     i=3;}
 else if(b=="5"){
     i=4;}
 else if(b=="6"){
     i=5;}
 else if(b=="7"){
     i=6;}
 else if(b=="8"){
     i=7;}
 else if(b=="9"){
     i=8;}
 else if(b=="10"){
     i=9
     ;}
 else{
    cout<<"Error choice !!"<<endl; w=0;}
    if(i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9){
     if((y[i].num)>0){
        if(x.money>=y[i].getprice()){
            y[i].num--;
            x.money-=y[i].getprice();
            u=x.money;
            }
        else{
            cout<<"your money not enough you should put more money (minimum money you should put to get your choice "<<y[i].getprice()-x.money<<" )"<<endl;
            w=0;
        }

        }
      else{
        w=0;
        cout<<"your request not available"<<endl;


      }
    }
 while(w==1){
 if(x.money-20>=0){
    x.money-=20;
    e++;
    continue;
 }
else if(x.money-10>=0){
    x.money-=10;
    t++;
    continue;
 }
 else if(x.money-5>=0){
    x.money-=5;
    f++;
    continue;
 }
  else if(x.money-1>=0){
    x.money-=1;
    o++;
    continue;
 }
 else if(x.money-0.5>=0){
    x.money-=0.5;
    h++;
    continue;
 }
 else if(x.money-0.25>=0){
    x.money-=0.25;
    q++;
    continue;
 }

 else{
    x.money=0;
    break;}
 }
int l=0;
while (w==1){
if(e>=1){
    if(x.coin20>0){
       x.money+=20;
       x.coin20--;
       e--;
       l++;
       continue;}
       else
        e=0;
       }
else if(t>=1){
    if(x.coin10>0){
       x.money+=10;
       x.coin10--;
       t--;
       l++;
       continue;}
        else
          t=0;
       }
else if(f>=1){
    if(x.coin5>0){
       x.money+=5;
       x.coin5--;
       f--;
       l++;
       continue;}
       else
        f=0;
       }
else if(o>=1){
    if(x.coin1>0){
       x.money+=1;
       x.coin1--;
       o--;
       l++;
       continue;}
       else
        o=0;
       }
else if(h>=1){
    if(x.hcoin>0){
       x.money+=0.50;
       x.hcoin--;
       h--;
       l++;
       continue;}
       else
        h=0;
       }
else if(q>=1){
    if(x.qcoin>0){
       x.money+=0.25;
       x.qcoin--;
       q--;
       l++;
       continue;}
       else
        q=0;
       }

else{
    break;
       }}
 if(w==1){
 if(l=0)
        cout<<"no money available"<<endl;
 else if(u!=x.money){
                cout<<"this is your money because no coins available --> "<<p<<" LE please enter another coins !!"<<endl;
                x.money=0;
 }
 else
    cout<<"Here is one "<<y[i].name<<" and "<<x.money<<" L.E. in change"<<endl;
    cout<<"COINS AVAILABLE --> 0.25 : "<<x.qcoin<<" | 0.50 : "<<x.hcoin<<" | 1 : "<<x.coin1<<" | 5 : "<<x.coin5<<" | 10 : "<<x.coin10<<" | 20 : "<<x.coin20<<endl;//COINS
       }}
