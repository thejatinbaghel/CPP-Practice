// CPP program to remove all the
// characters other than alphabets
#include <bits/stdc++.h>
using namespace std;

// function to remove characters and
// print new string
void removeSpecialCharacter(string s)
{
	for (int i = 0; i < s.size(); i++) {

		if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a'
			|| s[i] > 'z') {
			s.erase(i, 1);
			i--;
		}
	}
	cout << s;
}

// driver code
int main()
{
	string s = "$Gee*k;s..fo, r'Ge^eks?";
	removeSpecialCharacter(s);
	return 0;
}
