#include <stdio.h>
using namespace std;

int main() {
	char string [43];
	printf("what is your name?\n");
	fgets(string, 43, stdin);
	printf("Cool nice to you?\n", string);
	return 0;



}



