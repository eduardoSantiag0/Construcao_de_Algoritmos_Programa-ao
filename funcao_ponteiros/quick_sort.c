int partition(int arr[], int low, int high)
{
 
    
    int pivot = arr[low]; // First element as pivot
    int st = low; // st points to the starting of array
    int end = high; // end points to the ending of the array
    int k = high; 
    for (int i = high; i > low; i--) { //* Começa do final e vai decrementando 
        if (arr[i] > pivot) //* Se algum numero for maior que o pivô
            swap(arr[i], arr[k--]);
    }
    swap(arr[low], arr[k]);
    // As we got pivot element index is end
    // now pivot element is at its sorted position
    // return pivot element index (end)
    return k; // K é a popsição que está sendo verificada
}
 

 /* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int start, int end)
{
    // If start is lesser than end
    if (start < end) {
        // idx is index of pivot element which is at its
        // sorted position
        int index = partition(arr, start, end); 
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, start, index - 1); //* Começo ao meio
        quickSort(arr, index + 1, end); //* Final ao meio
    }
}


int main()
{
    int arr[] = { 7, 6, 10, 5, 9, 2, 1, 15, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1); //Metade do vetor
    return 0;
}