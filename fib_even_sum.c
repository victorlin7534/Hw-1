#include <stdio.h>
#include <stdlib.h>

int sum2(int f, int s, int t){
	if(s >= 4000000) return t;
	else if(s % 2 == 0) t += s;
	sum2(s,f+s,t);
}

int sum(){return sum2(1,2,0);}

int main(){
	printf("%d\n",sum());
	return 0;
}