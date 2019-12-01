#include<iostream>
using namespace std;

int main(){
    for(int n=1000;n<=9999;n++){
        if((n%10==n/1000)&&((n%100)/10==(n/100)%10))
            cout<<n<<endl;
    }
    return 0;
}
