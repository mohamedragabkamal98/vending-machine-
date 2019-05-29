#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H
#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include "fooditeam.h"
#include"moneydrawer.h"

class VendingMachine
{
 public:
    friend class MoneyDrawer;
    friend class fooditeam;
    VendingMachine();
    VendingMachine(fooditeam a[]);
    VendingMachine(string,MoneyDrawer &x,fooditeam y[]);
 private:
     int q,h,f,t,e,o;

};

#endif // VENDINGMACHINE_H
