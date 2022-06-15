#include <stdio.h>
#include <stdlib.h>

int main(){
    double n1, n2, ans;
    char op;
    printf("Please input two numbers:");
    scanf("%lf%lf",&n1, &n2);

    printf("Please input an operation:");
    scanf(" %c", &op);

    switch (op){
    case '+':
        ans = n1 + n2;
        break;
    case '-':
        ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;
    default:
        printf("Undefined Key\n");
        return 0;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", n1, op, n2, ans);
    return 0;
}