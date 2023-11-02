#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
void solve()
{
    char s[20];
    scanf("%s", s);
    int l = strlen(s);
    if (l % 2 == 0)
    {
        printf("NO\n");
        return;
    }
    for (int i = 0; i < l / 2; i++)
    {
        if ((s[i] - '0') % 2 == 0 || s[i] != s[l - 1 - i])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}
main(){
	int t;
	scand(t);
    //unsigned long long n;
	while (t--){
		solve();
	}
}
