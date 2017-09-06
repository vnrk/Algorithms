#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

vector < int > stringSimilarity(vector < string > inputs) {
	vector<int> results;
	for (int k = 0; k < inputs.size(); ++k) {
		string s = inputs[k];
		int total = s.length();
		int n = s.size();

		vector<int> z(n);
		z[0] = 0;
		for (int i = 1, l = 0, r = 0; i < n; ++i) {
			z[i] = 0;
			if (i <= r) z[i] = min(z[i - l], r - i + 1);
			while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
			if (i + z[i] - 1 > r) {
				l = i;
				r = i + z[i] - 1;
			}
			total += z[i];
		}
		results.push_back(total);
	}
	return results;
}

int main() {
	int cases; scanf("%d", &cases);
	string s;
	cin >> s;
	vector<string> v;
	vector<int> r;
	v.push_back(s);
	while (cases--) {
		r = stringSimilarity(v);
	}
	return 0;
}