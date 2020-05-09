#include <cstdio>
#include <cstring>
#include <algorithm>
#define ff first
#define ss second
using namespace std;

typedef pair<int, pair<int, int> > piii;
bool compare(const piii &a, const piii &b){
	return a.ss.ff < b.ss.ff;
}

int main(){
    int t, n;
    int c[1441], j[1441];
    char ans[1001];
    piii timeTable[1001];
    
    scanf("%d", &t);
    for(int test=0; test<t; test++){
        memset(c, 0, sizeof(c));
        memset(j, 0, sizeof(j));
        memset(ans, 0, sizeof(ans));
        
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            int s, e;
            scanf("%d %d", &s, &e);
            timeTable[i] = {i, {s, e}};
        }
        
        sort(timeTable, timeTable+n, compare);
        
		for(int i=0; i<n; i++){
			int s = timeTable[i].ss.ff, e = timeTable[i].ss.ss;
			int isDup = 0;
			
			for(int i=s; i<e; i++)
                isDup += c[i];
            if(!isDup){//Cameron covers
                for(int i=s; i<e; i++)
                    c[i]++;
                ans[timeTable[i].ff] = 'C';
            }
            else{
            	isDup = 0;
                for(int i=s; i<e; i++)
                    isDup += j[i];
                if(!isDup){//Jamie covers
                    for(int i=s; i<e; i++)
                        j[i]++;
                    ans[timeTable[i].ff] = 'J';
                }
                
                else goto next;
			}
		}
		printf("Case #%d: %s\n", test+1, ans);
		continue;
        next:
        printf("Case #%d: IMPOSSIBLE\n", test+1);
    }
}
