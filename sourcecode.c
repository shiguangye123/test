

#include <stdio.h>

#include <stdlib.h>

void QuickSort(int a[],int numsize)

{

        int i=0,j=numsize-1;

        int val=a[0];

        if(numsize<=1)

        {

                return ;

        }

        while(i<j)

        {

                for(;j>i;j--)

                {

                        if(a[j]<val)

                        {

                                a[i++]=a[j];

                                break;

                        }

                }

                for(;i<j;i++)

                {

                        if(a[i]>val)

                        {

                                a[j--]=a[i];

                                break;

                        }

                }

        }

        a[i]=val;

        QuickSort(a,i);

        QuickSort(a+i+1,numsize-i-1);

}

int main(void)

{

        int array[12];

        int i = 0;

        printf("the original array data seq :\n");

        for(i=0;i<12;i++)

        {

                array[i] = rand() % 100;

                printf("%d,",array[i]);

        }

        printf("\n");

        QuickSort(array,12);

        printf("after quick sort array data seq : \n");

        for(i=0;i<12;i++)

                printf("%d,",array[i]);

        printf("\n");

        return 0;

}

