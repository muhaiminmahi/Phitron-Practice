#include<stdio.h>
#include<string.h>
void upper(int n,char a[])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            a[i]-=32;
    }
   puts(a);
}
int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    upper(strlen(a),a);
}






