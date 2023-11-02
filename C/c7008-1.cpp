#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main()
{
    int t;
    scan(t);
    getchar();
    while (t--) {
        char s[20];
        int a[10000] = {0};
        int max = -1;
        while (scanf("%s", s)!=-1) {
            if (strcmp(s, "+")!=0) {
                for (int i=0; i<strlen(s); i++) {
                    int tmp;
                    if (s[i] == '^') {
                        char temp[10];
                        strncpy(temp, s, i);
                        sscanf(temp, "%d", tmp);
                        max = fmax(tmp, max);
                    }
                    if (s[i] == '^') {
                        char temp[10];
                        int tm;
                        strncpy(temp, s+i, strlen(s)-i-1);
                        sscanf(temp, "%d", tm);
                        a[tmp] += tm;
                    }
                }
            }

        }
        for (int i=0; i<max; i++) {
            if(a[i]!=0) {
                print(i);
                print(a[i]);
                linedown;
            }
        }
    }
}
