#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include <string>
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator 
{
private: 
	double Probability;
	virtual Individual mutate(Individual Ind, int k);
public:
	BitFlipProb(double PropIn);


};
#endif
