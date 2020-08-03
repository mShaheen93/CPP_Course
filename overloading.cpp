# include <iostream>

void print(char const* myString);
void print(int myInt);


int main()
{
    print("Hello"); // Resolves to void print(const char*)
    print(15); // Resolves to void print(int)

    int x,y;

    std::cin>>x>>y;

    std::cout<<x<<std::endl<<y<<std::endl;
}


void print(char const* myString)
{
    printf("String %s\n", myString);
}

void print(int myInt)
{
    printf("My int is %d\n", myInt);
}
