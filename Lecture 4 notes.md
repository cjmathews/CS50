CS50 Week 4 Memory Lecture Notes

Understanding what makes up a string

Comparison of two entered strings - even if they appear to be the same computer sees them as different (Compare0.c) - seems incorrect intuitively

Swap - function makes its own copies of values; doesn’t affect or alter original values

Reason for anomalies as seen above is to do with the way the computer is allocating and mapping these values in memory

A string is the address in memory of a given value, not a value in itself 

String; a synonym for char * - the address of a char:
char *s = get_string();

New functions:
strcmp - string compare
malloc - memory allocate (a block of memory)
free - opposite or malloc, gives memory back at the end

*= pointer
“*a = *b” go to address of a and set to value found at address of b

Fundamental concept - Pointers to addresses in memory, so rather than making copies of variables, using the pointer to go to the original value and changing that.

Pointer arithmetic: s[i] - Can now replace with *(s+i); i being the value in the for loop through strlen. “Syntactic sugar”

If a pointer doesn’t point to a specific place it is likely to fail - pointer and pointee are seperate, you must set up the pointee
Dereference a pointer to access its pointee (dependent on above step having taken place)
Assignment (=) betwee pointers makes them point to the same pointee

Memory leak - ask for a chunk of memory but then not give it back

Valgrind - memory check on your program 

Stack overflow - danger lies in code over-writing into Return Address, so it now returns to whatever that code says and not necessarily to the original code it was supposed to

Need to check boundaries of what is being entered or written into memory - don’t let someone enter more than you have allocated

