#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long L,R,n;
        cin>>L>>R;


        if(L<R){
            n = (R-L+1);
        }
        else if(L>R){
            n=(L-R+1); 
        }

        //long long n =abs(R - L + 1);
        long long first_term = L;
        long long last_term = R;
        long long sum = (n * (first_term + last_term)) / 2;
        

        cout<<sum<<endl;
    }
}