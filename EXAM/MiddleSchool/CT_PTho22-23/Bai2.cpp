//author Hieu Soc
//school THPT Hung Hoa
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define file(name)  if (fopen (name".inp", "r") ) { freopen (name".inp", "r", stdin); freopen (name".out", "w", stdout); } else freopen (name".inp", "w", stdin);
#define FL(i,l,r) for (int i=l;i<r;i++)
#define FE(i,l,r) for (int i=l;i<=r;i++)
#define FR(i,r,l) for (int i=r-1;i>=l;i--)
#define FT(x,a) for (auto &x: a)
#define ALL(v) (v).begin(), (v).end()
#define sz(x) (int)(x).size()
#define HaCam int main

const int MaxN = 1e6 + 2;
int Prime[MaxN];
void sieve(int n)
{
	FE(i, 1, n)
		Prime[i] = 0;
	FE(i, 2, n)
		for(int j = i; j <= n; j += i)
				Prime[j]++;
}
HaCam()
{
    fastio;
    int n;
    cin >> n;
    sieve(n);
    int res = 1;
    FL(i, 2, n)
    	if (Prime[i] > Prime[res])
    		res = i;
    cout << res;
    return 0;
}


/**
(((((((((((((((((((((((((((((#%@@@@@@@@@@@@@@@@@@&#(((((((((((((((((((((((((((((
(((((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#((((((((((((((((((((((((
((((((((((((((((((((((%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#((((((((((((((((,,,,,
(((((((((((((((((((#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((((((((/,,,,,,,,,
((((((((((((((((((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%(((*,,,,,,,,,,,,,
((((((((((((((((%@@@@@@@@@@@@@@@@@@#((((((((#&@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#(((((((((((((((((&@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@#(((((((((((((((((((((&&/,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((@@@@@@@@@@@@@@((((((((((((((((((((#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((#@@@@@@@@@@@@@#((((((((((((((((/,,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
(((((((((((((%@@@@@@@@@@@@@(((((((((((((/,,,,,,,,,,,,,,,,,@@@@@@@@@,,@@@@@@@@@,,
(((((((((((((#@@@@@@@@@@@@@#((((((((,,,,,,,,**,,,,,,,,,,,,,,*@@@,,,,,,,,@@@*,,,,
((((((((((((((@@@@@@@@@@@@@@(((/,,,,,,,,,,,,,,,,,*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
((((((((((((((#@@@@@@@@@@@@@@/,,,,,,,,,,,,,,,,,,,,,&@#*,,,,,,,,,,,,,,,,,,,,,,,,,
(((((((((((((((%@@@@@@@@@@@@@@@#,,,,,,,,,,,,,,,,*@@@@@@@@&*,,,,,,,,,,,,,,,,,,,,,
((((((((((((((((#@@@@@@@@@@@@@@@@@@&/,,,,,,*#@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,
((((((((((((((*,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*,,,*,,,,,,,,,,,,,
((((((((((,,,,,,,,,,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/,,,,,,,,,*,,,,,,,,,
#((((/,,,,,,,,,,,,,,,,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%,,,,,,,,,,,,,,,,,*,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@@@@@@@@@@@@(,,,,,,,,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*%@@@@@@@@@@@@@@@@&(,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
**/