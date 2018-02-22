#include "Procedure_1.h"
#include "Procedure_2.h"
#include "Procedure_3.h"

int main()
{
/*-----------------------------------------------------*/
// 	Input 1: A[100][100]
/*-----------------------------------------------------*/
	int boundaries1[] = {100,100};
	int dimensions1 = sizeof(boundaries1)/ sizeof(int);
 
	//dynamic array allocation
	int A_size1  = sizeOfArray (boundaries1, dimensions1);
	int *ptr_A1 = NULL;
	allocateArray(&ptr_A1, A_size1);

	procedure1(ptr_A1, A_size1); 
	procedure2(ptr_A1, A_size1); 
	procedure3(ptr_A1, A_size1, dimensions1, boundaries1);

	deleteArray(ptr_A1);
/*-----------------------------------------------------*/
// 	Input 2: A[100][100][100]
/*-----------------------------------------------------*/
	int boundaries2[] = {100,100,100};
	int dimensions2 = sizeof(boundaries1)/ sizeof(int);
 
	//dynamic array allocation
	int A_size2  = sizeOfArray (boundaries2, dimensions2);
	int *ptr_A2 = NULL;
	allocateArray(&ptr_A2, A_size2);

	procedure1(ptr_A2, A_size2); 
	procedure2(ptr_A2, A_size2); 
	procedure3(ptr_A2, A_size2, dimensions2, boundaries2);

	deleteArray(ptr_A2);
/*-----------------------------------------------------*/
// 	Input 3: A[50][50][50][50]
/*-----------------------------------------------------*/
	int boundaries3[] = {50,50,50,50};
	int dimensions3 = sizeof(boundaries3)/ sizeof(int);
 
	//dynamic array allocation
	int A_size3  = sizeOfArray (boundaries3, dimensions3);
	int *ptr_A3 = NULL;
	allocateArray(&ptr_A3, A_size3);

	procedure1(ptr_A3, A_size3); 
	procedure2(ptr_A3, A_size3); 
	procedure3(ptr_A3, A_size3, dimensions3, boundaries3);

	deleteArray(ptr_A3);
/*-----------------------------------------------------*/
// 	Input 4: A[20][20][20][20][20]
/*-----------------------------------------------------*/
	int boundaries4[] = {20,20,20,20,20};
	int dimensions4 = sizeof(boundaries4)/ sizeof(int);
 
	//dynamic array allocation
	int A_size4  = sizeOfArray (boundaries4, dimensions4);
	int *ptr_A4 = NULL;
	allocateArray(&ptr_A4, A_size4);

	procedure1(ptr_A4, A_size4); 
	procedure2(ptr_A4, A_size4); 
	procedure3(ptr_A4, A_size4, dimensions4, boundaries4);

	deleteArray(ptr_A4);

	return 0;
}

