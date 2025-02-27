#include <bits/stdc++.h>

using namespace std;

const size_t MaxN = 5000000 + 2;
const int Unknown = -1;
vector<short> cache(MaxN, Unknown);

unsigned short steps(unsigned long long x){
    if (x == 1) return 1;
    if (x < cache.size() && cache[x] != Unknown) return cache[x];
    long long next;
    if (x % 2 == 0) next = x / 2;
    else next = 3 * x + 1;

    auto result = 1 + steps(next);
    if (x < cache.size()) cache[x] = result;

    return result;
}

int main(){
    map<unsigned int, unsigned int> longest;
    unsigned int maxTested = 1;
    longest[maxTested] = 1; 
    unsigned int x;
    cin >> x;

    for (; maxTested <= x; maxTested++){ 
        auto length = steps(maxTested);
        if (length >= longest.rbegin()->second)
            longest[maxTested] = length;
    }
    auto best = longest.upper_bound(x);
    best--;

    cout << best->first << endl;
    return 0;
}