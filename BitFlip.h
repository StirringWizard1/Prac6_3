#ifndef BITFLIP_H
#define BITFLIP_H

#include <string>
#include "Individual.h"
#include "Mutator.h"

class BitFlip : public Mutator 
{
private: 
	virtual Individual mutate(Individual Ind, int k);
public:


};
#endif
