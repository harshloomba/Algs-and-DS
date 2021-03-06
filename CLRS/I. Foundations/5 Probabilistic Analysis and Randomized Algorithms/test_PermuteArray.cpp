#include "PermuteArray.h"

// Creates 2 permuted arrays:
// - an array in descending order
// - an array in ascending order
// Permutes 2 arrays in-place:
// - an array in descending order
// - an array in ascending order
void PeremutationTests(){

	int *A = new int[10]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int a0 = A[0];
	int a1 = A[1];
	int a2 = A[2];
	int a3 = A[3];
	int a4 = A[4];
	int a5 = A[5];
	int a6 = A[6];
	int a7 = A[7];
	int a8 = A[8];
	int a9 = A[9];

	int *B = PermuteBySorting(A, 10);

	int b0 = B[0];
	int b1 = B[1];
	int b2 = B[2];
	int b3 = B[3];
	int b4 = B[4];
	int b5 = B[5];
	int b6 = B[6];
	int b7 = B[7];
	int b8 = B[8];
	int b9 = B[9];


	
	int *C = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int c0 = C[0];
	int c1 = C[1];
	int c2 = C[2];
	int c3 = C[3];
	int c4 = C[4];
	int c5 = C[5];
	int c6 = C[6];
	int c7 = C[7];
	int c8 = C[8];
	int c9 = C[9];

	int *D = PermuteBySorting(C, 10);

	int d0 = D[0];
	int d1 = D[1];
	int d2 = D[2];
	int d3 = D[3];
	int d4 = D[4];
	int d5 = D[5];
	int d6 = D[6];
	int d7 = D[7];
	int d8 = D[8];
	int d9 = D[9];



	int *E = new int[10]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	RandomizeInPlace(E, 10);
	
	int e0 = E[0];
	int e1 = E[1];
	int e2 = E[2];
	int e3 = E[3];
	int e4 = E[4];
	int e5 = E[5];
	int e6 = E[6];
	int e7 = E[7];
	int e8 = E[8];
	int e9 = E[9];


	int *F = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	RandomizeInPlace(F, 10);
	
	int f0 = F[0];
	int f1 = F[1];
	int f2 = F[2];
	int f3 = F[3];
	int f4 = F[4];
	int f5 = F[5];
	int f6 = F[6];
	int f7 = F[7];
	int f8 = F[8];
	int f9 = F[9];

	int DEBUG_BREAK_POINT = 1;


}

int main(){
	PeremutationTests();
}

