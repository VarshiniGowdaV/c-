#include <iostream>
int main()
{
    int product =1;
    for(int i=1;i<=10;i++)
    {
        product = product*i;
    }
    std::cout<<"product of:"<<product<<std::endl;

    int sum = 0;
    for(int i=11;i<=20;i++)
    {
        sum = sum+i;
    }
    std::cout<<"sum of:"<<sum<<std::endl;

    std::cout<<"adding:"<<std::endl;
     for (int i = 21; i <= 30; i++)
    {
        std::cout<<(i+10)<<" ";
    }
    return 0;
}
