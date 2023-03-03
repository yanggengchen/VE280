#include "complex.h"
#ifdef LINEARFUNCTION_H
class LinearFunction {
	//Overview:Linear Function
	Complex a;
	Complex b;

public:
	LinearFunction(Complex& a, Complex& b);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	Complex evaluate(Complex& x);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	std::string str();
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
};
#endif // LINEARFUNCTION_H