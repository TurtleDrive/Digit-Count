#include <stdlib.h>
#include <stdio.h>

int main(){
	int num, count;
	
	printf("Enter a Number");
	scanf("%i", &num);
	
	while(num != 0){
		num /= 10;
		printf("%i\n", num); //Added for visualization of repeated division
		count++;
	}
	
	printf("Count: %i", count);
	
	return 0;
}
