**Write a recursive function named collapseSequences that accepts a string s and char c as parameters and returns a new string that is the same as s but with any sequences of consecutive occurrences of c compressed into a single occurrence of c. For example, if we collapse sequences of character 'a' in the string "aabaaccaaaaada", you get "abaccada".**

**Your function is case-sensitive; if the character c is, for example, a lowercase 'f', your function should not collapse sequences of uppercase 'F' characters. In other words, you do not need to write code to handle case issues in this problem.**

**The following table shows several calls and their expected return values:**

**Call	Returns
collapseSequences("aabaaccaaaaaada", 'a')	"abaccada"
collapseSequences("mississssipppi", 's')	"misisipppi"
collapseSequences("babbbbebbbxbbbbbb", 'b')	"babebxb"
collapseSequences("palo alto", 'o');	"palo alto"
collapseSequences("tennessee", 'x')	"tennessee"
collapseSequences("", 'x')	""
Constraints: Do not declare any global variables. Do not use any loops; you must use recursion. Do not call any of the following string member functions: find, rfind, indexOf, contains, replace, split. (The point of this problem is to solve it recursively; do not use a library function to get around recursion.) Do not use any auxiliary data structures like Vector, Map, Set, array, etc. You can declare as many primitive variables like ints as you like, as well as strings. You are allowed to define other "helper" functions if you like; they are subject to these same constraints.**
  
