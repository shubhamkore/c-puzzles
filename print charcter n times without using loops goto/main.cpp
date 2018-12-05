#include <iostream>

using namespace std;
void printn(char c,int n)
{
    cout<<string(n,c);
}

int main()
{
    int n=6;
    char c= 'G';
    printn(c,n);
    return 0;
}
