#include <iostream>
using namespace std;

int main() {
	float r,area,circum,diameter;
    printf ("Enter the radius of the circle:- ");
    scanf ("%f",&r);
    area=3.14*r*r;
    diameter=2*r;
    circum=2*3.14*r;
    printf ("\nThe area is:- ");
    printf ("%f",area);
    printf ("\nThe circumference is:- ");
    printf ("%f",circum);
    printf ("\nThe diameter is:- ");
    printf ("%f",diameter);
    
	return 0;
}
