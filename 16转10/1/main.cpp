#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    char a[9];
    long long sum=0;
    int b,j=0;
    cin>>a;
    for(int i=strlen(a)-1;i>=0;i--){
        if(a[i]>='A'&&a[i]<='F')
            b = a[i]-'A'+10;
        else
            b = a[i]-'0';
        sum+=b*pow(16,j);
        j++;
    }
    cout<<sum<<endl;
    return 0;

}
