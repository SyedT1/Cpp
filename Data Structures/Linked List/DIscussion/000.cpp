#include <iostream>
using namespace std;
struct list
{
	int value;
	list *next = nullptr;
};
void ins(list *&head, int m)
{
	/*
	int const * const
	conster pointer to constant int 
	Example = 
	const int x = 10
	const int *p = &x;
	const int y = 20;
	p = &y; // works
	*p = 200; 
	right to left analysis
	const type var = won't let me remodify value
	const type pointer var = will not let me remodify the value stored in the address
	const type pointer const var = will not let me remod the address let alone the value

	*/
	if (head == nullptr)
	{
		head = new list{m, nullptr};
		return;
	}
	ins(head->next, m);
}
void rev_list(list *&l)
{
	if (l == nullptr)
	{
		return;
	}
	// 1 2 3 4 nullptr
	list *prev = nullptr, *curr = l, *nxt = nullptr;
	while (curr)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	l = prev;
}
void print(list *k)
{
	if (!k)
	{
		return;
	}
	cout << k->value << ' ';
	print(k->next);
}
int main()
{
	list *head = nullptr;
	int ar[] = {1, 2, 3, 4, 5};
	for (int i : ar)
	{
		ins(head, i);
	}
	rev_list(head);
	print(head);
}
