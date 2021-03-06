#include <cmath>

// Wrapper for MergeSort, where n is number of elements in the array
template <typename T>
void MergeSort(T *A, size_t n){
	MergeSort(A, 0, n - 1);
}

template <typename T>
void MergeSort(T *A, size_t p, size_t r){
	if (p < r){
		size_t q = static_cast<size_t>(std::floor((p + r) / 2.0));
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);

	}
}

template <typename T>
void Merge(T *A, size_t p, size_t q, size_t r){
	size_t n1 = q - p + 1;
	size_t n2 = r - q;
	T *L = new T[n1], *R = new T[n2];

	for (size_t i = 0; i < n1; i++)
		L[i] = A[p + i];

	for (size_t i = 0; i < n2; i++)
		R[i] = A[q + i + 1];

	size_t i = 0, j = 0, k = p;

	while (i < n1 && j < n2){
		if (L[i] < R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
		k++;
	}

	if (i != n1){
		for (i; i < n1; i++)
			A[k++] = L[i];
	} else if (j != n2){
		for (j; j < n2; j++)
			A[k++] = R[j];
	}
}
