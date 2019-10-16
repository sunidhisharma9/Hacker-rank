#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0)
    {cout<<"Weird";}
    else
    {if(N==2||N==4)
    {cout<<"Not Weird";}
     else if(N>=6&& N<=20)
     {cout<<"Weeeeeird";}
     else if (N>20)
     {cout<<"Not Weird";}
    
    }
    return 0;
    
}
