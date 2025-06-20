#include<stdio.h>
int main()
{
  int r,g,b;
  float c,m,y,k,w;

  printf("Enter the RGB values of the colour: ");
  scanf("%d %d %d",&r,&g,&b);

  if(r>b && r>g)
    w=r/255;
    else if(b>r && b>g)
      w=b/255;
    else if(g>r && g>b)
      w=g/255;
    else if(r==b && r==g)
      w=r/255;
    
  c=((w-(r/255)));
  m=((w-(g/255)));
  y=((w-(b/255)));
  k=((1-w));

  printf("The values of c,m,y,k are: %f,%f,%f,%f.\n",c,m,y,k);

  return 0;
}
