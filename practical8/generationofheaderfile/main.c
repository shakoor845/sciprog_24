/* iterative and recursive versions of Euclid's algorithm 
 * to calculate the gcd of two positive integers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "gcd_random.h"

int main() {

int a, b;
//Generate two number random positive integers between 1 and 20
srand(time(NULL));
a = (rand() % 20) + 1;
b = (rand() % 20) + 1;


printf("IterativeGCD(%d, %d)=%d\n", a, b, iterativeGCD(a, b));
printf("RecursiveGCD(%d, %d)=%d\n", a, b, recursiveGCD(a, b));

return 0;
}


