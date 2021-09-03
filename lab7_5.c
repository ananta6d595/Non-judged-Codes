#include <stdio.h>

struct box{
int len, wid, hit;

};


void sum_box(struct box b1, struct box b2){

    printf("Summation of length of two boxes= %d\n", b1.len+b2.len);
    printf("Summation of height of two boxes= %d\n", b1.hit+b2.hit);
    printf("Summation of width of two boxes= %d\n\n", b1.wid+b2.wid);

}

int main()
{
    struct box a, b;


    printf("Enter the length, height and width of box 1:\n");
    scanf("%d %d %d", &a.len, &a.hit, &a.wid);

    printf("Enter the length, height and width of box 2:\n");
    scanf("%d %d %d", &b.len, &b.hit, &b.wid);

    sum_box(a, b);

    return 0;
}
