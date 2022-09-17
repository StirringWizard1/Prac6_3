#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include <string>
#include <iostream>

Individual Rearrange::mutate(Individual Ind, int k)
{
	std::string Str1 = Ind.getString();
	k = k%Ind.getLength()-2; // gets position in array

	if (k < 0)
	{
		return Str1;
	}


	std::string Str2 = Str1.substr (0,k+1); //stores first k elements
	Str1.erase(0,k+1);
	Str1= Str1 + Str2;

	
	return Str1;

}