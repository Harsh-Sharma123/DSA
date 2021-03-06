#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quick_sort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi-1);
        quick_sort(arr, pi+1, r);
    }
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    quick_sort(a, 0, n-1);

    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}