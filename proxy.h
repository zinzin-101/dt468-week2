#pragma once
class Proxy{
   //Implement Proxy  
   private:
      int& n;
   public:
      Proxy(int& n);
      Proxy& operator=(int value);
      operator int() const;
};
