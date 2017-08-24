#include <iostream>
using namespace std;

int main() {
	int n1,n2,sub,sum,mult,mod,divide;
	
    printf ("Enter the first number:- ");
    scanf ("%d",&n1);
        printf ("\nEnter the second number:- ");
    scanf ("%d",&n2);
    sum=n1+n2;
    sub=n1-n2;
    mult=n1*n2;
    divide=n1/n2;
    mod=n1%n2;
    printf ("\nThe sum is:");
    printf ("%d",sum);
    printf ("\nThe difference is:");
    printf ("%d",sub);
    printf ("\nThe product is:");
    printf ("%d",mult);
    printf ("\nThe quotient is:");
    printf ("%d",divide);
    printf ("\nThe remainder is:");
    printf ("%d",mod);
    
    
	return 0;
}
