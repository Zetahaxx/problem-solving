#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;++i)
    {
        string x;
        int type, y;
        cin>>type>>x;
        switch(type){
            case 1:
            cin>>y;
            m[x]+=y;
            break;
            case 2:
            m.erase(x);
            break;
            case 3:
            cout<<m[x]<<"\n";
        }

    }
}