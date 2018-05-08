#include <stdio.h>

int main(void){
	int i;
	float temp;
	temp = 0;

	for(i = 0; i < 10; i++){
		temp = temp + 0.1f;
	}
	printf("%f\n", temp);
	return 0;
}
