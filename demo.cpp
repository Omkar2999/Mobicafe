#include <bits/stdc++.h>
using namespace std;
int main()
{
	
    int n;
    cin>>n;
	int a[n];
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			if(sqrt(a[j])==a[k]){
				cout<<a[k]<<" "<<a[j]<<" ";
				int ans= a[k]*a[k]*a[k];
				for(int l=0;l<n;l++){
					if(a[l]==ans){
						cout<<a[l];
					}
				}
                cout<<endl;
			}
		}
	}

	return 0;
}