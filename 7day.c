int trailingZeroes(int n){
    int count=0;

    for(int i=1;pow(5,i)<=n;i++){
        count+=(int)(n/pow(5,i));
    }return count;

}
#include <stdio.h>

int main() {

    double num = 0.0;
    while (scanf("%lf", &num) == 1)
    {
        int tmp = (int)num;
        if (num - tmp >= 0.5)
            printf("%d", tmp + 1);
        else
            printf("%d", tmp);
    }
    return 0;
}
