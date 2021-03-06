#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a1[n1], a2[n2]; //temporay arrays 

    for(int i=0;i<n1;i++)
        a1[i] = arr[l+i];

    for(int i=0;i<n2;i++)
        a2[i] = arr[mid+1+i];

    
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            arr[k] = a1[i];
            k++; i++;
        }
        else{
            arr[k] = a2[j];
            k++; j++;
        }
    }
    while(i<n1){
        arr[k] = a1[i];
        k++; i++;
    }
    while(j<n2){
        arr[k] = a2[j];
        k++; j++;
    }
}

void merge_sort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);

        merge(arr, l, mid, r);
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
    
    merge_sort(a, 0, n-1);

    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}