#include <bits/stdc++.h>
using namespace std;
#include<stack>

void printNGE(int arr[], int n)
{
	stack<int> s;
	unordered_map<int, int> mp;

	s.push(arr[0]);

	for (int i = 1; i < n; i++)
	{
		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}

		while (s.empty() == false
			&& s.top() < arr[i])
		{
			mp[s.top()] = arr[i];
			s.pop();
		}

		s.push(arr[i]);
	}

	while (s.empty() == false)
	{
		mp[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ---> "
			<< mp[arr[i]] << endl;
}

int main()
{
	int arr[] = { 11, 13,7,55, 21, 3 ,123};
	int n = sizeof(arr) / sizeof(arr[0]);

	printNGE(arr, n);
	return 0;
}
