//binary search
#include <stdio.h>
int main()
{
    int i ,a[100],n,first,last,middle,search;
    printf("enter number of element to be/of array");
    scanf("%d",&n);
    printf("enter araay:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("element to be searched:");
    scanf("%d",&search);

    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(a[middle]<search){
            first=middle+1;
            middle=(first+last)/2;
            printf("search %d" ,search);
        }
        else if(a[middle]==search){
            printf("found %d %d",middle+1,search);
        }
        else if(a[middle] > search){
            last=middle-1;
            middle=(first+last)/2;
            printf("search %d" ,search);
        }
        //(first>last)
        else{
            printf("element unfound");
        }
    }
    return 0;
}