# Unexpected Variable Value After Pointer Modification

This repository demonstrates a common C programming error related to pointer arithmetic and the unexpected behavior of variables when modified indirectly through pointers. The code showcases how changing a variable's value through a pointer does not directly update other variables that initially point to the same memory location if they're not accessed through the pointer again.

## Bug Description

The `bug.c` file shows a scenario where changing the value via the pointer alters the value only when accessed through that pointer and any other reference of the variable doesn't reflect the change unless accessed through the pointer again after modification.

## Solution

The `bugSolution.c` file is not strictly necessary to address the bug, as the bug isn't a syntactical or compile-time error. However, the file serves as a reminder about explicitly updating the values or using different variables if you expect consistent updates throughout your program.