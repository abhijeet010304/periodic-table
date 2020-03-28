// CPP program to check for balanced parenthesis.
#include<bits/stdc++.h>
using namespace std;

// function to check if paranthesis are balanced
bool areParanthesisBalanced(string expr)
{
	stack<char> s;
	char x;

	// Traversing the Expression
	for (int i=0; i<expr.length(); i++)
	{
		if (expr[i]=='(')
		{
			// Push the element in the stack
			s.push(expr[i]);
			continue;
		}

		// IF current current character is not opening
		// bracket, then it must be closing. So stack
		// cannot be empty at this point.
		if (s.empty())
		return false;

		switch (expr[i])
		{
		case ')':

			// Store the top element in a
			x = s.top();
			s.pop();
			if (x=='{' || x=='[')
				return false;
			break;

		

		}
	}

	// Check Empty Stack
	return (s.empty());
}

// Driver program to test above function
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
	string expr;
  cin>>expr;

	if (areParanthesisBalanced(expr))
		cout << "Balanced\n";
	else
		cout << "Not Balanced\n";
  }
	return 0;

}
