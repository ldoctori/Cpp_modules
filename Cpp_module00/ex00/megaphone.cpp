#include <iostream>

class Megaphone
{
    public:
    void ToUpperCase(char *str)
    {
        int i = 0;
        while (str[i])
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            i++;
        }
    };
};

int main(int argc, char **argv)
{
    int i = 1;
    Megaphone meg;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    
    while (argv[i])
    {
        meg.ToUpperCase(argv[i]);
        std::cout << argv[i];
        i++;
    }
    std::cout<< "" << std::endl;
}