#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

bool cmp(pair<string, int> p1, pair<string, int>p2) {
	return p1.second <= p2.second;
}

int main() {
	ios_base:: sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, pref_rank, achieved_rank;
	string team_name;

	vector<pair<string, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> team_name >> pref_rank;
		v.push_back(make_pair(team_name, pref_rank));
	}

	sort(v.begin(), v.end(), cmp);

	int total_badness[n], count_badness = 0;
	int i = 0;

	for (auto itr : v) {
		total_badness[i] = abs(itr.second - (i + 1));
		count_badness += total_badness[i];
		i++;
	}

	cout << count_badness << endl;
}
