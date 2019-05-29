#ifndef MONEYDRAWER_H
#define MONEYDRAWER_H
#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class MoneyDrawer
{
    public:
    friend class VendingMachine;
      MoneyDrawer();
     MoneyDrawer(string &);

    private:
       double money;
       int qcoin,hcoin,coin1,coin5,coin10,coin20;
};

#endif // MONEYDRAWER_H
