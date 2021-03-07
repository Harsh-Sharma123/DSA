#include<bits/stdc++.h>
using namespace std;

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutate(string a, int j, int len){
    if(j == len){
        cout<<a<<endl;
    }
    else{
        for(int i=j;i<=len;i++){
            swap(a[j], a[i]);
            permutate(a, j+1, len);
            swap(a[j], a[i]); // backtracking
        }
    }
}

int main(){
    string a ;
    cout<<"Enter the string : "<<endl;
    cin>>a;
    int len = a.size();
    permutate(a, 0, len-1);

    return 0;
}