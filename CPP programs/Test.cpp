#include<iostream>
#include<vector>
#define ll long long
#define vint vector<int>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	vint arr(n);
	int sum=0;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}

	cout<<sum<<endl;

	return 0;
}