#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void hoanvi (int &a,int& b);
void bublesort (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = n-1; j>i; j--)
        {
           if (a[j]<a[j-1]) hoanvi(a[j],a[j-1]);
        }
}
void interchangesort  (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = i+1; j<n; j++)
        {
           if (a[i]>a[j]) hoanvi(a[j],a[i]);
        }
}
void selectionsort  (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = i+1; j<n; j++)
        {
           if (a[i]>a[j]) hoanvi(a[j],a[i]);
        }
}
int TimMin (int a[], int x,int y)
{
    int min=0;
    for (; x < y; x++)
    {
        if(a[min]<a[x]) a[min]=a[x];
    }
}
void hoanvi (int &a,int& b)
{
    int tam;
    tam=a;
    a = b;
    b= tam;
}
void inmang (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d  ",i,a[i]);
    }
}
void randArray (int a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
    {
        a[i]=rand()%50;
    }
}
int main()
{
	
    int n;
    scanf("%d",&n);
    int a[n]; 
    randArray(a,n);
    inmang(a,n);
    printf("buble sort : \n");
    bublesort(a,n);
    inmang(a,n);
    return 0;
}
