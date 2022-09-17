#ifndef REARRANGE_H
#define REARRANGE_H

#include <string>
#include "Individual.h"
#include "Mutator.h"

class Rearrange : public Mutator 
{
private: 
	virtual Individual mutate(Individual Ind, int k);
public:


};
#endif
