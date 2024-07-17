#include <stdio.h>

void why_me();

int main(void){
    printf("File: %s\n", __FILE__);
    printf("Date:Q %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Version: %ld\n", __STDC_VERSION__);
    printf("Line: %d\n", __LINE__);
    printf("Function: %s\n", __func__);
    why_me();
    return 0;
}

void why_me() {
    printf("Function: %s\n", __func__);
    printf("Line: %d\n", __LINE__);
}
