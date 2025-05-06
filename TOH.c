#include<stdio.h>
void towers(int, char, char, char);
int main()
{
    int num;
    printf("Enter the number of disk\n");
    scanf("%d",&num);
    printf("The sequence of moves involved in TOH are :\n ");
    towers(num,'L','R','C');
    return 0;
}
void towers (int num, char from, char to, char intermediate)
{
    if(num==1)
    {
        printf("\n Move disk 1 from peg %c to peg %c",from,to);
        return;
    }
    towers(num-1,from,intermediate,to);
    printf("\n Move disk %d from peg %c to peg %c",num,from,to);
    towers(num-1,intermediate,to,from);
}
