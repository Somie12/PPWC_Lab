#include<stdio.h>

// Code Snippet 1
int main(){
    float x = 25.0, y = 10.0;
    if(y != (x - 10.0))
        x = x - 10.0;
    else
        x = x / 2.0;
    // Output: No output (no print statement)
    return 0;
}

/*
Explanation: The condition y != (x - 10.0) evaluates to false (10.0 is equal to 15.0).
Therefore, x is set to x / 2.0, but since there is no print statement, nothing is displayed.
*/

// Code Snippet 2
int main(){
    float x = 25.0, y = 10.0;
    if(y < 15.0)
        if(y >= 0.0)
            x = 5 * y;
        else
            x = 2 * y;
    else
        x = 3 * y;
    // Output: No output (no print statement)
    return 0;
}

/*
Explanation: The condition y < 15.0 is true, and since y >= 0.0 is also true, x is set to 5 * y (which equals 50.0).
However, there is no print statement, so nothing is displayed.
*/

// Code Snippet 3
int main(){
    int i = 0;
    while (i <= 5) {
        printf("%3d %3d\n", i, 10 - i);
        i = i + 1;
    }
    return 0;
}

/*
Output:
  0  10
  1   9
  2   8
  3   7
  4   6
  5   5

Explanation: The loop iterates from i = 0 to i = 5, printing i and 10 - i in each iteration.
*/

// Code Snippet 4
int main(){
    int i = 1;
    while () { // This line has a syntax error
        printf("%d ", i++);
        if(i > 10)
            break;
    }
    return 0;
}

/*
Output: Compilation error.

Explanation: The condition in the while loop is missing, resulting in a syntax error.
*/

// Code Snippet 5
int main() {
    int i, j, n = 5;
    for(i = 1, j = 1; j <= n; i += 2, j++) {
        printf("%d%d\n", i, j);
    }
    return 0;
}

/*
Output:
11
13
15
17
19

Explanation: The loop runs 5 times, incrementing i by 2 each time, starting from 1.
It prints the values of i and j in each iteration.
*/

// Code Snippet 6
int main() {
    int count = 11;
    while (--count + 1);
    printf("count down is %d \n", count);
    return 0;
}

/*
Output:
count down is 0 

Explanation: The loop decrements count until it reaches 0. The loop condition becomes false when count is 0,
and then it prints the final value of count.
*/

// Code Snippet 7
int main() {
    int m, n;
    for (m = 9; m > 0; --m)
        for (n = 6; n > 1; --n)
            printf("#########\n");
    return 0;
}

/*
Output:
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########
#########

Explanation: The outer loop runs 9 times (for m from 9 to 1), and for each iteration of m,
the inner loop runs 5 times (for n from 6 to 2), resulting in 45 lines of #########.
*/

// Code Snippet 8
int main(){
    int i = 2;
    switch(i) {
        default: printf("Hello ");
        case 1: printf("Hello ");
        case 2:
        case 3: printf("Hello ");
    }
    return(0);
}

/*
Output:
Hello Hello 

Explanation: The switch statement starts with i = 2. It does not match case 1, so it goes to the default case,
printing "Hello ". Then it falls through to case 2, printing "Hello " again.
*/

// Code Snippet 9
#include <stdio.h>
int main() {
    int i = 0;
    while(i++) {
        printf("%d ", i);
        if (i > 2)
            break;
    }
    return (0);
}

/*
Output:
1 2 

Explanation: The loop starts with i = 0 and increments i in the condition of the while loop.
It prints the value of i after incrementing it. The loop continues until i exceeds 2, at which point it breaks.
*/

// Code Snippet 10
#include<stdio.h>
int main() {
    int a = 10;
    if(a = 0) {
        printf("%d %d", sizeof(2.3f), sizeof(2.3));
    }
    return(0);
}

/*
Output: No output (the condition is always false).

Explanation: The condition a = 0 assigns 0 to a, which evaluates to false. Therefore, the printf statement is never executed.
Note: This is a common mistake where '=' is used instead of '==' for comparison.
*/
