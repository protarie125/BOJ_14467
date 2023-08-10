#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	vi cs(10, -1);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	while (0 < (n--)) {
		int a, b;
		cin >> a >> b;
		--a;

		if (-1 == cs[a]) {
			cs[a] = b;
		}
		else {
			if (cs[a] != b) {
				++ans;
				cs[a] = b;
			}
		}
	}

	cout << ans;

	return 0;
}