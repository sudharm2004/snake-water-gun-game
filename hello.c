#include<stdio.h>

int sgw(char user,char comp)
{
    if (comp==user)
    {
        return 0;
    }

//NEW LOGIC FOR S
    if (user=='s'&& comp=='g')
    {
        return -1;
    }
    else if (user=='g'&& comp=='s')
    {
        return 1;
    }
    
    
//NEW LOGIC FOR W
    else if (user=='w'&& comp=='s')
    {
        return -1;
    }
    else if (user=='s'&& comp=='w')
    {
        return 1;
    }

//NEW LOGIC FOR G
    else if (user=='g'&& comp=='w')
    {
        return -1;
    }
    else if (user=='w'&& comp=='g')
    {
        return 1;
    }
}

int main()
{
    char comp ;
    char user;


    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }


    printf("enter 's' for snake ,'w' for water , 'g' for gun\n");
    scanf("%c",&user);
    int result = sgw(user, comp);
    printf("you chose %c  and computer choose %c\n",user,comp);
    if (result==0)
    {
        printf("There is draw");
    }
     if (result==1)
    {
        printf("hurray!You won the game");
    }
     if (result==-1)
    {
        printf("Sorry!!You lost the game");
    }
    
    
    return 0;
}
