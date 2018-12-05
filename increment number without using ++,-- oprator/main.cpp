#include <iostream>

using namespace std;
int incr(unsigned int i )
{
    i=-(~i);
    return i;
}
int main()
{
    int i=3;
    cout << "after increment - " <<incr(i)<<endl;
    return 0;
}
