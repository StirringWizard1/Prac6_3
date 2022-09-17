#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"
#include <string>
#include <iostream>

BitFlipProb::BitFlipProb(double ProbIn)
{ Probability = ProbIn; }

Individual BitFlipProb::mutate(Individual Ind, int k)
{
		std::cout << "BI" << std::endl;

	double RandomProb; 

	for (int i = 0; i < Ind.getLength(); i++)
	{
		RandomProb = rand();
		if (RandomProb <= Probability)
		{
			Ind.flipBit(i);
		}
	} 

	return Ind;
}