#include<stdio.h>
int main()
{
    int n,m,t;
    scanf("%d %d",&n,&m);
    t =n* m;
    if(t >= 10000 && t <= 99999){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}