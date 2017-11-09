#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a1,a2,a3,a4,r,a,b,c,maxx,b1,b2,b3,b4,minn,k,f;
    //Αρχη ερωτηματος α//
    f=1;
    while (k!=6174)
    {
    r=0;
    while(r==0)
    {
    if (f==1)
    {
    printf("Give 4 digit number \n");
    scanf("%d",&n);
    while (n<1000 || n>9999)
    {
        printf("Give 4 digit number \n");
        scanf("%d",&n);
    }
    }
    a1=n/1000;
    a2=(n%1000)/100;
    a3=(n-(a1*1000+a2*100))/10;
    a4=n-(a1*1000+a2*100+a3*10);
    if (a1!=a2 || a1!=a3 || a1!=a4 || a2!=a3 || a2!=a4 || a3!=a4)
    {
        r=1;
    }
    }

    printf("%d %d %d %d \n",a1,a2,a3,a4);
    //Τελος α , αρχη ερωτηματος β//
    if (a1>a2 && a1>a3 && a1>a4)
    {
        maxx=a1*1000;
        a=a2;
        b=a3;
        c=a4;
    }
    else if (a2>a1 && a2>a3 && a2>a4)
    {
        maxx=a2*1000;
        a=a1;
        b=a3;
        c=a4;
    }
    else if (a3>a1 && a3>a2 && a3>a4)
    {
        maxx=a3*1000;
        a=a1;
        b=a2;
        c=a4;
    }
     else if (a4>a1 && a4>a2 && a4>a3)
    {
        maxx=a4*1000;
        a=a1;
        b=a2;
        c=a3;
    }
    if (a>b && a>c)
    {
        maxx+=a*100;
        a=b;
        b=c;
    }
    else if (b>a && b>c)
    {
        maxx+=b*100;
        b=c;
    }
    else if (c>a && c>b)
    {
        maxx+=c*100;
    }
    if (a>b)
    {
        maxx+=a*10;
        maxx+=b ;
    }
    else
    {
        maxx+=b*10;
        maxx+=a;
    }
    b1=maxx/1000;
    b2=(maxx%1000)/100;
    b3=(maxx-(b1*1000+b2*100))/10;
    b4=maxx-(b1*1000+b2*100+b3*10);
    minn=b4*1000+b3*100+b2*10+b1;
    printf("%d %d \n", maxx,minn);
    //τελος ερωτηματος β,αρχη ερωτηματος γ//
    k=maxx-minn;
    n=k;
    f+=1;
    }
    printf("%d", f);
}
