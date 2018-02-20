#include"stdio.h"
int print_it(int id,int tot)
{
        int j=1,r=1,tran;
	tot=0;
	printf("Please enter the id number\n");
        scanf("%d",&id);
        while(j<=7)
        {
        	printf("enter the transaction amount\n");
                scanf("%d",&tran);
                if(tran>0)
                	tot=tot+tran;
                else
                        tot=tot+((-1)*tran);
                j+=1;
        }
        return tot;
}
main()
{
        int id,tran,tot;
        int id1,id2,id3,id4;
        id1=print_it(id,tot);
        id2=print_it(id,tot);
        id3=print_it(id,tot);
        id4=print_it(id,tot);
        printf("final inventory is \n");
        printf("ID 1-transaction after a week %d\n",id1);
        printf("ID 2-transaction after a week %d\n",id2);
        printf("ID 3-transaction after a week %d\n",id3);
        printf("ID 4-transaction after a week %d\n",id4);
}
