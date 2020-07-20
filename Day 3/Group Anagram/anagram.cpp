#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<vector<string> > groupAnagrams(vector<string>& input_set) 
{
	unordered_map<string, vector<string> > my_map;
	vector<vector<string> > final_set;

	for (int i = 0; i < input_set.size(); i++)
	{
		string key = input_set[i];
		sort(key.begin(), key.end());
		my_map[key].push_back(input_set[i]);

	}

	for (auto n : my_map)
	{
		final_set.push_back(n.second);
	}

	return final_set;
}

int main()
{
    vector<string> input_set;
    int t;
    string str;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> str;
        input_set.push_back(str);
    }
    vector<vector<string> > final_set =  groupAnagrams(input_set);
    for (int i = 0; i < final_set.size(); i++)
    {
        if (final_set[i].size() > 0)
        {
            cout << " ( ";
            for (int j = 0; j < final_set[i].size(); j++)
                cout << final_set[i][j] << " ";
            cout << ")";
        }
        cout<<endl;
    }

	return 0;
}