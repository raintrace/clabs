# include<stdio.h>
int main()
{
    int n,count =0,x,i;
    scanf("%d",&n );
    for(i=1;i<=10;i++){
    x=n%2;
    n=(int)(n/2);
    if(x==1){
        count=count+1;}
    }
printf("%d",count);
return 0;
}