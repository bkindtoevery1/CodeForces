#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string answer = "";

string jump(int x, int y, int jumpSize, string ans){
	string ret = "";
	
	if(x % jumpSize != 0 || y % jumpSize != 0){
		return ret;
	}
	if(x == jumpSize && y == 0){
		answer = ans + 'E';
		return ret;
	}
	if(x == -jumpSize && y == 0){
		answer = ans + 'W';
		return ret;
	}
	if(x == 0 && y == jumpSize){
		answer = ans + 'N';
		return ret;
	}
	if(x == 0 && y == -jumpSize){
		answer = ans + 'S';
		return ret;
	}
	
	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};
	char ori[4] = {'W', 'S', 'E', 'N'};
	
	for(int i=0; i<4; i++){
		string temp = jump(x + dx[i] * jumpSize, y + dy[i] * jumpSize, jumpSize*2, ans + ori[i]);
		if(temp.size() != 0){
			ret = ans + temp;
			return ret;
		}
	}
	return ret;
} 

int main(){
	int t;
	scanf("%d", &t);
	
	for(int test = 0; test < t; test++){
		answer = "";
		int x, y;
		scanf("%d %d", &x, &y);
		
		string str = "";
		jump(x, y, 1, str);
		
		if(answer == "") printf("Case #%d: IMPOSSIBLE\n", test+1);
		else{
			printf("Case #%d: ", test+1);
			cout << answer;
			printf("\n");
		}
	}
}
