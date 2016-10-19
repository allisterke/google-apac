#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <condition_variable>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <mutex>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <ratio>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

int main() {
	int T, R, C;
	cin >> T;

	for(int i = 1; i <= T; ++ i) {
		cin >> R >> C;
		if(R < C) {
			swap(R, C);
		}

		int count = 0;

		if(C == 2) {
			count = (R - R/3) * 2;
		}
		else {
			int j = 1;
			for(; j <= C; ++ j) {
				if(j % 3) {
					count += j;
				}
			}

			for(; j <= R; ++ j) {
				if(j % 3) {
					count += C;
				}
			}

			for(int last = C-1; last >= 1; -- last, ++ j) {
				if(j % 3) {
					count += last;
				}
			}
		}

		printf("Case #%d: %d\n", i, count);
	}
    return 0;
}
