#include "negarr.h"
#include <iostream>
using namespace std;

string NegArr::print(){
    string val = "";
    for (int i:data){
        val = val + to_string(i) + " ";
    }
    return val;
}

Proxy NegArr::operator[](int pos)
{
    return Proxy(data[pos]);
}

//Implementation of overloaded  operator[] (int pos) 
