#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t my_time=time(NULL);
    cout <<ctime(&my_time)<< endl;
    return 0;
}
