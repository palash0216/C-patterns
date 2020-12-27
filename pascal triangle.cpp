#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=7;i++)
    {int k=1;
        for(int j=6;j>=i;j--)
        {
            cout<<" ";
        }
        for(int p=1;p<=i;p++)
        {
            cout<<k<<" ";
            k=k*(i-p)/p;// Main condition.
        }cout<<endl;
    }return 0;
}
