#include <cstdio>
#include <cstring>

int main(){
    int n, t, trace, repRow, repCol, array[101][101];
    int repeated[101];
    scanf("%d", &t);
    
    for(int test=0; test<t; test++){
        scanf("%d", &n);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                scanf("%d", &array[i][j]);
        
        trace = 0;
        for(int i=0; i<n; i++)
            trace += array[i][i];
        
        repRow = 0;
        for(int i=0; i<n; i++){
            memset(repeated, 0, sizeof(repeated));
            
            for(int j=0; j<n; j++){
                if(repeated[array[i][j]]){
                	repRow++;
                	break;
				}
                else repeated[array[i][j]]++;
            }
        }
        
        repCol = 0;
        for(int i=0; i<n; i++){
            memset(repeated, 0, sizeof(repeated));
            
            for(int j=0; j<n; j++){
                if(repeated[array[j][i]]){
                	repCol++;
                	break;
				}
                else repeated[array[j][i]]++;
            }
        }
        
        printf("Case #%d: %d %d %d\n", test+1, trace, repRow, repCol);
    }
}
