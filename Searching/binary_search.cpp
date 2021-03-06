#include<iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int key){
    if(low<=high){
        int mid = (low+high)/2 ;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)  
            return binary_search(arr, low, mid, key);
        else
            return binary_search(arr, mid, high, key);
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int key;
    cout<<"Enter the key to be searched : "<<endl;
    cin>>key;

    int result = binary_search(arr, 0, n, key);
    if(result==-1)
        cout<<"Key Not Found"<<endl;
    else   
        cout<<"Key found at index "<<result+1<<endl;
    
    return 0;
}