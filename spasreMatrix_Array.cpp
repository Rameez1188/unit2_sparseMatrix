// C++ program for Sparse Matrix Representation
// using Array
#include <iostream>
using namespace std;

int main()
{
	
	int sparseMatrix[4][5] =
	{
		{0 , 0 , 3 , 0 , 4 },
		{0 , 0 , 5 , 7 , 0 },
		{0 , 0 , 0 , 0 , 0 },
		{0 , 2 , 6 , 0 , 0 }
	};

	int nonZeros = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (sparseMatrix[i][j] != 0)
				nonZeros++;

	// number of columns in compactMatrix  must be
	// equal to number of non - zero elements in
	// sparseMatrix
	int cmptMatrix[3][nonZeros];

	// Making of new matrix
	int k = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (sparseMatrix[i][j] != 0)
			{
				cmptMatrix[0][k] = i;
				cmptMatrix[1][k] = j;
				cmptMatrix[2][k] = sparseMatrix[i][j];
				k++;
			} 

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<nonZeros; j++)
			cout <<" "<< cmptMatrix[i][j];

		cout <<"\n";
	}
	return 0;
}


