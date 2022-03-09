#include<stdio.h>
#include<stdlib.h>
struct node
{
    int i;
    struct node * next;
};
void main()
{
    struct node * p;
    struct node * temp;
    struct node * first;
    int user=0,ch=0,tos=0,element=0,cnt;

    printf("\n1. create stack\n");
    printf("2. push element to stack\n");
    printf("3. pop an element from the stack top\n");
    printf("4. display elements in the stack\n");
    printf("5. search for an element \n");
    printf("select any of the above:\n");
    scanf("%d",&user);
    while(user!=0 && user<6)
    {
        if(user==1)

        {
            printf("\n enter element to be pushed into first position:");
            first=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&ch);
            first->i=ch;
            first->next=0;
            tos=1;
        }
        if(user==2)
        {
            p=(struct node *)malloc(sizeof(struct node));
            printf("enter element to be pushed onto the stack : ");
            scanf("%d",&p->i);
            temp=first;
            while(temp->next!=0)
            {
                temp=temp->next;
            }
            temp->next=p;
            p->next=0;
            printf("\n element %d is pushed onto the stack ",p->i);
            tos++;
        }
         if(user==3)
        {
            temp=first;
            first=temp->next;
            free(temp);
            printf("\nelement popped out of stack ");
        }

        if(user==4)
        {
            temp=first;
            printf("elements in stack are:\t");
            while(temp!=0)
            {
                printf("\t\n %d \n", temp->i);
                temp=temp->next;
            }
        }
        if(user==5)
        {
            printf("enter element to be searched:");
            scanf("%d",&element);
            temp=first;
            cnt=0;
            while(temp!=0)
            {
                cnt++;
                if(temp->i==element)
                {
                    printf("item found at location %d",cnt);
                }
            }
        }
    printf("\n1. create stack\n");
    printf("2. push element to stack\n");
    printf("3. pop an element from the stack top\n");
    printf("4. display elements in the stack\n");
    printf("5. search for an element \n");
    printf("select any of the above:\n");
    scanf("%d",&user);
    }
    getch();
}
