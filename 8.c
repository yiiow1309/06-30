#include <stdio.h>
struct user
{
    char name[20];
    char phone[14];
    int quick;
};

void display_st(struct user data);

int main(void)
{
    struct user d={"����","010-4013-1320",1};
    display_st(d);
    return 0;
}
void display_st(struct user data)
{
    printf("name : %s\n", data.name);
    printf("phone : %s\n", data.phone);
    printf("quick : %d\n", data.quick);
}
