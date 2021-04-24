# Stack

## Stack is an important and a very efficient Data Structure that has features:-
 + Insertion(push)
 + Deletion(pop)
 + Both of these operations are done in O(1) constant time

## Reversing a stack
```cpp
void reverse(stack<int> &p)
{
    if (p.empty())
        return;
    int temp = p.top();
    p.pop();
    reverse(p);
    p.push(temp);
}
```
