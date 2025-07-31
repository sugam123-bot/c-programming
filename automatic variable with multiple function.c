//WAP to demonstrate the uses of automatic variable with multiple function
#include<stdio.h>
	
void test(){
static int i=20;
	printf("%d\t", i);
	i++;
}
int main(){
	test();
	test();
	test();
	test();
		return 0;
}

