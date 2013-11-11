#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    int T, N;
    freopen("input.txt", "r", stdin);
    double start, end;
    start = clock();
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        printf("%d\n", N*N+N/2+1);
    }

    end = clock();
    printf("%.3lf MS\n", (end-start)/1000);	
    return 0;
}
