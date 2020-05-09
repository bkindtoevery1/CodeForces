#include <cstdio>

int main(){
	int test;
	scanf("%d", &test);
	for(int t = 0; t<test; t++){
	    printf("Case #%d:\n", t+1);
		int n, i = 1, count = 2, num;
		scanf("%d", &n);
		while(1){
			if(i*(i+1)/2 + 1 > n) break;
			i++;
		}
		printf("1 1\n");
		
		num = --i*(i+1)/2+1;
		
		for(; count<=i+1; count++)
			printf("%d %d\n", count, count-1);
		
		for(; num < n; num++){
			count--;
			printf("%d %d\n", count, count);
		}
	}
}
