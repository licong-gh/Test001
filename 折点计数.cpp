#include"iostream"
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int i,num=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}	
	for(i=0;i<n;i++){
		if(i >= 1&& i <= (n-2)){
			if(a[i-1]>a[i]&&a[i+1]>a[i]){
				num++;
			}
			else if(a[i-1]<a[i]&&a[i+1]<a[i]){
				num++;
			}
		}
	}
	cout<<num;
	return 0;
} 
