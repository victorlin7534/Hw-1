#include <stdio.h>
#include <stdlib.h>

int sum(){
	int i,t;
	for(i=999,t=0;i>0;i--){
		if(i % 3 == 0) t += i;
		else if(i % 5 == 0) t += i;
	}
	return t;
}

int main(){
	printf("%d\n",sum());
	return 0;
}