#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int c=1;c<= (2*n)-1 ;c++){
        cout<<"*";
    }
    cout<<endl;
    for(int c=1;c<= (n-2)/2 ;c++){
        cout<<"*"<<endl ;
    }
    for(int c=1;c<= (2*n)-1 ;c++){
        cout<<"*";
    }
    cout<<endl;
    for(int count=1;count<= (n-2)/2 ;count++){
        for(int c=1;c<= (2*n)-2 ;c++){
        cout<<" ";
        }
    cout<<"*"<<endl;
    }
     for(int c=1;c<= (2*n)-1 ;c++){
        cout<<"*";
    }

}
