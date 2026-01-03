*this project has been created as part of the 42 curriculum by adjelili*

# Description

This project consists of creating a program that sorts a stack of integers using a limited set of operations.  
The goal is to sort the stack using the smallest possible number of operations.

The program works with two stacks and applies specific instructions to move, swap, and
rotate elements in order to achieve an optimized sorting process.

# Instruction

For this project i used an algorithm called the turk algorithm which is a greedy algorithm.
The algorithm works by progressively moving elements between two stacks and always
choosing the move with the lowest immediate cost.  
For each element, the number of required rotations in both stacks is calculated, and
the cheapest move is executed.

Once the remaining elements in stack A are trivially sortable, all elements are pushed
back from stack B to stack A in the correct order, followed by a final alignment.

This algorithm sorts 500 numbers in less than 5500 operations and 100 numbers in less than 700 operations, which is pretty good comparing to other algorihms

## compilation

To use this algorithm you just have to clone the repository then compile it using the tool 'make' in your terminal, this will generate an executable named push_swap.

## run 

Next, to run this program you can either do : 

```c
./push_swap "1 5 88 -47 0" // (with double quotes)
```
Or without it :

```c
./push_swap 1 5 88 -47 0
```
## Notes

Note that the program doesn't accept numbers other than integers and doesn't handle duplicate.
If you try to nothing will happen.

You can also visualize the sorting with this beautiful visualizer :
[visualizer](https://github.com/o-reo/push_swap_visualizer)

# Resources

For this project i needed different resources for different notions

## algorithm and complexity :

[complexity](https://www.geeksforgeeks.org/dsa/complete-guide-on-complexity-analysis/)

[algorithms](https://www.geeksforgeeks.org/dsa/sorting-algorithms/)

[turk algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)

[linked lists and stack](https://www.geeksforgeeks.org/dsa/implementation-of-stack-using-doubly-linked-list/)

[stack](https://www.geeksforgeeks.org/dsa/stack-data-structure/)

## AI

For this project i used Ai for :

understanding how to implement a stack

learning to make a makefile that uses another makefile

debug some things at the end of the project cause it became too hard to debug locally