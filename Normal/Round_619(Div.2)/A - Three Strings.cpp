#include <cstdio>
#include <cstring>

int main(){
	int T, testcase, n, ok;
	char a[3][101];
	scanf("%d", &testcase);
	for(int T = 0; T < testcase; T++){
		ok = 1;
		for(int j=0; j<3; j++)
			scanf("%s", a[j]);
		printf("%d\n", strlen(a[0]));
		for(int i=0; i<strlen(a[0]); i++){
			if(a[0][i] != a[2][i] && a[1][i] != a[2][i]){
				printf("NO\n");
				ok = 0;
				break;
			}
		}
		if(ok) printf("YES\n");
	}
}
