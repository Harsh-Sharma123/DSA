#include<iostream>
using namespace std;
void insertion_sort(int n, int a[]){
    for(int i=1; i<n; i++){
        int key = a[i], j = i-1;
        while(j>=0 && key<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
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
    
    insertion_sort(n, a);

    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}