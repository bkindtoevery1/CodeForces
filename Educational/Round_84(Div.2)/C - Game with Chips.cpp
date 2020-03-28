#include <cstdio>
#define ff first
#define ss second
using namespace std;

int main(){
	int n, m, k, index = 0, x, y;
	char command[80001];
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=0; i<k * 2; i++)
		scanf("%d %d", &x, &y);
		
	for(int i=0; i<n-1; i++)
		command[index++] = 'U';
	for(int i=0; i<m-1; i++)
		command[index++] = 'L';
	
	for(int i=0; i<n/2; i++){
		for(int j=0; j<m-1; j++)
			command[index++] = 'R';
		command[index++] = 'D';
		for(int j=0; j<m-1; j++)
			command[index++] = 'L';
		if(i != n/2-1) command[index++] = 'D';
	}
	if(n % 2 == 1){
		if(n != 1) command[index++] = 'D';
		for(int j=0; j<m-1; j++)
			command[index++] = 'R';
	}
	printf("%d\n", index);
	for(int i=0; i<index; i++)
		printf("%c", command[i]);
}
