#include <cstdio>
 
int main(){
	int T, n, a[100];
	scanf("%d", &T);
	for(int test = 0; test < T; test++){
		scanf("%d", &n);
		
		int count = 0, sum = 0;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			if(a[i] == 0){
				count++;
				a[i]++;
			}
			sum += a[i];
		}
		
		if(sum == 0) count++;
		printf("%d\n", count);
	}
}
