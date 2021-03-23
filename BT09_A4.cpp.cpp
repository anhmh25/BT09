#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    int* p2 = new int;
    p2 = &p;
    //Không delete được p2 ????
    delete p2;
    cout << p;
    return 0;
}