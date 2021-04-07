#include <iostream>
using namespace std;
struct ListNode
{
	int data;
	ListNode *next = nullptr;
};

void ins(ListNode *&k, int a)
{
	if (k == nullptr)
	{
		k = new ListNode{a, nullptr};
		return;
	}
	ins(k->next, a);
}
void adjoin(ListNode *&A, ListNode *&B)
{
	if (A->data >= B->data)
	{
		B->next = A;
		A = B;
		return;
	}
	ListNode *duplicate = nullptr, *tra_A = A;
	while (tra_A->next != nullptr && B->data > tra_A->next->data)
	{
		tra_A = tra_A->next;
		if (tra_A->data == B->data)
		{
			duplicate = tra_A;
			break;
		}
		else if (tra_A->next != nullptr && tra_A->next->data == B->data)
		{
			duplicate = tra_A->next;
			break;
		}
	}
	if (duplicate)
	{
		B->next = duplicate->next;
		duplicate->next = B;
	}
	else
	{
		B->next = tra_A->next;
		tra_A->next = B;
	}
}
void merge(ListNode *&k, ListNode *l)
{
	if (l == nullptr || k == nullptr)
	{
		if (k == nullptr)
		{
			k = l;
		}
		return;
	}
	ListNode *curr = l, *nxt = nullptr;
	while (curr)
	{
		nxt = curr->next;
		adjoin(k, curr);
		curr = nxt;
	}
}
int main()
{
	ListNode *s = nullptr, *r = nullptr;
	int a[] = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10}, b[] = {-1, -2, 6, 11, 12};
	for (int i : a)
	{
		ins(s, i);
	}
	for (int i : b)
	{
		ins(r, i);
	}
	merge(s, r);
	while (s)
	{
		cout << s->data << ' ';
		s = s->next;
	}
}
