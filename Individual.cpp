	#include "Individual.h"
	#include <string>
	#include <ctype.h>
#include <iostream>

Individual::Individual(int length)
	{
		for (int i = 0; i <= length-1; i++)
		{
			Binary= Binary + '0';
		}
	}

Individual::Individual(std::string binary) 
	{


		Binary = binary; 
	}

	std::string Individual::getString()
	{
		return Binary; 
	}

int Individual::getBit(int pos)
	{
		if (pos > Binary.length() || pos <= 0)
		{
			return -1;
		}
		
		if(Binary[pos-1]== '1')
		{
			return 1;
		}
	
			return 0;
		

		
	}

void Individual::flipBit(int pos)
	{
		if(Binary[pos-1]== '1')
		{
			Binary[pos-1]= '0';
		}
		else
		{
			Binary[pos-1]= '1';
		}
	}

int Individual::getMaxOnes()
	{
		int cMaxOnes = 0;
		int MaxOnes = 0;

		for(int i=0; i <= Binary.length(); i++)
		{
			if (Binary[i]== '1')
			{
				cMaxOnes++;
			}
			else 
			{
				cMaxOnes = 0;
			}
			if (cMaxOnes >= MaxOnes )
			{
				MaxOnes = cMaxOnes; 
			}

		}
		return MaxOnes; 

	}

int	Individual::getLength()
	{
		return Binary.length();
	}

