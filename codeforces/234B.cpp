
/* Monil Soni sonil06 */
/* DA-IICT  */

#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

typedef long long LL;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pii;

#define MOD 1000000007
#define rep(i,s,n) for(int i=s; i<n; i++)
#define repp(i,s,n) for(int i=s; i<=n; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define CLOCK_INIT clock_t start, stop; double t = 0.0; assert((start = clock())!=-1);
#define CLOCK_END stop = clock(); t = (double) (stop-start)/CLOCKS_PER_SEC; printf("Run time: %f\n", t); 

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k, x;
	scanf("%d %d",&n,&k);
	vector<pair<int, int>> v;
	rep(i,0,n){
		scanf("%d",&x);
		v.push_back(make_pair(x, i+1));
	}
	sort(v.rbegin(), v.rend());
	set<int> s;
	rep(i,0,k){
		s.insert(v[i].S); 
	}
	printf("%d\n",v[k-1].F);
	for(auto it:s){
		printf("%d ", it);
	}
	return 0;
}

