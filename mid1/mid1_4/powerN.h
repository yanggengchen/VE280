#include "complex.h"
#ifdef POWERN_H
class PowerN
{
	Complex c;

public:

	PowerN(Complex& c);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	Complex evaluate(int n);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	std::string str();
};

#endif // POWERN_H