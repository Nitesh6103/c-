#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++){
    char ch ='A';
    
       for(int j=0;j<n;j++){
    
    cout<<ch<<" ";
    ch=1+ch;
}
cout<<endl;
    }
 
    return 0;
}
#include <iostream>
using namespace std;
int main()
{ int numbers=1;
    int n = 3;
    for (int i = 0; i < n; i++){
    for(int j=0;j<n;j++){
        cout<<numbers<<" ";
        numbers++;
    }
    cout<<endl;
    }
 
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        char ch = 'a';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = 1 + ch;
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
   {
     for(int j=0; j<i+1;j++){
        cout<<"*";
     }
     cout<<endl;
   }
    return 0;
}
