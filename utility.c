#include "utility.h"

int numberFromPercent(int size, int percentage)
{	
	int result = size*percentage/100;
	return result;	
}

int sizeOfArray(int *bounds, int dimensions)
{
	int result = 1;
	for (int i = 0; i < dimensions; i++)
	{	
		result = result * (*bounds);
		bounds++; 
	}
	return result;
}

int randomElementinRange(int range)
{
	srand(time(0));
	int random = rand()%(range+1);
	
	return random;
}

int *calculateIndex(int *bounds, int dimensions, int linearIndex, int A_size)
{
	int *indices = NULL;
	allocateArray(&indices, dimensions);
	int *Ni = bounds;
	int *popIndices = indices;
	int *Nj = bounds;
	int d = dimensions-1;
	for (int i = 0; i < (dimensions); i++)
	{	//calculating product over a set
		int piproduct = 1;
		Nj = Ni;
		Nj++;
		for (int j = 0; j < d; j++)
		{	
			piproduct = piproduct * (*Nj);
			Nj++;
		}
		int calc = (linearIndex/piproduct) % (*Ni);
		*popIndices = calc;
		popIndices++;
		Ni++;
		d=d-1;
	}
	return indices;//remember to free once done
}

void setOnes(int *ptr_A) 
{	*ptr_A = 1; 	}

void setZeros(int *ptr_A)
{
	*ptr_A = 0;
}


void allocateArray(int **ptr_p_A ,int size)
{
 	*ptr_p_A = (int*)calloc(size, sizeof(int)); //	initiated to zero by default
}

void deleteArray(int *ptr_A)
{
	free(ptr_A);
	ptr_A=NULL;
}

void printSeries(int *ptr, int size, bool index)
{
	for (int i = 0; i<size;i++)
	{
		if (index == true)
		{ 	printf("[%d] ", *ptr); }
		else 
		{	printf("%d ", *ptr);	}
		ptr++;
	}
}

