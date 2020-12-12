
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

using namespace std;

class Node
{
	public:
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int new_data)
{
	Node* node=new Node();
	node->data=new_data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void insertToRoot(Node** root,Node* node)
{
	if(*root==NULL)
	{
		*root=node;
		return;
	}
	Node *curr=*root;
	while(true)
	{
		if(node->data>curr->data)
		{
			if(curr->right==NULL)
			{
				curr->right=node;
				break;
			}
			else
			{
				curr=curr->right;
			}
		}
		else
		{
			if(curr->left==NULL)
			{
				curr->left=node;
				break;
			}
			else
			{
				curr=curr->left;
			}
		}
	}
	return;
}

bool search(Node* root,int num)
{
	Node* curr=root;
	while(curr!=NULL)
	{
		if(curr->data==num)
		{
			return true;
		}
		else if(curr->data>num)
		{
			curr=curr->left;
		}
		else
		{
			curr=curr->right;
		}
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Node* root=NULL;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		Node* node=createNode(num);
		insertToRoot(&root,node);
	}
	int s;
	cin>>s;
	bool result=search(root,s);
	cout<<result<<endl;
	return 0;
}
