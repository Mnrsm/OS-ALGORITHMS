#include <stdio.h>
int main()
{
int referenceString[10], pageFaults = 0, m, n, s, pages, frames,hits,i;
float miss_percent,hit_percent;
printf("\nEnter the number of Pages:\t");
scanf("%d", &pages);
printf("\nEnter reference string values:\n");
for( m = 0; m < pages; m++)
{
   printf("Value No. [%d]:\t", m + 1);
   scanf("%d", &referenceString[m]);
}
printf("\n What are the total number of frames:\t");
{
   scanf("%d", &frames);
}
int temp[frames];
for(m = 0; m < frames; m++)
{
  temp[m] =-1;
}
printf("Ref.String Frame 1\t\tFrame 2\t\tFrame 3");
int k=0;
for(m= 0; m < pages; m++)
{
s=0;
  for(n = 0; n < frames; n++)
   {
      if(referenceString[m] == temp[n])
         {
            s++;
            pageFaults--;
         }
   }     
   pageFaults++;
   if((pageFaults <= frames) && (s == 0))
      {
        temp[m] = referenceString[m];
      }   
   else if(s == 0)
      {
        temp[(pageFaults - 1) % frames] = referenceString[m];
      }
      printf("\n");
      printf("%d\t\t",referenceString[k++]);
      for(n = 0;n<frames;n++)
       {     
         printf("%d\t\t",temp[n]);
       }
       
} 
miss_percent=((pageFaults*1.0)/pages)*100;
hits=pages-pageFaults;
hit_percent=((hits*1.0)/pages)*100;
printf("\nTotal Page Faults: %d\nNo.of hits: %d\nMiss Ratio: %.2f%%\nHit Ratio: %.2f%%", pageFaults,pages-pageFaults,miss_percent,hit_percent);
return 0;
}
