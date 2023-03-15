#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={4,5,6,7,10};
    int arr2[]={1,2,3,4,5};
    int s1=sizeof(arr)/sizeof(arr[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    int s3 = s1 + s2;
    int arr3[s3];

    int i=0,j=0,k=0;
    for(int p=0; p<s3; p++)
    {
        if(i>=s1)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else if(j>=s2)
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }
        else if(arr[i]<arr2[j])
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    for(int z=0; z<s3; z++)
    {
        printf("%d ",arr3[z]);
    }

}

