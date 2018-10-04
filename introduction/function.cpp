#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{ if(a>b& a>c & a>d)
{return a;}
if(b>a & b>c & b>d)
{return b;}
 if(c>a & c>b & c>d)
 {return c;}
 else
 {return d;}
}
int main() {
    printf("Enter 4 integers:\n");
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The largest of four");
    printf("%d", ans);
    
    return 0;
}
