#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define linedown printf("\n")
int sosanh(const void *a, const void *b)
{
    if (*(int*)a > *(int*)b) return 1;
    else return -1;
}
int bs(long int a[], int n, long int x)
{
    int l=0, r=n-1;
    while (l<=r) {
        int mid = (l+r)/2;
        if (a[mid]<x) l = mid+1;
        else if(a[mid]>x) r = mid -1;
        else return mid;
    }
    return -1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long int a[n];
        for (int i=0; i<n; i++) scanf("%ld", &a[i]);
        for (int i=0; i<n; i++) a[i] = a[i]*a[i];
        bool check =false;
        qsort(a,n,sizeof(a[0]),sosanh);
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n ; j++) {
                if(bs(a,n,(a[i]+a[j]))!=-1) {
                    check = true;
                    break;
                }
            }
        }
        if (check) printf("YES\n");
        else printf("NO\n");
    }
}
