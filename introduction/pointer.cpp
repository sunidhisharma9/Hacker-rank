#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
      int aa=*a;
      //pointing to the data
     *a = *a + *b;
    
    *b =abs(aa - *b) ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("Updated data");
    printf("%d\n%d", a, b);

    return 0;
}
