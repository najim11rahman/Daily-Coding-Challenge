#include <bits/stdc++.h>

using namespace std;

char recurring(string &str){
	unordered_set<char> hash;
	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (hash.find(c)!=hash.end())
		{
			return c;
		}
		else{
			hash.insert(c);
		}
	}
	return '\0';
}

		
int main()
{
        string str;
	cin >> str;
	cout << recurring(str);
	return 0;
}
