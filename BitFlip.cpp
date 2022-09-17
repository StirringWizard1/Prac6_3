#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include <string>
#include <iostream>

Individual BitFlip::mutate(Individual Ind, int k)
{
			
	if (k == Ind.getLength())
	{
		k = Ind.getLength();
	}
	else 
	{
		k = k%(Ind.getLength());
	}
	Ind.flipBit(k); 

	return Ind;
}