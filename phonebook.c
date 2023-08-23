#include <stdio.h>
#include <cs50.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[2];

    people[0].name = "santhosh";
    people[0].number = "+918682994321";

    people[1].name = "kumar";
    people[1].number = "+91-6381130966";

    // string names[] = {"santhosh", "kumar"};
    // string numbers[] = {"+91-6381130966", "+918682994321"};

    printf("asdf %p \n", people);

    for (int i = 0; i < 2; i++)
    {
        if (strcasecmp(people[i].name, "santhosh") == 0)
        {
            printf("Found numbers is %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}