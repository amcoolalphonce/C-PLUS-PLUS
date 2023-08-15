#include<iosttream>

usinng namsespce std;

int main()
{
    int i, j;
    for (i=2; i<100; i++)//prime numbers between 2 and 100
    {
        for(j=2;j<=i/j;j++)
        {
            if (!(i%j))
            {
                break;
            }
        }
        if (j>(i/j))
        {
            cout<<i<<"is a rime number"<<endl;
        }
    }
    return 0;
}
