#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int x[3],y[3],T, i;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    scanf("%d", &T);
    while (T--) {
        for (i = 0; i < 3; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }
        if ((y[1]-y[0])*(x[2]-x[0]) == (y[2]-y[0])*(x[1]-x[0])) {
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
