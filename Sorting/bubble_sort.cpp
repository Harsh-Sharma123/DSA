#include<iostream>
using namespace std;

void bubble_sort(int n, int a[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter elements into array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    bubble_sort(n, a);
    
    cout<<"The sorted array is : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}