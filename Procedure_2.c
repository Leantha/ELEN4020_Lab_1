#include "Procedure_2.h"

void procedure2 (int *mem_add, int size)
{
	int percent = 10;
    int ones = numberFromPercent(size, percent);
     for(int i =0; i < ones; i++)
        { 
            setOnes(mem_add);
            mem_add++;
        }
}

