#include<stdio.h>

float area(int r){
    float area = 3.14*r*r;
    return area;
}

int main(){
    int a;
    printf("enter radius-\n");
    scanf("%d",&a);
    float ss = area(a);
    printf("%f",ss);

}