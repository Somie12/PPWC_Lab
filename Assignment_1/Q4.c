/* What does scanf() function returns. Explain the possible return values with examples.


The scanf() function in C returns the number of input items successfully matched and assigned.
 This can help determine if the input was processed correctly.

Possible Return Values:
Positive Integer: If scanf() successfully reads and assigns values, it returns the count 
of successfully assigned items. For example:

int a;
int result = scanf("%d", &a); // If the user inputs "5"
// result will be 1, as one integer was successfully read.



Zero: If scanf() fails to match any input (e.g., the user inputs a non-integer when 
expecting an integer), it returns 0:

int a;
int result = scanf("%d", &a); // If the user inputs "abc"
// result will be 0, as no integer was read.




EOF (End of File): If scanf() encounters an end-of-file condition or an 
input error before any items are matched, it returns EOF, which is typically defined as -1:

int a;
int result = scanf("%d", &a); // If input is interrupted or reaches EOF
// result will be EOF, indicating an error or end of input.
In summary, the return value of scanf() can be a positive integer, zero, or EOF, indicating the number of successful assignments, failure to match any input, or an input error, respectively.





*/