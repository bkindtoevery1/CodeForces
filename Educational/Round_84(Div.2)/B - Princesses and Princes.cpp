#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int princess[100001], prince[100001];

int main(){
	int testcase;
	scanf("%d", &testcase);
	for(int t=0; t<testcase; t++){
		int n, k;
		
		scanf("%d", &n);
		
		for(int i=1; i<=n; i++){//input
			scanf("%d", &k);
			int ok = 1;
			
			for(int j=0; j<k; j++){
				int x;
				scanf("%d", &x);
				if(!prince[x] && ok){
					princess[i]++;
					prince[x]++;
					ok = 0;
				}
			}
		}
		
		int princessIndex = -1, princeIndex = -1;
		for(int i=1; i<=n; i++){
			if(!princess[i]){
				princessIndex = i;
				break;
			}
		}
		for(int i=1; i<=n; i++){
			if(!prince[i]){
				princeIndex = i;
				break;
			}
		}
		
		if(princessIndex == -1) printf("OPTIMAL\n");
		else printf("IMPROVE\n%d %d\n", princessIndex, princeIndex);
		
		memset(princess, 0, 4*(n+1));
		memset(prince, 0, 4*(n+1));
	}
}
