#include <stdio.h>

int main() {
	int i;

	for(i=1; i<=10; ++i){
		if(i==5){
			printf("continue.\n");
			continue;
		}
		printf("%d\n",i);
	}
}
