#include <stdio.h>


int main()
{

    int i,j;

    char array[3][3];


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d,%d  ", i,j);
        }
        printf("\n\n");
    }



    memset(array,'-', 9);



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c     ", array[i][j]);
        }
        printf("\n");
    }


    char input;
    char first[20];
    char second[20];
    puts("The player who play first is X");
    puts("Enter the name of the first player");
    gets(first);
    puts("Enter the name of the second player");
    gets(second);

    int x1,y1;

    puts("The first player chooses X/O");

    puts("The first player is x.");
    input = 'X';

while(1)
{

    if(input == 'X' | input == 'x')
    {

    puts("Enter the row and column number of the person who chooses 'X'");
    scanf("%d%d", &x1,&y1);


    if(array[x1][y1] == 'X')
    {
        puts("The place already taken.");
        puts("Choose another");
        scanf("%d%d", &x1, &y1);
    }
     array[x1][y1] = 'X';

    }else if(input == 'O' | input == 'o' );
    {

        puts("Enter the row and column number of the person who chooses 'O'");
        scanf("%d%d", &x1,&y1);


        if(array[x1][y1] == 'O')
        {
        puts("The place already taken.");
        puts("Choose another");
        scanf("%d%d", &x1, &y1);
        }
        array[x1][y1] = 'O';

    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c     ", array[i][j]);
        }
        printf("\n");
    }

    if((array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X') || (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X') || (array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X') || (array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O'))
    {
        if(array[1][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X') || (array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[0][0] == 'X' && array[1][0] == 'X' && array[2][0] == 'X') || (array[0][0] == 'O' && array[1][0] == 'O' && array[2][0] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[0][1] == 'X' && array[1][1] == 'X' && array[2][1] == 'X') || (array[0][1] == 'O' && array[1][1] == 'O' && array[2][1] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }

    if((array[0][2] == 'X' && array[1][2] == 'X' && array[2][2] == 'X') || (array[0][2] == 'O' && array[1][2] == 'O' && array[2][2] == 'O'))
    {
        if(array[0][0] == 'X')
        {
            printf("The winner is %s\n", first);
        }
        else
        {
            printf("The winner is %s\n", second);
        }
    }



}



    return 0;
}
