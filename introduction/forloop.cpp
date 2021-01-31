#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 string a[12]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    int c,b;
    cin>>c>>b;
    
    for(int i=c;i<=b;i++)
    {
        if((i>9) && (i%2==0)){  
         cout<<a[0]<<endl;}
        else if((i>9) && (i%2!=0)) {
         cout<<a[1]<<endl;}
        else{
         cout<<a[i+1]<<endl;}
    }
    return 0;
}
    
    
