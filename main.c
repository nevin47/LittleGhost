#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct GuidePost
{
    int position;
    int target;
};

int GodthrowDice(float prb)
{
    /**
     * prb:probability
     */
    int i;
    int SUM = 0;
    srand((unsigned)time(0));/*设置随机数种子*/
    for (i=0;i<6;++i)
    {
        SUM += rand()%2;/*循环体执行6次随机输出6个0或者1*/
    }
    if(SUM > (6*prb))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    
}

