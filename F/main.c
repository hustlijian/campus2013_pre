#include <stdio.h>
#include <string.h>
#include <time.h>
#define N 1001

int x[N],y[N];
char map[2*N][2*N];

int checked(int x)
{
    if (x<-1000 || x>1000) {
        return 0;
    }
    return 1;
}
int main(int argc, char* argv[])
{
    int T, n, i, j,x1,y1,x2,y2, t;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    scanf("%d", &T);
    while (T--) {
        memset(map,0,sizeof(map));
        t = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d%d", &x[i], &y[i]);
            if (map[x[i]+N][y[i]+N]) {
                i--,n--;
                continue;
            }
            map[x[i]+N][y[i]+N]=1;
        }
        for (i = 0; i < n; i++) {
            for (j = i+1; j < n; j++) {
                x1 = x[i]-(y[i]-y[j]);
                y1 = y[i]+(x[i]-x[j]);
                x2 = x[j]-(y[i]-y[j]);
                y2 = y[j]+(x[i]-x[j]);
                if (checked(x1)&&checked(y1)&&checked(x2)&&checked(y2)) {
                    if ((map[x1+N][y1+N])&&(map[x2+N][y2+N])) {
                        t++;
                    }
                }
            }
        }
        t>>=1;
        printf("%d\n", t);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
