#include <cstdio>

int abs(int a){
	return a > 0 ? a : -a;
}

int main(){
	int T, testcase, n, a[100000];
	scanf("%d", &testcase);
	for(int T = 0; T < testcase; T++){
		scanf("%d", &n);
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		int max=-1, min=2146483647, dif = -1;
		
		for(int i=0; i<n; i++){
			if(a[i] == -1){
				if(i == 0){
					if(a[i+1] != -1){
						if(a[i+1] > max) max = a[i+1];
						if(a[i+1] < min) min = a[i+1];
					}
				}
				else if(i == n-1){
					if(a[i-1] != -1){
						if(a[i-1] > max) max = a[i-1];
						if(a[i-1] < min) min = a[i-1];
					}
				}
				else{
					if(a[i+1] != -1){
						if(a[i+1] > max) max = a[i+1];
						if(a[i+1] < min) min = a[i+1];
					}
					if(a[i-1] != -1){
						if(a[i-1] > max) max = a[i-1];
						if(a[i-1] < min) min = a[i-1];
					}
				}
			}
		}
		
		int ans = (min + max) / 2;
		if(max == -1){
			printf("0 0\n");
			continue;
		}
		
		for(int i=0; i<n; i++)
			if(a[i] == -1) a[i] = ans;
		
		for(int i=0; i<n-1; i++)
			if(dif < abs(a[i] - a[i+1])) dif = abs(a[i] - a[i+1]);
		printf("%d %d\n", dif, ans);
	}
}
