# include <stdio.h>

int n, stk[20],r = -1, f = -1;  

void enque();
void deque();
void view();

int main ()
{
    int c;
    
    printf("Total number to be = ");
    scanf("%d", &n);

    do
    {
        printf("\nPress 1 to enqueue \nPress 2 to dequeue \nPress 3 to view \nPress 4 to exit\n");
        scanf("%d", &c);
        
        switch (c)
        {
            case 1:
            {
                enque();
                break;
            }

            case 2:
            {
                deque();
                break;
            }

            case 3:
            {
                view();
                break;
            }
            
            case 4:
            {
                printf("You have exited the code\n");
                break;
            }

            default:
            {
                printf("The choise is not present\n");
                break;
            }
        }
    }while(c != 4);
}

void enque()
{
    int val;
    if( r == n-1)
    {
        printf("The stack is Overflow\n");
    }
    else if (f == -1 && r == -1 )
    {
        printf("\nEnter a value = ");
        scanf("%d", &val);
        r=r+1;
        f=f+1;
        stk[r]=val;
    }
    else
    {
        printf("\nEnter a value = ");
        scanf("%d", &val);
        r=r+1;
        stk[r]=val;
    }
}

void deque()
{
    int val;
    if(f == -1 || f>r)
    {
        printf("\nStack is  Underflow\n");
    }
    else
    {
        f=f+1;
    }
}

void view()
{
    if(r == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("The number present are \n");
        for(int i = f; i <= r; i++)
        printf("%d ",stk[i]);
        printf("\n");

    }
}