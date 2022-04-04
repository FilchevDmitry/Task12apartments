#include <iostream>
int main() {
    std::string room[10];
    int num=0;
    for(int i=0;i<10;i++){
        std::cout<<"Input last name : ";
        std::cin>>room[i];
    }
    for (int i = 0; i < 3; ++i)
    {
        std::cout<<"Input apartment number from 1 to 10 : ";
        std::cin>>num;
        while(num<0||num>10){
            std::cout<<" Wrong!!! Input apartment number from 1 to 10 : ";
            std::cin>>num;
        }
        std::cout<<room[num-1]<<"\n";
    }
    return 0;
}
