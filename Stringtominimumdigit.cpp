#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t;
	cin >> t;
	while (t--)
	{
		string s, ss;
		cin >> s;
		map<char, int> mp;

		vector<int> cnt(10, 0);

		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		cnt[0] = mp['z'];
		mp['z'] -= cnt[0];
		mp['e'] -= cnt[0];
		mp['r'] -= cnt[0];
		mp['o'] -= cnt[0];

		cnt[2] = mp['w'];
		mp['t'] -= cnt[2];
		mp['w'] -= cnt[2];
		mp['o'] -= cnt[2];

		cnt[4] = mp['u'];
		mp['f'] -= cnt[4];
		mp['o'] -= cnt[4];
		mp['u'] -= cnt[4];
		mp['r'] -= cnt[4];

		cnt[6] = mp['x'];
		mp['s'] -= cnt[6];
		mp['i'] -= cnt[6];
		mp['x'] -= cnt[6];

		cnt[8] = mp['g'];
		mp['e'] -= cnt[8];
		mp['i'] -= cnt[8];
		mp['g'] -= cnt[8];
		mp['h'] -= cnt[8];
		mp['t'] -= cnt[8];


    	cnt[5] = mp['f'];
    	mp['i']-=cnt[5];
		cnt[7] = mp['s'];
		cnt[1] = mp['o'];
		cnt[3] = mp['h'];
		cnt[9] = mp['i'];

		bool p = 0;

		for (int i = 1; i < 10; i++)
		{
			if (cnt[i])
			{
				cout << i;
				cnt[i]--;
				p = true;
				break;
			}
		}
		if (!p)
		{
			cout << 0 << endl;
			continue;
		}

		for (int i = 0; i < 10; i++)
		{
			while (cnt[i]--)
				cout << i;
		}
		cout << endl;
	}
}

