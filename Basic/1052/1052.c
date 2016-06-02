#include <stdio.h>
#include <math.h>

char hand[10][5],eye[10][5],mouse[10][5];
int get_symbol(char p[][5])
{
    char c,i=0,j=0;
    while( (c=getchar()) != '\n')
    {
        if( c=='[')
        {
            while( (c=getchar()) != ']')
            {
                if(c=='\n')
                    return (i-1);
                p[i][j] = c;
                j++;
            }
            p[i][j] = '\0';
            i++;
            j=0;
        }
    }
    return (i-1);
}

int main()
{
    int hand_count,eye_count,mouse_count;
    int n,i,a1,a2,a3,a4,a5;

    hand_count = get_symbol(hand);
    eye_count = get_symbol(eye);
    mouse_count = get_symbol(mouse);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
        if(--a1 > hand_count || --a5 > hand_count || --a2 > eye_count || --a4 > eye_count || --a3 > mouse_count )
        {
            puts("Are you kidding me? @\\/@");
        }
        else if(a1 < 0 || a2 < 0 || a3 < 0 || a4 < 0 || a5< 0)
        {
            puts("Are you kidding me? @\\/@");
        }
        else
        {
            printf("%s(%s%s%s)%s\n",hand[a1],eye[a2],mouse[a3],eye[a4],hand[a5]);
        }
    }
    return 0;
}
