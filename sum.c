#include <stdio.h>

int summation (int n) {
    // declare and initialize variables for the middle loop
    int j = 0;
    int sum = 0;
    int temp;

    do {
        // variable for inner loop
        temp = 0;

        // add j 7 times (acts like multiplication)
            do {
                sum += j;
                temp++;
            } while (temp < 7);

        // subtract 10 for each n value
        sum -= 10;

        // increment for the loop
        j++;
        } while (j <= n);
    return sum;
}

int main() {
    // declare and initialize variables for the outer loop
    int n = 10;
    int i = 0;
    int result;

    do {
        // perform the inner loops
        result = summation(i);

        // print out the n value and the resulting sum
        printf("%2d %2x :   %3d   %.8x\n",i,i,result,result);

        // increment for the loop
        i++;
    } while (i <= n);
    return 0;
}
