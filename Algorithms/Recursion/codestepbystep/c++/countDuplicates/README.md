Write a recursive function named countDuplicates that accepts a reference to a stack of integers as its parameter and returns a count of the total number of duplicate elements in the stack. You may assume that the stack's contents are a sorted collection of non-negative integers, and therefore that all duplicate values will be stored consecutively in the stack. For example, given a stack named myStack containing the following elements:  


**bottom**                                                              **top**  

{1, 3, 4, **7, 7, 7, 7**, **9, 9**, 11, 13, **14, 14, 14**, **16, 16**, 18, **19, 19, 19**}
In the above example, there are **9 total duplicate values** (underlined for clarity): **three 7s, a 9, two 14s, a 16, and two 19s**. So the call of countDuplicates(myStack); should return 9. Notice that there might be several duplicates in a row, as with 7, 14, and 19.  


Your function should not make any externally visible changes to the stack passed in. That is, you should either not modify the stack passed, or if you do modify it, you must restore it back to its exact original state before your overall function returns.  


**Constraints:**  


Do not use any loops; you must use recursion.
Do not create or use any auxiliary data structures like additional Queues, Stacks, Vector, Map, Set, array, strings, etc. You should also not call functions that return multi-element regions of a vector, such as sublist.
Do not solve this problem using "string hacks" related to the toString result of a Stack, such as by calling toString() and then searching for commas or other patterns.
Do not declare any global variables. You can declare as many primitive variables like ints as you like.
Your solution should run in no worse than O(N) time, where N is the number of elements in the stack.
You are allowed to define other "helper" functions if you like; they are subject to these same constraints.
