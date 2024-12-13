/* 

Question:
What is the purpose of the break statement within a switch case, and can a switch 
case work without it? Provide an example.

Answer:
The break statement in a switch case is used to terminate a case and prevent the execution from 
falling through to subsequent cases. A switch case can technically work without break, 
but it will execute all subsequent cases until it encounters a break or the end of the switch.

Example:
switch (value) {
    case 1:
        printf("One\n");
        // No break here
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
}


Output:
If value is 1, the output will be:
One
Two



*/