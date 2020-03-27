#include <cstdio>
#include <cmath>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		if(sqrt(x) < y) printf("NO\n");
		else if(x % 2 == 0 && y % 2 == 0) printf("YES\n");
		else if(x % 2 == 1 && y % 2 == 1) printf("YES\n");
		else printf("NO\n");
	}
}
