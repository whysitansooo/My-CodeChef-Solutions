
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        
        
         if(k>=1){
            if(arr[n-1]+k-1>m) {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
    }
}
