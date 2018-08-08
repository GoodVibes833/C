#include <stdio.h>
#include <string.h>

char *vc_strstr(char *str, char *to_find)
{

    for (int i = 0; i < 5; i++)
    {
        if(str[i]==to_find[0])
        {
            for(int j=0; j<5; j++)
            {
                if(to_find[j]==str[i+j]){
                    return str;
                }
            }

        }
    }
    return to_find;
};

int main()
{

     char haystack[20] = "TutorialsPointt";
char needle[10] = "Point";
   char *ret;

    printf("%s\n", vc_strstr(haystack, needle));
   ret = strstr(haystack, needle);
   printf("The substring is: %s\n", ret);
    return 0;
}