#include<stdio.h>
#include<string.h>
 void code()
{
    int l,i;
    char s1[30];
    printf("enter the string");
    gets(s1);
    puts(s1);
    l=strlen(s1);
    // printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        s1[i]=s1[i]+5;
    }
//    printf("\n%s",s1);
      puts(s1);
}

void codeans()
{
  int l,i;
    char s1[30];
    printf("enter the string");
    gets(s1);
    puts(s1);
    // l=strlen(s1);
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        s1[i]=s1[i]-5;
    }
//    printf("\n%s",s1);
      puts(s1);   
}

main()
{
    code();
    codeans();
}