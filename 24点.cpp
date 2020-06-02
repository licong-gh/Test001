#include<iostream>
#include<stack> 
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
	stack<char> st1;
	stack<int> st2;
	
	int n,i;
	char str[10];
	cin>>n;
	getchar();
	for(i = 0;i < n;i++)
	{
		gets(str);
		while(!st1.empty()) st1.pop();
		while(!st2.empty()) st2.pop();
		int j=0;
		while(j < strlen(str))
		{
			if(str[j]>'0' && str[j]<='9')
			{
				st2.push(str[j]-'0');
			}
			else
			{
				if(str[j] == '+')
				{
					st1.push('+');
				}	
				else if(str[j] == '-')
				{
					st2.push((-1)*(str[j+1]-'0'));
					st1.push('+');
					j++;
				}
				else if(str[j] == 'x')
				{
					int num = st2.top();
					st2.pop();
					st2.push(num*(str[j+1]-'0'));
					j++;
				}
				else if(str[j] == '/')
				{
					int num = st2.top();
					st2.pop();
					st2.push(num/(str[j+1] - '0'));
					j++;
				}
			}
			j++;
		}
		while(!st1.empty())
		{
			int num1 = st2.top();
			st2.pop();
			int num2 = st2.top();
			st2.pop();
			st1.pop();
			st2.push(num1+num2);
		}
		int add = st2.top();
		if(add == 24)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
} 

/*
int main()
{
	stack<char> st1;
	stack<int> st2;

	int n,i;
	char str[10];
	cin>>n;
	getchar(); 
	for(i=0;i<n;i++) {
		gets(str);
		while(!st1.empty()) st1.pop();
		while(!st2.empty()) st2.pop();
		int j=0;
		 while(j < strlen(str))
		 {
		 	if(str[j]>'0' && str[j] <= '9'){
		 		st2.push(str[j]-'0');
			 }
			 else{
			 	if(str[j] == '+'){
			 		st1.push('+');
				 }
				 else if(str[j] == '-') {
				 	st2.push((-1)*(str[j]-'0'));
					st1.push('+');
					j++;			
				 }
				 else if(str[j] == 'x') {
				 	int num = st2.top();
					 st2.pop();
					 st2.push(num * (str[j+1]-'0'));
					 j++; 
				 }
				 else if(str[j] == '/') {
				 	int num = st2.top();
				 	st2.pop();
				 	st2.push(num / (str[j+1] - '0'));
				 	j++;
				 } 
			 }
			 j++;
		 }
		 while(!st1.empty()){
		 	int num1 = st2.top();
		 	st2.pop();
		 	int num2 = st2.top();
		 	st1.pop();
		 	st2.pop();
		 	st2.push(num1+num2);
		 }
		 int add = st2.top();
		 if(add == 24){
		 	cout<<"Yes"<<endl;
		 }
		 else cout<<"No"<<endl;
	}
	return 0;
} 
*/
