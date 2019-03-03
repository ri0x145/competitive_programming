#include <stdio.h>

void call(int n) {
	int i,x;
	
	for (i=1; i<=n; i++) {
		x = i;
		if( x % 10 == 3) {
			printf(" %d",i);
			continue;
		}
		
		if( x % 3 == 0) {
			printf(" %d",i);
		}
		
		while(1) {
			x /= 10;
			if( x % 10 == 3) {
				printf(" %d",i);
				if(!x) break;
			}
		}
	}
	printf("\n");
}
	
int main (void) {
	int i;
	scanf("%d",&i);
	call(i);
	return 0;
}
	