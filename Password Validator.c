//Password Validator
//by Jeevan Joshi

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char pass[13];
    int a,b,c,d,e,f,size,i;
    a=b=c=d=e=f=0;
    printf("Enter your password : ");
    scanf("%[^\n]%*c", pass);
    size=strlen(pass);
    if(size>=4 && size<=12)
    a++;
    for(i=0; i<size; i++)
    {
        if(isdigit(pass[i]))
        b++;
        if(islower(pass[i]))
        c++;
        if(isupper(pass[i]))
        d++;
        if(ispunct(pass[i]))
        e++;
        if(isspace(pass[i]))
        f--;
    }
    if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && f==0)
    {
        printf("\nPassword \"%s\" is Strong", pass);
    }
    else
    {
        printf("\nPassword \"%s\" is Weak", pass);
    }
    return 0;
}