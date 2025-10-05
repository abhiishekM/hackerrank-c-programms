#include <stdio.h>
int main()
{
    int i,j,n,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }

    //just a trial for hacktoberfest, hehe
    for(j=0;j<n;++j){
        sum=sum+a[j];//hiii
    }
    printf("%d",sum);
//trial only trial.hehe
    return 0;
}
