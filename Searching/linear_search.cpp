#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
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

    int result = linear_search(arr, n, key);
    if(result==-1)
        cout<<"Key Not Found"<<endl;
    else   
        cout<<"Key found at index "<<result+1<<endl;
    
    return 0;
}