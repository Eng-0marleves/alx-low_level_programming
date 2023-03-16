#include<stdio.h>
int main() {
	printf("Size of int: %d bytes", sizeof(char));
	printf("Size of int: %d bytes", sizeof(int));
	printf("Size of float: %d bytes", sizeof(long int));
	printf("Size of double: %d bytes", sizeof(long long int));
	printf("Size of char: %d byte", sizeof(float));
    
	return 0;
}
