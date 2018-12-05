#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=14;
    int b=15;
    cout << "maximum is"<<((a+b)+abs(a-b))/2 << endl;
    cout<<"minimum is"<<((a+b)-abs(a-b))/2;
    return 0;
}
