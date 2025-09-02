

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=0, b=1;
    if(n==1){
        cout<<a<<" ";
    }
    if(n==2 || n>2){
        cout<<a<<" "<<b<<endl;
    }
    int c;
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
