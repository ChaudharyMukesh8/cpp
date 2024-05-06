#include<iostream>
using namespace std;
class Inherit
{
    public:
    int add(int a, int b)
    {
        cout << a + b<< endl ;
        return 0;
    }
    int add(int a, int b, int c)
    {
        cout << a + b + c << endl;
        return 0;
    }
    int add (int a , int b, int c,int d)
    {
        cout << a + b + c + d<< endl;
    }
};
int main()
{
    Inherit x;
    x.add(5,6);
    x.add(3,4,7);
    x.add(4,8,9);
}