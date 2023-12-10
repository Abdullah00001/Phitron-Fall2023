#include <stdio.h>
#include <string.h>
int main() {
    // Your code here
    char a[100];
    scanf("%s",a);
    int cnt[26]={0};
    for (int i = 0; i < strlen(a); i++)
    {
        cnt[a[i]-'a']++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (cnt[i]!=0)
    //     {
    //         printf("%c %d\n",i+97,cnt[i]);
    //     }
        
    // }
    // for (int i = 0; i < strlen(a); i++)
    // {
    //     int val=a[i]-97;
    //     printf("%c %d\n",val+97,cnt[val]);
        
    // }
    for (int i = 0; i < strlen(a); i++)
    {
        int val=a[i]-'a';
        if (cnt[val]!=0)
        {
            printf("%c %d\n",val+'a',cnt[val]);
        }
        cnt[val]=0;
    }
    
    
    return 0;
}