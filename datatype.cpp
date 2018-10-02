#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    long int n1;
    char n2;
    float n3;
    double n4;
    cin>>n>>n1>>n2>>n3>>n4;
    cout<<n<<endl;
    cout<<n1<<endl; 
    cout<<n2<<endl;
    cout.precision(3);
    cout<<fixed<<n3<<endl;
    cout.precision(9);
    cout<<fixed<<n4<<endl;
    return 0;
}
