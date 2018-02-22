#include "Procedure_3.h"

void procedure3(int *ptr_A, int size, int dimensions, int *bounds)
{
	//printSeries(ptr_A, size, false);
	//int *ptr = ptr_A;
	
	//printf("aw %p\n", (void *) ptr_A);
	//printSeries(ptr, size, false);
	int percent = 5;
	int numberOfElements = numberFromPercent(size, percent);
	int range = size-numberOfElements-1;
	int linearIndex = randomElementinRange(range);
	bool indices =true;
	int *index= NULL;
	//printSeries(ptr_A, size, false);
	for (int i=0; i <linearIndex;i++)
	{ptr_A++;} //shifting pointer
	
	for (int j=0; j < numberOfElements; j++)
	{
		//printf("%p\n", (void *) ptr_A); //print address
		index = calculateIndex(bounds, dimensions, linearIndex, size);
		printSeries(index, dimensions, indices);
		printSeries(ptr_A, 1, false);
		printf("\n");
		ptr_A++;
		linearIndex++;
		deleteArray(index);
	}
}

