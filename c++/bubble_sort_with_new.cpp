//CONTRIBUTION BY Sushant626

#include <iostream>

using namespace std;

int main() 
{
  cout << "How many numbers are you going to sort? ";
  int how_many_numbers;
  cin >> how_many_numbers;
  if(how_many_numbers <= 0 || how_many_numbers > 1000000) {
    cout << "Are you kidding?" << endl;
    return 1;
  }
  int *numbers = new int[how_many_numbers];
  for(int i = 0; i < how_many_numbers; i++) {
    cout << "\nEnter the number #" << i + 1 << ": ";
    cin >> numbers[i];
  }
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < how_many_numbers - 1; i++)
      if (numbers[i] > numbers[i + 1]) {
        swapped = true;
        int aux = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = aux;
      }
  } while (swapped);
  cout << endl << "The sorted array:" << endl;
  for (int i = 0; i < how_many_numbers; i++)
    cout << numbers[i] << " ";
  cout << endl;
  delete[] numbers;
}
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
// This code is contributed by shivanisinghss2110
