#include "Procedure_1.h"

void procedure1(int *ptr_A, int size)
{
	int count = 0;
	while (count < size)
	{
		setZeros(ptr_A);
		//printf("%d ", *ptr_A);
		count ++;
		ptr_A++;
	}	
}

