#include "powerN.h"

PowerN::PowerN(Complex c):c(c){
}

Complex PowerN::PowerN(int n){
   if (n<0) 
      throw n;

   Complex result(1, 0);
   for(unsigned int i=1; i<n; i++)
   {
      result = result.multiply(c);
   }
   return result;
}

Complex PowerN::str()
{

   return c.str() + "^n";
}
