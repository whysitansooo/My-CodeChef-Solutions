#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k,p;
        cin>>n>>x>>k>>p;

        if(k>0){

            for(int i=1;i<=k && i<=x;i++){
                p = p+10;
            }
            
            for(int i=1;i<=k-x;i++){
                p = p + 5;
            }

        }
        if(n==k) p=p+20;
        cout<<p<<endl;
    }
}
