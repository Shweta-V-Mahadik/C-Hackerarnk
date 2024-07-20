#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[50];
    int i,n,j,cnt;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<10;i++)
    {
        cnt=0;
        
            for(j=0;j<n;j++)
            {
                if(s[j]>='0'&&s[j]<'9')
                {
                    if(s[j]-'0'==i)
                    cnt++;
                }
                
             }
             printf("%d ",cnt);
             
    }
    
    return 0;
}
