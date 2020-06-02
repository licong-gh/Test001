#include"iostream"
#include<string>
using namespace std;

int main()
{
	string str;
	int a[10]={0};
	int temp,num;
	cin>>str;
	temp = str.length();
//	cout<<str.length();

	while(temp>0)
	{
		num = str[temp-1] - '0';
//		cout<<num<<" ";
		a[num]++;
		temp--;
	}
	
	for(int i=0;i<10;i++)
	{
		if(a[i]!= 0)
		{
			cout<<i<<":"<<a[i]<<endl;
		}
	}
	return 0;
}

/*
int main()
{
	int a[10]={0};
	int n,temp,num;
	cin>>n;
	temp = n;
	while(1)
	{
		num = temp%10;
		a[num]++;
		if(temp/10 == 0)break; 
		else temp = temp/10;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]!= 0)
		{
			cout<<i<<":"<<a[i]<<endl;
		}
	}
	return 0;	
} 
*/
