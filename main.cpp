#include <iostream>
using namespace std;

float minimum(float a, float b, float c){
    if (a<b && a<c){
        return a;
    } else if(b<c){
        return b;
    } else return c;
}

float maximum(float a, float b, float c) {
    if (a>b && a>c) {
        return a;}
    else if (a<b && b>c){
        return b;
    } else return c;
}

float median(float a, float b, float c){
    if (a>b && c>b && a<c) {
        return a;
    } else if (b>a && a>c){
        return b;
    } else return c;
}
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    //cout<<minimum(a, b, c)<<endl;
    //cout<<maximum(a, b, c)<<endl;
    cout<<median(a, b, c)<<endl;
    return 0;
}
