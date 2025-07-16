
#include <stdio.h>
int main() {
    float array1[5]; float array2[5]; float total[5];
    int i;
    for (i=0;i<5;i++);
    {
        total[i]=array1[i] + array2[i];
    }
    for (i=0;i<5;i++) {
        printf("% f + %f = %f \n",array1[i],array2[i],total[i]);
    }
    return 0;


}
