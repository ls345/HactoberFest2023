// C program for implementation of Bubble sort 
#include <stdio.h> 

// Swap function 
void swap(int* arr, int i, int j) 
{ 
	int temp = arr[i]; 
	arr[i] = arr[j]; 
	arr[j] = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++) 

		// Last i elements are already 
		// in place 
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr, j, j + 1); 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 5, 1, 4, 2, 8 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, N); 
	printf("Sorted array: "); 
	printArray(arr, N); 
	return 0; 
}

// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
