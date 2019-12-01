#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;

int main(){
    int n,tag=0;
    stack <int> s;
    cin>>n;
    for(int i=1;i<10;i++){
            if(2*i>n) break;
        for(int j=0;j<10;j++){
            if(2*i+2*j>n) break;
            for(int k=0;k<10;k++){

                if((i*2+j*2+k==n)){
                    s.push(i);
                    s.push(j);
                    s.push(k);
                    s.push(j);
                    s.push(i);
                    tag = 1;
                }
                while(s.empty()!=true){
                    cout<<s.top();
                    s.pop();
                }
                if(tag){
                    cout<<endl;
                    tag=0;
                }
            }
        }
    }
    for(int i=1;i<10;i++){
        if(2*i>n) break;
        for(int j=0;j<10;j++){
            if(2*i+2*j>n) break;
            for(int k=0;k<10;k++){
                 if(i*2+j*2+k*2==n){
                    s.push(i);
                    s.push(j);
                    s.push(k);
                    s.push(k);
                    s.push(j);
                    s.push(i);
                    tag = 1;
                }
                while(s.empty()!=true){
                    cout<<s.top();
                    s.pop();
                }
                if(tag){
                    cout<<endl;
                    tag=0;
                }

            }
       }
    }
    return 0;
}
