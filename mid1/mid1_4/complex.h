#ifdef COMPLEX_H
class Complex {
	//Overview:
	double x;
	double y;
public:
	Complex(double x = 0, double y = 0);
	Complex(Complex& c);

	double getX();
	double getY();

	Complex add(Complex& c);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	Complex multiply(Complex& c);
	//REQUIRES:
	//MODIFIES:
	//EFFECTS:
	std::string toString();
};
#endif // COMPLEX_H

