#ifndef FOODITEAM_H
#define FOODITEAM_H
#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class fooditeam
{
    public:
        fooditeam();
        friend class VendingMachine;
        fooditeam(string a,int c=0,float b=0);
        string getname()const{return name;};
        int getnum ()const{return num;};
        float getprice () const{return price;};

private:
    string name;//name of food
    int num; //number of food
    float price;//price of food

};

#endif // FOODITEAM_H
