#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        
        long long sum = n*(n+1)/2;

        long long sum2 = 0;
        long long arr2[100000000];
        for(long long i=0;i<m;i++){
            cin>>arr2[i];
            sum2 = arr2[i]+sum2;
        }


        long long ans = sum-sum2;

        cout<<ans<<endl;

    }
}
