#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include <string>



Individual * execute(Individual * indPtr, Mutator * mPtr, int k)
{


	*indPtr = mPtr->mutate(*indPtr, k);

	return indPtr;
}


int main()
{


	std::string binarystr1;
	std::string binarystr2;
	int k1 =0;
	int k2 =0;

	std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;

	


	Individual * Larry = new Individual(binarystr1);
	Mutator * Lebola = new BitFlip();
	Individual * lebolarry = execute (Larry, Lebola, k1);

	


	Individual * Barry = new Individual(binarystr2);
	Mutator * bola = new Rearrange();
	Individual * lebolobarry = execute (Barry, bola, k2);

	int MaxOnes = lebolobarry->getMaxOnes(); 

	std::cout << lebolarry->getString() << " " << lebolobarry->getString() << " " << MaxOnes << std::endl;






	// Individual Barry(7);
	// Individual Larry("01011010");

	// std::cout << Larry.getBit(0) << std::endl;

	// std::cout << "getstring: " <<Barry.getString() << " : " <<Larry.getString() << std::endl;
	// std::cout << "Getbit:    " <<Barry.getBit(3) << " : " <<Larry.getBit(3) << std::endl;
	// Barry.flipBit(3);
	// Larry.flipBit(3);
	// std::cout << "getstring: "<<Barry.getString() << " : " <<Larry.getString() << std::endl;
	// std::cout << "length:    " <<Barry.getLength() << " : " <<Larry.getLength() << std::endl;
	// std::cout << "MaxOnes:   " <<Barry.getMaxOnes() << " : " <<Larry.getMaxOnes() << std::endl;
	// return 0;

}