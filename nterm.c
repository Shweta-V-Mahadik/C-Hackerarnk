#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;

    // For n > 3, calculate the nth term using the previous three terms
    int term1 = a, term2 = b, term3 = c, term;
    for (int i = 4; i <= n; ++i) {
        term = term1 + term2 + term3; // Example sequence rule, can be changed
        term1 = term2;
        term2 = term3;
        term3 = term;
    }
    return term;
}
    


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
