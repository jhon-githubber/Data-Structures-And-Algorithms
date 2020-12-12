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

class Node
{
public:
	int data;
	Node* next;
};

void append(Node** head,int new_data)
{
	Node* node=new Node();
	node->next=NULL;
	node->data=new_data;
	if(*head==NULL)
	{
		*head=node;
		return;
	}
	Node* last=*head;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=node;
	return;
}

void print(Node* head)
{
	Node* node=head;
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
	cout<<endl;
	return;
}

void reverse(Node** head)
{
	Node* curr=*head;
	Node* move=curr->next;
	curr->next=NULL;
	while(move!=NULL)
	{
		Node* temp=move->next;
		move->next=curr;
		curr=move;
		move=temp;
	}
	*head=curr;
	return;
}

void solve()
{
	int n;
	cin>>n;

	Node* head=NULL;

	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		append(&head,num);
	}
	print(head);
	reverse(&head);
	print(head);
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
