#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
#include<math.h>

using namespace std;

int main(){
    char a[100000];
    char b[400000];
    int n,m,modd;
    int p;
    stack <int> s;
    cin>>n;
    while(n){
        p = 0;
        scanf("%s",a);
        for(int i=strlen(a)-1;i>=0;i--){
            if(a[i]>='A'&&a[i]<='F')
               m = a[i]-'A' + 10;
            else
                m = a[i]-'0';
            for(int j=0;j<4;j++){
                modd = m%2;
                m = m/2;
                b[p++] = modd;
            }
        }
        int kk = -1;
        int sum = 0;
        for(int i=0;i<p;i++){
            kk++;
            sum+=b[i]*pow(2,kk);
            if(kk==2||i==p-1&&sum!=0){
               s.push(sum);
               kk = -1;
               sum = 0;
            }
        }
        while(s.empty()!=true){
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
        n--;
    }
    return 0;
}
