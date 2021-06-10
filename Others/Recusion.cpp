#include<bits/stdc++.h>

void recur (int x)
{
    if(x==0)
        return;
    --x;
    printf("%d\n", x);
    recur(x);
    printf("%d\n", x);
}

int main()
{
    recur(3); lk
}
