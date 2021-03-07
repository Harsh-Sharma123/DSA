#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0)
        return 1;
    if (b<0)
        return 1/pow(a, -b);
    if(b%2==0)
        return pow(a, b/2)*pow(a, b/2);
    else
        return a*pow(a, (b-1)/2)*pow(a, (b-1)/2);
}

int main(){
    int a, b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;
    int result = pow(a, b);
    cout<<result<<endl;

    return 0;
}