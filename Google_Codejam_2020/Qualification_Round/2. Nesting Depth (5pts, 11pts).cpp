#include <cstdio>
#include <cstring>

int main(){
    int t, str[101];
    scanf("%d", &t);
    for(int test=0; test<t; test++){
        char s[101];
        scanf("%s", s);
        
        printf("Case #%d: ", test+1);
        
        int size = strlen(s);
        for(int i=0; i<size; i++)
            str[i] = s[i] - '0';
        
        for(int i=0; i<str[0]; i++)
            printf("(");
        printf("%d", str[0]);
        
        for(int i=1; i<size; i++){
            int deep = str[i] - str[i-1];
            for(int j=0; j<deep; j++)
                printf("(");
            for(int j=0; j>deep; j--)
                printf(")");
            printf("%d", str[i]);
        }
        
        for(int i=0; i<str[size-1]; i++)
            printf(")");
        printf("\n");
    }
}
