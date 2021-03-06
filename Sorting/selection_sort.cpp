#include<iostream>
using namespace std;

void selection_sort(int n, int a[]){
    // int min = a[0];
    for(int i=0;i<n-1;i++){
        int min = a[i], pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min = a[j];
                pos = j;
            }
        }
        if(pos!=i){
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
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
    
    selection_sort(n, a);

    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}