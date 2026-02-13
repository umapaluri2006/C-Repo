/*#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    // Assuming a pattern based on positions commonly seen in buses:
    if (N <= 15)  // Lower deck
        printf((N % 5 == 1 || N == 15) ? "Lower Single\n" : "Lower Double\n");
    else          // Upper deck
        printf((N % 5 == 0 || N % 5 == 1) ? "Upper Single\n" : "Upper Double\n");

    return 0;
}
*/

/*#include<stdio.h>
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	if(n%2!=0){
		printf("Yes");
	}else{
		printf("No");
	}
}*/

/*#include<stdio.h>
int main(){
	int n , sum = 0,m, sum2 = 0;
	scanf("%d",&n);
	while(n>0){
		sum += n % 10;
		n /= 10;
	}
    m = sum;
    while(m>0){
		sum2 += m % 10;
		m /= 10;
	}
	printf("%d\n",sum2);
	//printf("%d\n",m);
    
}*/
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int s = ((x+3)/5);
	printf("%d",s);
}