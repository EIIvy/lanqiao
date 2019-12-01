#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a[34][34];
    int n;
    a[0][0]=1;
    a[1][0]=a[1][1]=1;
    for(int i=2;i<34;i++){
        a[i][0]=a[i][i]=1;
        for(int j=1;j<i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
           cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;

}
