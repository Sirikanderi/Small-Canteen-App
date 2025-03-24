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
        //Start j from i+1 to avoid counting the same character
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;//increase count if char matches
            }
        }
        
        //if count is 0, this char does not repeat after position i,so its non repeating
        if(count==0)
        {
            printf("First non-repeating char is: %c\n", str[i]);
            return 0;//stop after finding first one
        }
    }
    //if no char found
    printf("No answer\n");
    return 0;
}
