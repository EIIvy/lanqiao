#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n,i;
	int buf[10000];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n);
		for(i=0;i<n;i++){
			printf("%d",buf[i]);
		}
		printf("\n");
	}
	return 0;
} 
