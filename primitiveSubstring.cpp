/*  
 The input string is “(()())(())()” can be decomposed into primitive susbstrings “(()())” + “(())”+”()”. 
 After removing outermost parentheses of each priiimitive substrings, the string obtained is “()()” + “()” = “()()()”
*/
#include <bits/stdc++.h>
using namespace std;

// Function to remove the outermost
// parentheses of every primitive
// substring from the given string
string removeOuterParentheses(string S){

	// Stores the resultant string
	string res;

	// Stores the count of
	// opened parentheses
	int count = 0;

    int s = S.size();
	// Traverse the string
	for (int i=0;i<s;i++) {

		// If opening parenthesis is
		// encountered and their
		// count exceeds 0
		if (S[i] == '(' ){   
            
            if(count > 0){  
			// Include the character
			res += S[i];   
            }

			count++;  
        }

		// If closing parenthesis is
		// encountered and their
		// count is less than count
		// of opening parentheses
		if (S[i] == ')'){

			if(count>1){  
			// Include the character
			res += S[i];  
			}

			count--;  
		}
	}

	// Return the resultant string
	return res;
}

// Driver Code
int main()
{
	string S = "(()())(())()";
	cout << removeOuterParentheses(S);
}
