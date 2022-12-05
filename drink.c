#include <stdio.h>
int main()
{
    int testInteger;
    printf("\nWieviel Weissbier hast du getrunken?\n");
    scanf("%d", &testInteger);
    if  (testInteger < 10) {
        printf("\nDu Pfeife! Hast erst %d Weissbier getrunken. Gib Gas!\n",testInteger);
    }
    else {
        printf("\nStark!!! Keiner kann dich aufhalten!\n");
    }
    return 0;
}
