#include <stdio.h>
int main(){
	int n1;
	int n2;
	scanf("%d %d",&n1,&n2);
	if (n1>n2){
		printf("n1 is more than n2 by %d",n1-n2);
	}
	else if (n2>n1){
		printf("n2 is more than n1 by %d",n2-n1);
	}
	else if (n1==n2){
		printf("n1 equals n2");
	}
}
