

#include <iostream>
using namespace std;

// In this function we are giving input of the array
void inArray(int *arr, int s)
{
    cout << "Input array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
}

// In this function,we are swapping two elements of the array
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// In this function we are printing the elements of  the array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// function to rearrange array (to find the partition point)
int partition(int array[], int low, int high)
{

    // select the rightmost element as pivot
    int pivot = array[high];

    // pointer for greater element
    int i = (low - 1);

    // we have to traverse each element of the array
    // and compare them with the pivot
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {

            // if any element smaller than pivot is found
            // we have to swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&array[i], &array[j]);
        }
    }

    // swap pivot with the greater element at i
    swap(&array[i + 1], &array[high]);

    // returning  the partition point
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        // We have find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(array, low, high);

        // recursive calling  on the left of pivot
        quickSort(array, low, pi - 1);

        // recursive calling on the right of pivot
        quickSort(array, pi + 1, high);
    }
}

int main()
{

    int arr[6];
    // calling the inputarray function
    inArray(arr, 6);

    cout << "Array in Unsorted order: \n";
    printArray(arr, 6);

    // calling the quickSort function
    quickSort(arr, 0, 6 - 1);

    cout << "Sorted array in ascending order: \n";
    // printing the array in sorted order after performing quickSort
    printArray(arr, 6);
}
