#include <stdio.h>
// #include <cs50.c>
#include <stdlib.h>

struct node
{
    char name[8];
    struct node *next;
};

struct node *head, *new, *temp,*temprun;
int main()
{

    int ans = 1;
    int count = 0, n = 1;
    int choice;
    int Position = 0;
    int i =1;
    head = NULL;
    do
    {
        printf("1.Insert A Node To The End Of The List.\n2.Read All The name From Node.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            while (n)
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("\n Enter Your Name :");
                scanf("%s",new->name);
                new->next = NULL;
                if (head == NULL)
                {
                    head = temp = new;
                }
                else
                {
                    temp->next = new;
                    temp = new;
                }
                printf("\nDo You Want To Conitnue :");
                scanf("%d",&n);
            }
            n =1;
            break;
        case 3:
            while (n)
            {
                new = (struct node *)malloc(sizeof(struct node));
                printf("\n Enter Your Name :");
                scanf("%s",new->name);
                new->next = NULL;
                printf("Enter Position Where Do You Want To Enter");
                scanf("%d",&Position);
                if(count == 0){
                    printf("Either Your Node Is Empty Or You Haven't Read THe Data.\n");
                    break;
                }
                else{
                    temprun = head;
                    while(i<Position){
                        temprun = temprun->next;
                        i++;
                    }
                    new->next = temprun->next;
                    temprun->next = new;
                }
                printf("\nDo You Want To Conitnue :");
                scanf("%d",&n);
            }
            n =1;
            break;
        case 2:
            count = 0;
            temprun = head;
            while (temprun != NULL)
            {
                printf("%s\t", temprun->name);
                temprun = temprun->next;
                count++;
            }
            printf("\nTotal Number Of Nodes : %d", count);
            break;
        default:
            printf("\nPerforming Default Operation");
        }
        printf("\nDo You Want To Got To The Menu ? :");
        scanf("%d",&ans);
    } while (ans);
    return 0;
}
