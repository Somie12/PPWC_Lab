/*

Describe the functions of break and continue statements within loops. Illustrate their applica
tions in various programming contexts

The break and continue statements control the flow of loops in programming.

Break Statement: The break statement is used to exit a loop immediately, regardless of the loop's condition. 
This is useful when a specific condition is met, and further iterations are unnecessary.

for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Exit loop when i is 5
    }
    printf("%d ", i); // Output: 0 1 2 3 4
}



Continue Statement: The continue statement skips the current iteration and proceeds to the next 
iteration of the loop. This is helpful when you want to ignore certain conditions 
and continue processing the remaining items.

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue; // Skip even numbers
    }
    printf("%d ", i); // Output: 1 3 5 7 9
}






*/