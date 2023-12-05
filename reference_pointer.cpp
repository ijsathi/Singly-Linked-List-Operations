#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    // p = NULL;
    // *p = 50;
    cout << p << endl;
}
int main()
{
    int value = 10;
    int *pointer = &value;
    fun(pointer);
    cout << *pointer << endl;
    // cout << value << endl;
    return 0;
}