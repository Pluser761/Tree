#pragma once
#include <iostream>

using namespace std;

class node
{
public:
	int n;
	node *top, *left, *right;
	node();
	~node();
	
	bool operator==(const node&);
	bool operator>(const node&);
	bool operator<(const node&);
};

node::node() {}

node::~node() {}	

bool node::operator==(const node &st)
{
	if (n == st.n) return true;
	else return false;
}

bool node::operator>(const node &st)
{
	if (n > st.n) return true;
	else return false;
}

bool node::operator<(const node &st)
{
	if (n < st.n) return true;
	else return false;
}