#include <stdio.h>
#include <string.h>

int main()
{
    //take input from user
    char str[50];//declaring an array for storing input
    printf("Enter string: ");
    scanf("%s",str);
    //find length of input
    int len=strlen(str);
    //if string is empty
    if(len==0)
    {
        printf("No answer\n");
        return 0;
    }
    //loop to check each character
    int i,j,count;
    for(i=0;i<len;i++) 
    {
        count=0;//count how many times this char appears
        //check how many times str[i] appears in string
        for(j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;//increase count if char matches
            }
        }
        //if count is 1, this char does not repeat
        if(count==1)
        {
            printf("First non-repeating char is: %c\n", str[i]);
            return 0;//stop after finding first one
        }
    }
    //if no char found
    printf("No answer\n");
    return 0;
}
