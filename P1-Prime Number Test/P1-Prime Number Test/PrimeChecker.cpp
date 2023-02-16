#include "PrimeChecker.h"

void PrimeChecker::run()
{
	int startingDivisor = 2 + id;
	int currentDivisor;

	
	for (int index = startingDivisor; index < givenNumber; index += interval)
	{
		currentDivisor = (interval * index) + (2 + id);
		if (givenNumber % currentDivisor == 0)
		{
			isPrime = false;
			break;
		}
	}

	isFinished = true;

}