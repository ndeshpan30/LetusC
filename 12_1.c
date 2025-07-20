#include<stdio.h>
#define LOWER(x)(x>96 && x<123)
#define UPPER(x)(x>64 && x<91)
#define ALPHABET(x)(x>64 && x<123)
#define BIGGER(a,b)(a>b?a:b)

int main()
{
  char ch;
  int a,b;

  printf("Enter a letter: ");
  scanf("%c",&ch);
  if(LOWER(ch) && ALPHABET(ch))
    {
      printf("lowercase,alphabet");
    }

  else if(UPPER(ch) && ALPHABET(ch))
    {
      printf("UPPERCASE, alphabet");
    }
  else printf("alphabet");

}
