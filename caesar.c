#include <stdio.h>



int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        printf("My name is %s", argv[1]);
    }
    else
    {
        printf("Please try it again");
    }
}