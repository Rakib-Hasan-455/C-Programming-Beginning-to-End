#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int temp;
    if(a>b && a>c && a>d){
        temp=a;
    }
    else if(b>c && b>d){
        temp=b;
    }
    else if(c>d){
        temp=c;
    }
    else {
    temp=d;
    }
    return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    //Abc
    return 0;
}
