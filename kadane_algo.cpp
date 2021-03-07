#include<iostream>
using namespace std;

int highestSum(int a[], int n){
    int highestSum = 0;
    int current_sum = 0;
    for(int i=0;i<n;i++){
        current_sum = current_sum+a[i] > a[i] ? current_sum+a[i] : a[i];
        highestSum = highestSum>current_sum?highestSum : current_sum;
        // cout<<current_sum<<" "<<highestSum<<endl;
    }
    return highestSum;
}

int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int result = highestSum(a, n);
    cout<<"Highest sum is : "<<result<<endl;

    return 0;
}