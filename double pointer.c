//WAP in c that illustrating use of double pointer
int main(){
	int x;
	int *p;
	int **q;
	printf("Chet Prasad Mainali\n");
	printf("Enter the value of x:\n");
	scanf("%d", &x);
	p=&x;
	printf("The value of x is %d", x);
	printf("\nThe address of x is %u\n", &x);
	printf("The value of x(Pointing by p) is %d\n", *p);
	printf("The address of x (pointing by p) is %d\n", p);
	printf("The address of p is %u\n", &p);
	q=&p;
	printf("The value of x(pointing by q)is %d\n", **q);
	printf("The address of x (pointing by q)is %u\n", *q);
	printf("The address of p(pointing by q) is %u\n", q);
	printf("The adrress of q is %u\n.",   &q);
	return 0;
}
