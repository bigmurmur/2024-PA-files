#include<bits/stdc++.h>

using namespace std;
template<typename T> inline bool read(T &f)
{
    char c;f=0;int k=1;
    while(c=getchar(),c>'9' || c<'0') if(c=='-') k=-1;
    while(f=(f<<1)+(f<<3)+c-'0',c=getchar(),c>='0' && c<='9');
    return f*=k,true;
}
template<typename A,typename ...B>
inline bool read(A &x,B &...y) {return read(x) && read(y...);}

int main()
{
    int a, b;
    read(a, b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    return 0;
}