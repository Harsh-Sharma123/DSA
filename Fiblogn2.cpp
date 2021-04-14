// To find n-th fibonacci number in log(n) time complexity

#include<iostream>

using namespace std;

void multiply(int mat[2][2], int sec[2][2]){
    
    int x1 = mat[0][0]*sec[0][0] + mat[0][1]*sec[1][0];
    int x2 = mat[0][0]*sec[0][1] + mat[0][1]*sec[1][1];
    int x3 = mat[1][0]*sec[0][0] + mat[1][1]*sec[1][0];
    int x4 = mat[1][0]*sec[0][1] + mat[1][1]*sec[1][1];
    mat[0][0] = x1;
    mat[0][1] = x2;
    mat[1][0] = x3;
    mat[1][1] = x4;
}

void power(int mat[2][2], int n){
    int sec[2][2] = {{1, 1}, {1, 0}};
    if(n==0 || n==1)
        return ;
    power(mat, n/2);
    multiply(mat, mat);
    // for(int i=2;i<=n;i++){
    //     multiply(mat, sec_mat);
    //     // for(int j=0;j<2;j++){
    //     //     for(int k=0;k<2;k++)
    //     //         // cout<<sec_mat[j][k]<<" ";
    //     //         cout<<mat[j][k]<<" ";
    //     //     cout<<endl;
    //     // }
    // }
    if(n%2==1)
        multiply(mat, sec);
}

int main(){
    int n;
    int mat[2][2] = {{1, 1}, {1, 0}};
    cin>>n;
    if(n==0 || n==1)
        cout<<n<<endl;
    // else if(n==1 )
    //     cout<<"1"<<endl;
    // else if(n==2)
    //     cout<<"1"<<endl;
    else{
        power(mat, n-1);
        cout<<mat[0][0]<<endl;
    }
    return 0;
}
