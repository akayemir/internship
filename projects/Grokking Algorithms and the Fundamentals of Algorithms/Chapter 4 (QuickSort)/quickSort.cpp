#include <iostream>

using namespace std;

void arrayMaker(int* arr, int n){   //This function is used to make an array of random numbers

    int mod = pow(10,(n/10 + 1)) + 1;
    for (int i=0;i<n;i++)
    {
        arr[i] = rand() % mod;
    }
}

int pivotSupposedIndex(int* arr, int left, int right){   //This function is used to find the pivot index and arrange the array according to the pivot

    int pivot = arr[left];
    int index = left;

    for (int i=left; i<=right; i++)
    {
        if (arr[i] < pivot)
        {
            index++;
            swap(arr[i],arr[index]);
        }
    }
    swap(arr[left],arr[index]);
    return index;
}

void quickSort(int* arr, int left, int right){   //This function is used to sort the array using the pivot index


    if (left<right)
    {
        int pivotIndex = pivotSupposedIndex(arr,left,right);
        //cout<<"Pivot Index: "<<pivotIndex<<endl;
        quickSort(arr,left,pivotIndex-1);
        quickSort(arr,pivotIndex+1,right);
    }
}

bool isSorted(int* arr, int n){   //This function is used to check if quickSort function works correctly

    for (int i=0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}   

int main() {

    srand(time(0));
    int size = 10000;
    int* arr = new int[size];
    arrayMaker(arr,size);

    quickSort(arr,0,size-1);


    if (isSorted(arr,size-1))
    {
        cout<<"Array is sorted."<<endl;
    }
    else
    {
        cout<<"Array is not sorted."<<endl;
    }
    delete[] arr;

    return 0;
}
