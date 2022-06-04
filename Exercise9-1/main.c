#include <stdio.h>
#include <string.h>
int is_empty(const char *);
char *one_ele_subs(char *, int);
char *two_ele_subs(char *, int, int);
char *three_ele_subs(char *, int, int,int);
void print_with_commas(const char *);
void print_set(const char *);
void main()
{
    int c_count1 = 0, c_count2 = 1 , c_count3 = 2;

    printf("\nElements.\n");
    one_ele_subs("ACEG", c_count1);
    printf("\n");
    two_ele_subs("ACEG", c_count1, c_count2);
    printf("\n");
    three_ele_subs("ACEG", c_count1, c_count2,c_count3);
}

int is_empty(const char *set)
{
    return (set[0] == '\0');
}

char *one_ele_subs(char *set, int char_count1)
{
    char sub[65];

    if(is_empty(set))
        printf("\nThere is no set for testing.");
    else
    {
        if(char_count1 < strlen(set))
        {
                strncpy(&sub[0], &set[char_count1], 1);
                sub[strlen(set) - 3] = '\0';
                print_set(sub);
                printf("\n");

            one_ele_subs(set, char_count1 + 1);
        }
    }
}

char *two_ele_subs(char *set, int char_count1, int char_count2)
{
    char sub[65];

    if(is_empty(set))
        printf("\nThere is no set for testing.");
    else
    {
        if(char_count1 < strlen(set) - 1)
        {
            if(char_count2 < strlen(set))
            {
                strncpy(&sub[0], &set[char_count1], 1);
                strncpy(&sub[1], &set[char_count2], 1);
                sub[strlen(set) - 2] = '\0';
                print_set(sub);
                printf("\n");

                two_ele_subs(set, char_count1, char_count2 + 1);
            }
            else
            {
                char_count2 = char_count1 + 2;
                two_ele_subs(set, char_count1 + 1, char_count2);
            }
        }
    }
}

char *three_ele_subs(char *set, int char_count1, int char_count2,int char_count3)
{
    char sub[65];

    if(is_empty(set))
        printf("\nThere is no set for testing.");
    else
    {
        if(char_count1 < strlen(set))
        {
            if(char_count2 < strlen(set) + 1)
            {
                if(char_count3 < strlen(set)){
                    strncpy(&sub[0], &set[char_count1], 1);
                    strncpy(&sub[1], &set[char_count2], 1);
                    strncpy(&sub[2], &set[char_count3], 1);
                    sub[strlen(set) - 1] = '\0';
                    print_set(sub);
                    printf("\n");

                    three_ele_subs(set, char_count1 + 1, char_count2,char_count3);
                }
            }
        }
    }
}

void print_with_commas(const char *str)
{
    if(strlen(str) == 1)
        putchar(str[0]);
    else
    {
        printf("%c, ", str[0]);
        print_with_commas(&str[1]);
    }
}

void print_set(const char *set)
{
    printf("{");
    if(!is_empty(set))
        print_with_commas(set);
    printf("}");
}
