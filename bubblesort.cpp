#include <stdio.h>

void print(int arr[], int arrs){ 
	int i; 
	for (i=0; i<arrs; i++) 
		printf("%d ", arr[i]);
	printf("\n");
}

void swap(int *x, int *y){ 
	int fn = *x; 
	*x = *y; 
	*y = fn; 
}

void bubbleSort(int arr[], int n){ 
	int fx, fy; 
	bool swapped; 
	for(fx = 0; fx < n-1; fx++){ 
		swapped = false; 
		for(fy = 0; fy < n-fx-1; fy++){ 
			if (arr[fy] > arr[fy+1]){ 
				swap(&arr[fy], &arr[fy+1]); 
				swapped = true; 
			} 
		} 
		if(swapped == false){
			break;
		} 
	} 
} 

int main(int argc, char *argv[]){ 
	int arr[] = {10, 25, 22, 120, 32, 4, 100}; 
	int fn = (sizeof(arr)/sizeof(arr[0]));
	bubbleSort(arr, fn); 
	print(arr, fn);
} 
