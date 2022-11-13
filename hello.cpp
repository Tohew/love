#include<iostream>

using namespace std;

int nhap(int&);

int main()
{
    int n;
    nhap(n);
    cout << "hello hi ihi" << n;
    return 0;
}
int nhap(int &n)
{
    cout << "Nhap n: ";
    cin >> n;
}