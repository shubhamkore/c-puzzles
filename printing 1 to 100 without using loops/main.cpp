#include <iostream>

using namespace std;

int main()
{
    int i=0;
    begin:
        i=i+1;
    cout << i << endl;
    if(i<100)
        goto begin;
    return 0;
}
