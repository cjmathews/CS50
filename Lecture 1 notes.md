                          
## C                    
- Function: name(argument);                      
- Variable: int name = 0; where int is telling computer what type of variable you are using                           
- Increase value: counter = counter + 1; where = is setting the new value of the variable                          
- Or us shorthand: counter += 1;                          
- If condition:                           
                          
```                          
If (condition)                          
{                          
	function(argument);                          
}                          
```                          
Or if else:                        
                  
```                          
If (condition)                          
{                          
	function(argument);                          
}                          
else                          
{                          
	function(alternative);                          
}                          
```                        
Similar approach can be taken with else if - could end up with layered if conditions                        
- Loop:                     
                  
```                        
//repeat while condition is true                        
while (condition evaluated)                        
{                        
	function(argument);                        
}                        
```                        
```                        
//repeat for a number of repititions                        
for (counter)                        
{                        
	function(argument);                        
}                        
                        
```                        
eg:                        
              
```                        
for (int=0; i<50; i++)                        
{                        
	function(argument);                        
}                        
```                        
- User input:                        
get_string(ask for input)                        
Eg:                        
              
```                        
string answer = get_string(ask for input\n);                        
printf("Hello %s", answer);                        
```                        
Placeholders are evaluated from left to right, comma separated                        
                        
Compiling and running source code:                        
CS50 Sandbox                        
`$ clang filename.c                        
`$ ./a.out                        
Command line arguments:                        
`$ clang -o hello hello.c                        
`$ make hello                        
                        
Note that string is not a natural variable type within C - included in cs50.h                        
So:                        
              
```                        
#include <stdio.h>                        
                        
int main(void)                        
{                        
    string name = get_sting("What is your name?\n;")                        
    printf("Hello, name\n");                        
}                        
                        
```                        
Fails as doesn't identify string                        
                        
In same way stdio.h includes printf function                        
                        
Storing numbers:                        
Int = Integer (so no decimals)                        
Float = Floating point allows decimals, but may lead to some unexpected results - floating point imprecision                        
                        
### Making your own function                         
              
```                        
Void cough(void)                        
{                        
	printf("cough\n");                        
}                        
```                        
Setting up function in this way to start with means it is including no arguments or inputs up front                        
                        
By including the first line from above -                         
                        
```                        
void cough(void);                         
```                        
at the start of your programme the function itself can then be placed at the end - allows main func to kick from the top                        
                        
By declaring the function eg void cough(int n) then it will be expecting a value as an input - allows function to contain the complexity and the program can retain core elements                        
                        
When declaring a variable, watch out for when you do so - if you declare it within {} eg of a loop, it won't be available outside them. Instead if you need to use that variable anywhere else you need to declare it ahead and then use when ready.                        
                        
Integer overflow - when you cannot carry the next digit - ie how high can you count when you are counting in 32 bits (allows you to count up to just over 4 bn                        
                        
Integer undertow - when you go < 0 in binary, so 0 - 1 becomes 255 if you don't find a way to code for it                        
                        
_                  
                  
