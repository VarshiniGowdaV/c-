#include <iostream>
int main()
{
    long product =1;
    for(int i=1;i<=10;i++)
    {
        product *=i;
    }
    std::cout<<"product of:"<<product<<std::endl;

    int sum = 0;
    for(int i=11;i<=20;i++)
    {
        sum+=i;
    }
    std::cout<<"sum of:"<<sum<<std::endl;

    std::cout<<"adding:";
     for (int i = 21; i <= 30; i++)
    {
        std::cout<<(i+10)<<" ";
    }
    std::cout <<std::endl;
    return 0;
}
