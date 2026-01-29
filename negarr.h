#pragma once
#include "proxy.h"
#include <string>
using namespace std;

class NegArr{
  int data[5] = {-1,-1,-1,-1,-1};
  public:
    string print();
    //Overload  operator[] (int pos) 
    //for Proxy Operator[]
    Proxy operator[](int pos);
};
