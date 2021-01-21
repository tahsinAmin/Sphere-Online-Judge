#include <iostream>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int sum = 0;
        if(n !=1){
            sum = 1;
            for(int i = 2; i*i<=n; i++){
                if(n%i==0){
                    sum += (i*i == n)? i : i+n/i;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
