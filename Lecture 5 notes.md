CS50 Week 5 Lecture notes

A pointer - an address in memory
-> null pointer error

Heap - used when dynamically allocating memory

*a - go to the address of integer a

Array - tends to be defined in terms of size etc up front - what if you want to expand that later =>lists - allowing the computer to determine exactly where in memory the data is stored - but using pointers to link up the elements of the list

Node - data structure in C which has an integer, then a pointer to the next element node

typedef struct node
{
	int n;
	struct node *next;
}
node;

Linked list
- insert
- delete
- search
Need to take account of time taken to conduct these various tasks - always need to start with first element in order to identify remainder of list

Need to retain pointers throughout otherwise you could loose elements eg when inserting new element

Practical implementation: https://video.cs50.net/2016/fall/lectures/5?t=28m15s

Stacks - an efficient way of storing data - no regard for sorting etc - but you have to take top element of the stack first in order to get to anything below it. Suitable for some uses, more later.

Stack = LIFO

typedef struct
{
	int numbers[CAPACITY];
	int size;
}
stack;

CAPACITY is a value defined elsewhere that defines size of the stack

Alternatively for 3rd line of code above:
	int *numbers; 

Gives you a data structure called a stack not limited by some pre-defined limit but just by the computer's memory

Queue = FIFO
Key thing here is to remember where the front of the queue is, and the size of the list - so that the computer can point to the start of the queue at any given time, saves having to move elements around in memory 

typedef struct
{
	int front;
	int *numbers;
	int size;
}
queue;

Another data form - tree - multiple nodes, multiple pointers - appearance of a family tree

Binary search tree - like throwing away half of the phone book each time - quicker search - log(n). But dependent on maintaining of data entered into the tree - works if balanced but otherwise could become unbalanced as data is added - eg 33-44-55-66 - how do you work insert and delete in a tree?

typedef struct node
{
	int n;
	struct node *left;
	struct node *right;
}
node;

Segmentation error - where you have touched or pointed to memory you shouldn't have 

if (tree == NULL) - key check to make sure you are checking something real

Recursion - a function calling itself - works as long as each time you call it you are picking off a smaller piece of the problem and narrowing down towards the answer 

Compression - principle that some letters are more commonly used than others

Morse code - ambiguity without pauses between letters
Huffman coding- eliminates this ambiguity using trees - using as few bits as possible - by identifying which are the most common letters eg E

=> The receiver of a compressed file has to be told the basis of the encoding/compression, so that it knows the tree involved. 

How far can you compress a file without losing information - lossless compression 

typedef struct node
{
	char symbol;
	float frequency;
	struct node *left;
	struct node *right;
}
node;

Searching data - holy grail - to be able to conduct a task eg search with O(1)

Hash tables - possible to achieve constant time? Make initial store of data in buckets eg letters of the alphabet 

Cannot just be a simple array - since each bucket could then only take a single piece of data - extend data structure sideways - hash table contains pointers to a linked list

Linear probing - putting a piece of data into first available slot

Trie - a tree each of whose nodes is an array eg storing names in a dictionary - inserting, removing or searching for a name in this structure is a constant (length of the word) rather than being dependent upon how many other pieces of data are already in the table 




