/*#include<stdio.h>
int main(){
    int i=0,a,aa[20];
    printf("enter the decimal no -");
    scanf("%d",&a);
    while (a!=0)
    {
        aa[i] = a%2;
        a=a/2;
        i++;

    }
    

    for(int z=i-1;z>=0;z--){
        printf("%d",aa[z]);

    }
    printf("\nAbhishek kushwaha");
    
}*/
/*
#include<stdio.h>
int main(){
    int a,b=0,c=1,count=0;
    printf("enter the n term--");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        count =b+c;
        b=c;
        c=count;
    }
    printf("%d",count);
}
*/
/*
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter range\n");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        if (i%2 != 0)
        {
            sum = sum +i;
        }
    }
    printf("%d\n",sum);
}*/
/*
#include<stdio.h>
int main()
{
    int a,b,zz=0;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        zz = zz + a;
    }
    printf("%d is answer",zz);
    return 0;
}
*/
#include<stdio.h>
int armstrong_no(a,b){
    
    for(int i=a;i<=b;i++){
        int xx = i,sum=0;

        int len = 0;
        while(b>a){
        b = b/10;
        len++;
        }

        while (i!=0)
        {
            i = i%10;
            sum = sum + pow(i,len);
            i = i/10;
        }

        if(sum == xx){
            printf("%d it is AMstrong no \n",i);
        }
        else{
            printf("%d is not a armstrong no\n",i);
        }
        
    }
    

}

int main()
{
    int a,b;
    printf("enater the range 20 20000\n");
    scanf("%d %d",&a,&b);
    armstrong_no(a,b);

    return 0;
}
