// A code that creates 10 different sized arrays with random integer values,
// Sorts these arrays and compare linear and binary search time complexities
#include <iostream>
#include <chrono>

using namespace std;

void arrayMaker(int* arr, int n){

    int mod = pow(10,(n/10 + 1)) + 1;
    for (int i=0;i<n;i++)
    {
        arr[i] = rand() % mod;
    }
}

void arraySorter(int* arr, int n){
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int linearSearch(int* arr, int n, int tar){

    for (int i=0;i<n;i++)
    {
        if (arr[i]==tar)
            return i;
    }
    return -1;
}

int binarySearch(int* arr, int n, int tar){

    int left=0;
    int right=n-1;
    int mid =(left+right)/2;

    while (left<=right)
    {
        mid = (left+right)/2;

        if (tar<arr[mid])
        {
            right=mid-1;
        }
        else if (tar==arr[mid])
        {
            return mid;
        }
        else
        {
            left=mid+1;;
        }
    }

    return -1;
}


int chooserBeginning(int* arr, int n) // Finding a target (to run search functions) which is close to the beginning of the array  
{
    int ind = rand() % (n/10);
    return arr[ind];
}

int chooserMiddle(int* arr, int n) // Finding a target which is close to the middle of the array 
{
    int ind = n - 1 - (rand() % (n/10)) - n/2;
    return arr[ind];
}

int chooserEnd(int* arr, int n) // Finding a target which is close to the end of the array 
{
    int ind = n - 1 - (rand() % (n/10));
    return arr[ind];
}

int chooserNonExist(int* arr, int n) // Finding a target which does not exist in the array 
                                     // (Using binary search function [runs until the function returns -1 (does not exist)])
{
    int ind = 0;
    int tar = 0;
    int mod = pow(10,(n/10 + 1)) + 1;
    
    while (ind != -1)
    {
        tar = rand() % mod;
        ind = binarySearch(arr, n, tar);
    }
    return tar;
}

void timerLinearSearch(int* arr, int n , int tar, int ind) // Timer
{

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    linearSearch (arr,n,tar);
    chrono::steady_clock::time_point elapsedTime = chrono::steady_clock::now();

    cout << "Time difference for array which has " << n << " elements = " << chrono::duration_cast<chrono::nanoseconds> (elapsedTime-startTime).count() << "[ns]" << endl;

}

void timerBinarySearch(int* arr, int n , int tar, int ind) // Timer
{

    chrono::steady_clock::time_point startTime = chrono::steady_clock::now();
    binarySearch(arr,n,tar);
    chrono::steady_clock::time_point elapsedTime = chrono::steady_clock::now();

    cout << "Time difference for array which has " << n << " elements = " << chrono::duration_cast<chrono::nanoseconds> (elapsedTime-startTime).count() << "[ns]" << endl;
    
}


int main(){ 

    srand(time(0));
    int** arr = new int*[10];
    int size[] = {10,50,100,500,1000,5000,10000,50000,100000,150000};

    for (int i=0;i<10;i++)
    {
        arr[i] = new int[size[i]];
    }

    for (int i=0;i<10;i++)
    {
        cout<<i+1<<endl;
  
        arrayMaker(arr[i],size[i]);
        arraySorter(arr[i],size[i]);

        int tar1 = chooserBeginning(arr[i],size[i]);
        int tar2 = chooserMiddle(arr[i],size[i]);
        int tar3 = chooserEnd(arr[i],size[i]);
        int tar4 = chooserNonExist(arr[i],size[i]);

        cout<<"Linear Search"<<endl;
        timerLinearSearch(arr[i],size[i],tar1,i);
        timerLinearSearch(arr[i],size[i],tar2,i);
        timerLinearSearch(arr[i],size[i],tar3,i);
        timerLinearSearch(arr[i],size[i],tar4,i);
        cout<<endl;

        cout<<"Binary Search"<<endl;
        timerBinarySearch(arr[i],size[i],tar1,i);
        timerBinarySearch(arr[i],size[i],tar2,i);
        timerBinarySearch(arr[i],size[i],tar3,i);
        timerBinarySearch(arr[i],size[i],tar4,i);
        cout<<endl;

        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
