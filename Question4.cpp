#include <iostream>
using namespace std;

int main() {
	int l,b,peri;
    printf ("Enter the length of the rectangle:- ");
    scanf ("%d",&l);
        printf ("\nEnter the breadth of the rectangle:- ");
    scanf ("%d",&b);
    peri=2*(l+b);
    printf ("\nThe perimeter is:- ");
    printf ("%d",peri);
   
	return 0;
}
