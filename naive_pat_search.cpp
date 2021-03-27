#include<bits/stdc++.h>
using namespace std;

void search(char *text, char *pat){
    int m = strlen(text);
    int n = strlen(pat);
    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<n;j++){
            if(text[i+j]!=pat[j])
                break;
        }
        if(j==n)
            cout<<"Pattern found at index "<<i<<endl;
    }
}

int main(){
    char text[100], pat[50];
    cout<<"Enter string : "<<endl;
    cin>>text;
    cout<<"Enter pattern : "<<endl;
    cin>>pat;
    search(text, pat);
    return 0;
}

// best case complexity is O(m) when no match is found
// worst case complexity is O(n*(m-n+1))