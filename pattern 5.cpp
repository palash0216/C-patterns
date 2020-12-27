#include <iostream>

using namespace std;

int main()
{int k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=i;j--)
        {cout<<".";}
        
        for(int p=1;p<=i;p++)
        {
            cout<<k<<" ";
            
        }k++;
        cout<<endl;
    }return 0;
}
