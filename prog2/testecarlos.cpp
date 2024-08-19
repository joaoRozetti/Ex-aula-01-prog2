#include <iostream>

using namespace std;
int soma(int, int);
int soma(int a, int b)
{
    return a + b;
}
int main()
{
    int c, d, e;
    cin >> c >> d;
    e = soma(c, d);
    cout << e << endl;
}