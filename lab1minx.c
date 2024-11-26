#include <stdio.h>
int main(){
	int a;
	int b;
	printf("n1 = ");
	scanf("%d",&a);
	printf("n2 = ");
	scanf("%d",&b);
	if (a>b){
		printf("n1 is more than n2 by %d",a-b);
	}
	else if (b>a){
		printf("n2 is more than n1 by %d",b-a);
	}
	else if (a==b){
		printf("n1 equals n2");
	}
}
