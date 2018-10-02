#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Complete the program
    string stfirst,stSecond;
    cin>>stfirst>>stSecond;
    cout<<stfirst.size()<<" "<<stSecond.size();  
    cout<<endl<<stfirst + stSecond;
    char ch = stSecond[0];
    stSecond[0] = stfirst[0];
    stfirst[0] =ch;
    cout<<endl<<stfirst <<" " <<stSecond;
    return 0;
}
