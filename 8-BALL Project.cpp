#include<iostream>
#include<cstdlib>

int main()
{
    //Your future is here

    std::cout<<"MAGIC 🎱 SAYS:"<<"\n";

    srand(time(NULL));

    int answer = std::rand() % 10;

    switch (answer)
    {
    case 1:
        std::cout<<"It is certain.\n";
        break;
    case 2:
        std::cout<<"It is decidedly so.\n";
        break;
    case 3:
        std::cout<<"Without a doubt.\n";
        break;
    case 4:
        std::cout<<"Yes - definitely.\n";
        break;
    case 5:
        std::cout<<"You may rely on it.\n";
        break;
    case 6:
        std::cout<<"As I see it, yes.\n";
        break;
    case 7:
        std::cout<<"Most likely.\n";
        break;
    case 8:
        std::cout<<"Outlook good.\n";
        break;
    case 9:
        std::cout<<"Concentrate and ask again.\n";
        break;
    case 10:
        std::cout<<"Very doubtful.\n";
    default:
        std::cout<<"It is certain.\n";
        break;

    }
    return 0;

}
