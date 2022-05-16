#include <iostream>
using namespace std;

void insertion_sort(int arr[], const int n)
{
    int key = 0;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int *arr;
    int size;
    cout<<"Enter size: \n";
    cin >> size;
    cout<<"Enter array: \n";
    arr=new int[size];
    for(int i = 0;i < size; i++)
        cin >> arr[i];

    insertion_sort(arr, size);
    cout << "Sort array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
