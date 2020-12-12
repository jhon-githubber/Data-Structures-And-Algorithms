#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) 
{
	vector<int> alpha(256,-1);
	int len=0;
    int max=0;
    for(int i=0;i<s.length();i++)
    {
		int x=int(s[i]);
		if(alpha[x]==-1)
		{
			len++;
			alpha[x]=i;
        }
		else
		{
			for(int j=0;j<256;j++)
			{
				if(alpha[j]<alpha[x] && alpha[j]!=-1)
				{
					len--;
					alpha[j]=-1;
				}
			}
			alpha[x]=i;
		}
		//cout<<"len:"<<len<<endl;
		if(len>max)
		{
			max=len;
        }
	}
	return max;
}

int main()
{
	int result=lengthOfLongestSubstring("pwwkew");
	cout<<result<<endl;
	return 0;
}
