#include<iostream>
#include<cmath>
using namespace std;

float f(float x){
    return (x*x - 64);
}

float f_(float x){
    return 2*x;
}

int main(){
    int a=0,b=1;
    float error = 0.001;
    int flag = 0;
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    do{
        if(f(a)*f(b)==0){
            cout<<"Root lies between "<<a<<" and "<<b<<" "<<endl;
            flag = 1;
        }
        else{
            a++; b++;
        }
    }while(flag!=1);

    float x = (a+b)/2;
    do{
        float x1 = x - f(x)/f_(x);
        if(fabs(x1-x)<=error){
            cout<<"Root is "<<x1<<endl;
            flag = 0;
        }
        else{
            x = x1;
        }
    }while(flag!=0);

    return 0;
}