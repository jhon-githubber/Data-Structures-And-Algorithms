#include<iostream>
#include<vector>
#define vint vector<int>
#define ll long long

using namespace std;

void Merge(vint &arr,int start,int middle,int end)
{
	/*cout<<start<<" "<<middle<<" "<<end<<endl;
	for(int i=start;i<end;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;*/
	vint new_arr(end-start);
	int x=start;
	int y=middle;
	int z=0;
	while(x<middle && y<end)
	{
		if(arr[x]>arr[y])
		{
			new_arr[z++]=arr[y++];
		}
		else
		{
			new_arr[z++]=arr[x++];
		}
	}
	if(x==middle && y!=end)
	{
		while(y!=end)
		{
			new_arr[z++]=arr[y++];
		}
	}
	if(x!=middle && y==end)
	{
		while(x!=middle)
		{
			new_arr[z++]=arr[x++];
		}
	}
	for(int i=start;i<end;i++)
	{
		arr[i]=new_arr[i-start];
		//cout<<arr[i]<<" ";
	}
	//cout<<endl;
	return;
}

void MergeSort(vint &arr,int start,int end)
{
	if(end<=start)
	{
		return;
	}
	//cout<<start<<" "<<end<<endl;
	if(end-start==1)
	{
		return;
	}
	int middle=(end+start)/2;
	MergeSort(arr,start,middle);
	MergeSort(arr,middle,end);
	Merge(arr,start,middle,end);
	return;
}

int main()
{
	int n;
	cin>>n;
	vint arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	MergeSort(arr,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
