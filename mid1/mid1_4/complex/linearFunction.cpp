#include <iostream>
#include <sstream>
#include "linearFunction.h"

LinearFunction::LinearFunction(Complex &a, Complex &b):a(a), b(b){
}

Complex LinearFunction::evaluate(Complex &x){
   return a.multiply(x).add(b);
}

std::string LinearFunction::str(){
   osstringstream os;
   os << a.toString() << "x + " << b.toString();
   return os.str();
}
