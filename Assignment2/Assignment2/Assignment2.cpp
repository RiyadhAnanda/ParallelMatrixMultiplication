//	Riyadh Ananda
//	CSCI 5325
//	Homework Assignment 2
//		- Matrix multiplication in C++ a row major language

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <vector>


using namespace std;


// Function Prototypes
void mult_ijk(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);
void mult_jik(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);
void mult_kij(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);
void mult_ikj(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);
void mult_jki(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);
void mult_kji(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size);

int main()
{
	// Variables
	int i = 0;
	int j = 0;
	double elapsed[24] = {};										//x_coords

	vector<vector <int>> matrix_a(10000, vector<int>(10000, 0));
	vector<vector <int>> matrix_b(10000, vector<int>(10000, 0));
	vector<vector <int>> matrix_c(10000, vector<int>(10000, 0));


	// Initialize Time Seed
	srand(time(NULL));

	/* Initialize Matrices*/
	for (i = 0; i < matrix_a.size(); i++) {			// Row

		for (j = 0; j < matrix_a.size(); j++) {		// Column

			// Set contents of matrix
			matrix_a.at(i).at(j) = rand() % 255 + 1;
			matrix_b.at(i).at(j) = rand() % 255 + 1;
		}
	}


	// 1. (ijk), (10x10)
	clock_t start = clock();
	mult_ijk(matrix_a, matrix_b, matrix_c, 10);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10);
	clock_t stop = clock();
	elapsed[0] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ijk), (10x10): %f \n", elapsed[0]);

	// 2. (jik), (10x10)
	start = clock();
	mult_jik(matrix_a, matrix_b, matrix_c, 10);
	mult_jik(matrix_a, matrix_b, matrix_c, 10);
	mult_jik(matrix_a, matrix_b, matrix_c, 10);
	mult_jik(matrix_a, matrix_b, matrix_c, 10);
	mult_jik(matrix_a, matrix_b, matrix_c, 10);
	stop = clock();
	elapsed[1] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jik), (10x10): %f \n", elapsed[1]);

	// 3. (kij), (10x10)
	start = clock();
	mult_kij(matrix_a, matrix_b, matrix_c, 10);
	mult_kij(matrix_a, matrix_b, matrix_c, 10);
	mult_kij(matrix_a, matrix_b, matrix_c, 10);
	mult_kij(matrix_a, matrix_b, matrix_c, 10);
	mult_kij(matrix_a, matrix_b, matrix_c, 10);
	stop = clock();
	elapsed[2] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kij), (10x10): %f \n", elapsed[2]);

	// 4. (ikj), (10x10)
	start = clock();
	mult_ikj(matrix_a, matrix_b, matrix_c, 10);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10);
	stop = clock();
	elapsed[3] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ikj), (10x10): %f \n", elapsed[3]);

	// 5. (jki), (10x10)
	start = clock();
	mult_jki(matrix_a, matrix_b, matrix_c, 10);
	mult_jki(matrix_a, matrix_b, matrix_c, 10);
	mult_jki(matrix_a, matrix_b, matrix_c, 10);
	mult_jki(matrix_a, matrix_b, matrix_c, 10);
	mult_jki(matrix_a, matrix_b, matrix_c, 10);
	stop = clock();
	elapsed[4] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jki), (10x10): %f \n", elapsed[4]);

	// 6. (kji), (10x10) matrix
	start = clock();
	mult_kji(matrix_a, matrix_b, matrix_c, 10);
	mult_kji(matrix_a, matrix_b, matrix_c, 10);
	mult_kji(matrix_a, matrix_b, matrix_c, 10);
	mult_kji(matrix_a, matrix_b, matrix_c, 10);
	mult_kji(matrix_a, matrix_b, matrix_c, 10);
	stop = clock();
	elapsed[5] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kji), (10x10): %f \n", elapsed[5]);

	// 1. (ijk), (100x100)
	start = clock();
	mult_ijk(matrix_a, matrix_b, matrix_c, 100);
	mult_ijk(matrix_a, matrix_b, matrix_c, 100);
	mult_ijk(matrix_a, matrix_b, matrix_c, 100);
	mult_ijk(matrix_a, matrix_b, matrix_c, 100);
	mult_ijk(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[6] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ijk), (100x100): %f \n", elapsed[6]);

	// 2. (jik), (100x100)
	start = clock();
	mult_jik(matrix_a, matrix_b, matrix_c, 100);
	mult_jik(matrix_a, matrix_b, matrix_c, 100);
	mult_jik(matrix_a, matrix_b, matrix_c, 100);
	mult_jik(matrix_a, matrix_b, matrix_c, 100);
	mult_jik(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[7] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jik), (100x100): %f \n", elapsed[7]);

	// 3. (kij), (100x100)
	start = clock();
	mult_kij(matrix_a, matrix_b, matrix_c, 100);
	mult_kij(matrix_a, matrix_b, matrix_c, 100);
	mult_kij(matrix_a, matrix_b, matrix_c, 100);
	mult_kij(matrix_a, matrix_b, matrix_c, 100);
	mult_kij(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[8] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kij), (100x100): %f \n", elapsed[8]);

	// 4. (ikj), (100x100)
	start = clock();
	mult_ikj(matrix_a, matrix_b, matrix_c, 100);
	mult_ikj(matrix_a, matrix_b, matrix_c, 100);
	mult_ikj(matrix_a, matrix_b, matrix_c, 100);
	mult_ikj(matrix_a, matrix_b, matrix_c, 100);
	mult_ikj(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[9] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ikj), (100x100): %f \n", elapsed[9]);

	// 5. (jki), (100x100)
	start = clock();
	mult_jki(matrix_a, matrix_b, matrix_c, 100);
	mult_jki(matrix_a, matrix_b, matrix_c, 100);
	mult_jki(matrix_a, matrix_b, matrix_c, 100);
	mult_jki(matrix_a, matrix_b, matrix_c, 100);
	mult_jki(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[10] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jki), (100x100): %f \n", elapsed[10]);

	// 6. (kji), (100x100)
	start = clock();
	mult_kji(matrix_a, matrix_b, matrix_c, 100);
	mult_kji(matrix_a, matrix_b, matrix_c, 100);
	mult_kji(matrix_a, matrix_b, matrix_c, 100);
	mult_kji(matrix_a, matrix_b, matrix_c, 100);
	mult_kji(matrix_a, matrix_b, matrix_c, 100);
	stop = clock();
	elapsed[11] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kji), (100x100): %f \n", elapsed[11]);

	// 1. (ijk), (1000x1000)
	start = clock();
	mult_ijk(matrix_a, matrix_b, matrix_c, 1000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 1000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 1000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 1000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[12] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ijk), (1000x1000): %f \n", elapsed[12]);

	// 2. (jik), (1000x1000)
	start = clock();
	mult_jik(matrix_a, matrix_b, matrix_c, 1000);
	mult_jik(matrix_a, matrix_b, matrix_c, 1000);
	mult_jik(matrix_a, matrix_b, matrix_c, 1000);
	mult_jik(matrix_a, matrix_b, matrix_c, 1000);
	mult_jik(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[13] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jik), (1000x1000): %f \n", elapsed[13]);

	// 3. (kij), (1000x1000)
	start = clock();
	mult_kij(matrix_a, matrix_b, matrix_c, 1000);
	mult_kij(matrix_a, matrix_b, matrix_c, 1000);
	mult_kij(matrix_a, matrix_b, matrix_c, 1000);
	mult_kij(matrix_a, matrix_b, matrix_c, 1000);
	mult_kij(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[14] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kij), (1000x1000): %f \n", elapsed[14]);

	// 4. (ikj), (1000x1000)
	start = clock();
	mult_ikj(matrix_a, matrix_b, matrix_c, 1000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 1000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 1000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 1000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[15] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ikj), (1000x1000): %f \n", elapsed[15]);

	// 5. (jki), (1000x1000)
	start = clock();
	mult_jki(matrix_a, matrix_b, matrix_c, 1000);
	mult_jki(matrix_a, matrix_b, matrix_c, 1000);
	mult_jki(matrix_a, matrix_b, matrix_c, 1000);
	mult_jki(matrix_a, matrix_b, matrix_c, 1000);
	mult_jki(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[16] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jki), (1000x1000): %f \n", elapsed[16]);

	// 6. (kji), (1000x1000)
	start = clock();
	mult_kji(matrix_a, matrix_b, matrix_c, 1000);
	mult_kji(matrix_a, matrix_b, matrix_c, 1000);
	mult_kji(matrix_a, matrix_b, matrix_c, 1000);
	mult_kji(matrix_a, matrix_b, matrix_c, 1000);
	mult_kji(matrix_a, matrix_b, matrix_c, 1000);
	stop = clock();
	elapsed[17] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kji), (1000x1000): %f \n", elapsed[17]);

	// 1. (ijk), (10000x10000)
	start = clock();
	mult_ijk(matrix_a, matrix_b, matrix_c, 10000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10000);
	mult_ijk(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[18] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ijk), (10000x10000): %f \n", elapsed[18]);

	// 2. (jik), (10000x10000)
	start = clock();
	mult_jik(matrix_a, matrix_b, matrix_c, 10000);
	mult_jik(matrix_a, matrix_b, matrix_c, 10000);
	mult_jik(matrix_a, matrix_b, matrix_c, 10000);
	mult_jik(matrix_a, matrix_b, matrix_c, 10000);
	mult_jik(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[19] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jik), (10000x10000): %f \n", elapsed[19]);

	// 3. (kij), (10000x10000)
	start = clock();
	mult_kij(matrix_a, matrix_b, matrix_c, 10000);
	mult_kij(matrix_a, matrix_b, matrix_c, 10000);
	mult_kij(matrix_a, matrix_b, matrix_c, 10000);
	mult_kij(matrix_a, matrix_b, matrix_c, 10000);
	mult_kij(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[20] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kij), (10000x10000): %f \n", elapsed[20]);


	// 4. (ikj), (10000x10000)
	start = clock();
	mult_ikj(matrix_a, matrix_b, matrix_c, 10000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10000);
	mult_ikj(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[21] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(ikj), (10000x10000): %f \n", elapsed[21]);

	// 5. (jki), (10000x10000)
	start = clock();
	mult_jki(matrix_a, matrix_b, matrix_c, 10000);
	mult_jki(matrix_a, matrix_b, matrix_c, 10000);
	mult_jki(matrix_a, matrix_b, matrix_c, 10000);
	mult_jki(matrix_a, matrix_b, matrix_c, 10000);
	mult_jki(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[22] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(jki), (10000x10000): %f \n", elapsed[22]);

	// 6. (kji), (10000x10000)
	start = clock();
	mult_kji(matrix_a, matrix_b, matrix_c, 10000);
	mult_kji(matrix_a, matrix_b, matrix_c, 10000);
	mult_kji(matrix_a, matrix_b, matrix_c, 10000);
	mult_kji(matrix_a, matrix_b, matrix_c, 10000);
	mult_kji(matrix_a, matrix_b, matrix_c, 10000);
	stop = clock();
	elapsed[23] = (double(stop - start) / CLOCKS_PER_SEC) / 5;
	printf("(kji), (10000x10000): %f \n", elapsed[23]);

	return 0;
}

// 1) Matrix multiplication (ijk)
void mult_ijk(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int sum;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum = 0;

			for (int k = 0; k < size; k++)
			{
				sum += matrix_a[i][k] * matrix_b[k][j];
			}

			matrix_c[i][j] = sum;
		}
	}
}

// 2) Matrix multiplication (jik)
void mult_jik(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int sum;

	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			sum = 0;

			for (int k = 0; k < size; k++)
			{
				sum += matrix_a[i][k] * matrix_b[k][j];
			}

			matrix_c[i][j] = sum;
		}
	}
}

// 3) Matrix Multiplication (kij)
void mult_kij(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int r;

	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i < size; i++)
		{
			r = matrix_a[i][k];

			for (int j = 0; j < size; j++)
			{
				matrix_c[i][j] += r * matrix_b[k][j];
			}
		}
	}
}

// 4) Matrix Multiplication (ikj)
void mult_ikj(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int r;

	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			r = matrix_a[i][k];

			for (int j = 0; j < size; j++)
			{
				matrix_c[i][j] += r * matrix_b[k][j];
			}
		}
	}
}

// 5) Matrix Multiplication (jki)
void mult_jki(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int r;

	for (int j = 0; j < size; j++)
	{
		for (int k = 0; k < size; k++)
		{
			r = matrix_b[k][j];

			for (int i = 0; i < size; i++)
			{
				matrix_c[i][j] += r * matrix_a[i][k];
			}
		}
	}
}

// 6) Matrix Multiplication (kji)
void mult_kji(const vector<vector <int>> matrix_a, const vector<vector <int>> matrix_b, vector<vector <int>>& matrix_c, const int size)
{
	int r;

	for (int k = 0; k < size; k++)
	{
		for (int j = 0; j < size; j++)
		{
			r = matrix_b[k][j];

			for (int i = 0; i < size; i++)
			{
				matrix_c[i][j] += r * matrix_a[i][k];
			}
		}
	}
}