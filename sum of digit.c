/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n ,i,j,k;
    scanf("%d",&n);
    for(i=1;i<n;i++){
    	for(j=1;j<n;j--){
    		printf("%d ",j);
		}
	}
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}*/
#include <stdio.h>

int main() {
	// your code goes here
	int t,a,b,c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&a,&b,&c);
	    if((a < b && a > c)||( a > b && a < c)){
	        printf("%d\n",a);
	    }else if(( b < a && b > c )||( b > a && b < c)){
	        printf("%d\n",b);
	    }else{
	        printf("%d\n",c);
	    }
	}
return 0;
}
