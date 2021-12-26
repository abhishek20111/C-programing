/*#include<stdio.h>

int recursion(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*recursion(a-1);
    }
}

int main(){
    int a,ss;
    printf("enter the no");
    scanf("%d",&a);
    ss = recursion(a);
    printf("%d",ss);
}*/
#include<stdio.h>
int main(){
    int i,j,a;
    printf("enter size of matrix");
    scanf("%d",&a);

    int arr[a][a];

    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(i==j)
                printf("%d ",arr[i][j]);
            
            else if((i+j)%2==0)
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
         
        
    }

}