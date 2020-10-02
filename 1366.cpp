#include<stdio.h>

int main()

{

    int c,v,testCase,total,rectangle;

    do

    {

        scanf("%d",&testCase);

        if(testCase>0)

        {

            total=0;

            while(testCase--)

            {

                scanf("%d%d",&c,&v);

                if(v%2!=0)

                    total=total+(v-1);

                else

                    total=total+v;

            }

            rectangle=total/4;

            printf("%d\n",rectangle);

        }

    }

    while(testCase!=0);

    return 0;

}
