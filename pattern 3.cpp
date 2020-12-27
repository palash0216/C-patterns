#include <iostream>
using namespace std;
int main()
{int num=65;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch = char (num);
            cout<<ch;
             num=num+1;
        
        }
       cout<<endl;
    }return 0;
}