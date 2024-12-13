/* What is the difference between a code and an executable file? Describe the steps used to convert a C
 code to an executable file. (Write the necessary gcc command to show the working of the intermediate
 steps
 
 
Difference between Code and Executable File:
Code: Human-readable text written in a programming language (e.g., C), saved in files like .c.
Executable File: Machine-readable binary file generated from the code, which can be directly 
executed by the computer.


Steps to Convert C Code to an Executable File

Preprocessing: The C code is preprocessed to expand macros and include header files.
gcc -E file.c -o file.i
Output: Preprocessed file file.i.


Compilation: The preprocessed file is converted into assembly language.
gcc -S file.i -o file.s
Output: Assembly file file.s.


Assembly: The assembly code is converted into machine code and saved as an object file.
gcc -c file.s -o file.o
Output: Object file file.o.


Linking: The object file is linked with libraries to produce an executable file.
gcc file.o -o executable
Output: Executable file executable.


Alternatively, all steps can be done in a single command:
gcc file.c -o executable
 
 
 
 
 
 
 
 
 
 
 
 
 */


