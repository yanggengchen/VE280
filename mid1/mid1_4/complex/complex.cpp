#include <sstream>
#include "complex.h"

Complex::Complex(double x, double y):x(x), y(y){
}

Complex::Complex(Complex &c):x(c.x), y(c.y){
}

double Complex::getX()
{
   return x;
}

double Complex::getY()
{
   return this->y;
}

Complex Complex::add(Complex &c){

   return Complex(x+c.x, y+c.y);
}

void Complex::multiply(Complex &c){
   return Complex(x*c.x - y*c.y, x*c.y + y*c.x);
}

std::string toString(){
   ostringstream is; 
   is << x << " + " << y << 'i';
   return is.str();
}
