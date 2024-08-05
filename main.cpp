#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;
  ll y, m, d;
  {
    auto iss = istringstream{s.substr(0, 4)};
    iss >> y;
  }
  {
    auto iss = istringstream{s.substr(5, 2)};
    iss >> m;
  }
  {
    auto iss = istringstream{s.substr(8, 2)};
    iss >> d;
  }

  if (m < 9) {
    cout << "GOOD";
    return 0;
  }

  if (9 == m) {
    if (d <= 16) {
      cout << "GOOD";
      return 0;
    }
  }

  cout << "TOO LATE";

  return 0;
}