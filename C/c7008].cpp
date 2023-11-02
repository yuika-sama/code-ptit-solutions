#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
struct polynomial {
    char poly[1000];
    bool level[10000];
    int factor[10000];
};
int max = -1;
void output(struct polynomial p)
{
    printf("%d*x^%d", p.factor[max], max);
    for (int i=max-1; i>0; i--) {
        if (p.level[i] == true) {
            printf(" + %d*x^%d", p.factor[i], i);
        }
    }
}
int main()
{
    int n;
    scan(n);
    getchar();
    while(n--) {
        char s[20];
        struct polynomial p;
        for (int i=0; i<10000; i++) {
            p.factor[i] = 0;
        }
        for (int k=1; k<=2; k++) {
            while (scanf("%s", s)!=-1) {
                if (strcmp(s, "+")!=0) {
                    for (int i=0; i<strlen(s); i++) {
                        int tmp;
                        if (s[i] == '^') {
                            char temp[10];
                            strncpy(temp, s+i+1, strlen(s) - i);
                            sscanf(temp, "%d", &tmp);
                            p.level[tmp] = true;
                            max = fmax(max, tmp);
                        }
                        if (s[i] == '*') {
                            char temp[10];
                            strncpy(temp, s, i);
                            int tmpp;
                            sscanf(temp, "%d", &tmpp);
                            p.factor[tmp] += tmpp;
                        }
                    }
                }
            }
        }
        output(p);
    }
}
