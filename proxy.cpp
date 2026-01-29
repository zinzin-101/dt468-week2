#include "proxy.h"

Proxy::Proxy(int &n) : n(n){}

Proxy &Proxy::operator=(int value)
{
    if(value > 0){
        value = -value;
    }

    n = value;
    return *this;
}

Proxy::operator int() const
{
    return n;
}
