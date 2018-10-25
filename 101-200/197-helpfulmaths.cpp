#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);

  std::string a;
  cin>>a;

  std::vector<char> v;
  for(int i=0;a[i]!='\0';i++)if(a[i]!='+')v.push_back(a[i]);
  sort(all(v));
  for(int i=0;i<v.size();i++){cout<<v[i];
    if(i!=v.size()-1)cout<<"+";}
	return 0;
}
