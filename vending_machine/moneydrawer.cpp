#include "moneydrawer.h"
#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
MoneyDrawer::MoneyDrawer()
{
    money=0;
    qcoin=0;hcoin=0;coin1=0;coin10=0;coin5=0;coin20=0;
}
MoneyDrawer::MoneyDrawer(string &k)
{
    qcoin=10;hcoin=10;coin1=10;coin10=10;coin5=10;coin20=10;
    while(true){
    cout<<"Please deposit a coin or a bill in L.E. (1/4,1/2, 1, 5 or 10, 20, E to end or 0 to cancel) ====>";
    cin>>k;
    if(k=="1"){
        money+=1;
        coin1++;
        }
    else if(k=="0.25"){
        money+=0.25;
        qcoin++;
        }
    else if(k=="0.50"){
        money+=0.50;
        hcoin++;
        }
    else if(k=="5"){
        money+=5;
        coin5++;
        }
    else if(k=="10"){
        money+=10;
        coin10++;
        }
    else if(k=="20"){
        money+=20;
        coin20++;
        }
    else if(k=="E")
        break;
    else if(k=="0"){
        cout<<"the process of entering money is canceled and money returned = "<<money<<endl;
        money=0;
        break;
    }
    else
        cout<<"Invalid coin or bill !!"<<endl;

    }
}
