#include <cstdio>
#include <algorithm>
using namespace std;
 
int main(){
	int T, n, a[200000];
	scanf("%d", &T);
	for(int test = 0; test < T; test++){
		scanf("%d", &n);
		for(int i=0; i<2*n; i++)
			scanf("%d", &a[i]);
		sort(a, a+2*n);
		printf("%d\n", a[n] - a[n-1]);
	}
}
