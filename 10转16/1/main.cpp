#include<iostream>
#include<stdio.h>
#include<stack>
#include<stdlib.h>

using namespace std;

 int main(){
     long long a;
     int c,j=0;
     char b[20];
     cin>>a;
     stack <char> s;
     if(a==0)
        s.push('0');
     while(a){
        c = a%16;
        a = a/16;
        if(c>=10&&c<=15)
            c = c-10+'A';
        else
            c = c + '0';
        s.push(c);
     }
     while(s.empty()!=true){
        cout<<s.top();
        s.pop();
     }
     return 0;

 }
