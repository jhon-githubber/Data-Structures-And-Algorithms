#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include<algorithm>
#include<string>
#include<map>
#include<bitset>
#include<cmath>
#define vint vector<int>
#define ll long long
#define mod 1000000007
#define vll vector<long long>
#define ld long double
#define mii map<int,int>
#define miv map<int,vector<int>>

using namespace std;

void quicksort(vint &arr,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int pivot=arr[end];
	int insert=start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			int temp=arr[i];
			arr[i]=arr[insert];
			arr[insert]=temp;
			insert++;
		}
	}
	int temp=arr[end];
	arr[end]=arr[insert];
	arr[insert]=temp;

	quicksort(arr,start,insert-1);
	quicksort(arr,insert+1,end);
}

void solve()
{
	cout<<"Done"<<endl;
	int n;
	cin>>n;
	vint arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t=1;
	while(t--)
	{
		solve();
	}
	return 0;
}
