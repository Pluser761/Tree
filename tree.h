#pragma once
#include <iostream>
#include "node.h"

using namespace std;

class tree
{
private:
	node *start;
public:
	tree(int);
	~tree();
	void push(node&);
	void pop(node&);
};

tree::tree(int x)
{
	start->n = x;
}

tree::~tree() {}

void tree::push(node &x)
{
	node *current = start;
	while (current != nullptr)
	{
		if (x == *current)
		{
			cout << "Already added\n";
			return;
		}
		if (x > *current) current = current->right;
		else current = current->left;
	}
	if (x > *current->top) *current->top->right = x;
	else *current->top->left = x;
	x.top = current;
	cout << "Just added\n";
}

void tree::pop(node &x)
{
	node current;
	while ( !( current == x ) )
	{
		if (x > current) current = *current.right;
		else current = *current.left;
	}

}