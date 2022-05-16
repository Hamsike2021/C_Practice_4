#include <iostream>
using namespace std;

int find_min(int arr[], int first, int last) {
    int min_idx = first;
    int minimum = arr[first];
    for (int i = first; i < last; i++) {
        if (arr[i] < minimum) {
            min_idx = i;
            minimum = arr[i];
        }
    }
    return min_idx;
}

void selection_sort(int arr[], int size) {
    int first = 0;
    int min_idx;
    while (first < size) {
        min_idx = find_min(arr, first, size);
        int temp = arr[first];
        arr[first] = arr[min_idx];
        arr[min_idx] = temp;
        first++;
    }
}

int main() {
    int *arr;
    int size;
    cout<<"Enter size: \n";
    cin >> size;
    cout<<"Enter array: \n";
    arr=new int[size];
    for(int i=0;i < size; i++)
        cin >> arr[i];

    selection_sort(arr, size);
    cout << "Sort array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
