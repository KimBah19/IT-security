#include <stdio.h>
#include <string.h>

//typedef char user[10];

//int main()
//{
    // typedef = reservera ett nytt namn för en befintlig datatyp
    
  //  user user1 = "MadeUpName";

  //  return 0;
//}

typedef struct
{
    char name[10];
    char password[30];
    int age;
} User;

int main()
{
    User user1 = {"MadeUpName", "MadeUpPassword", 25};

    printf("%s\n", user1.name);

    return 0;
}