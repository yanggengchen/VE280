#include <iostream>
#include <cmath>
#include "recursive.h"
using namespace std;

list_t selectMod(list_t IElements, int mod) 
//REQUIRES: mod is a positive number
//EFFECTS: returns all the elements of IElements (in the same order)
//whose indices i are such that i modulo mod == 0
	{
		list_t value, result;
		value = list_make();
		result = list_make();
		if (list_isEmpty(IElements)) return IElements;
		if (list_first(IElements) % mod == 0) {
			int first = list_first(IElements);
			IElements = list_rest(IElements);
			value = list_make(first, selectMod(IElements, mod));
		}
		else {
			IElements = list_rest(IElements);
			value = selectMod(IElements, mod);
		}
		return result;
	}

	