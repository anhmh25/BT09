#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* s1, const char* s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int count = 0;
    char* ptr = new char[n1+n2];
    while(n1--) {
        *(ptr + count) = *(s1 + count);
        count++;
    }
    count = 0;
    while (n2--) {
        *(ptr + strlen(s1) + count) = *(s2 + count);
        count++;
    }
    *(ptr + strlen(s1) + strlen(s2)) = NULL;
    return ptr;
}

int main()
{
    const char* s1 = "Helloeverybody";
    const char* s2 = "todayIfeelsogood!";
    cout << concat(s1, s2);
    return 0;
}