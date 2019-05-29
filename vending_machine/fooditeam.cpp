#include "fooditeam.h"
#include <iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

fooditeam::fooditeam()
{
    name="";
    num=0;
    price=0.0;
}
fooditeam::fooditeam(string a,int c,float b){
name=a;
num=c;
price=b;
}
