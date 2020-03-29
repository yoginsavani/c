#include<stdio.h>
#include<stdlib.h>
typedef struct std
{
 int rn;
 struct std *next;
} str;

  void add_end(str **ptr);
   void print(str *ptr);
    void swap(str **ptr,int k);
int  count(str *ptr);
 main()
{
  int no,k;
   str *hptr=0;

    printf("no of std:");
    scanf("%d",&no);

   while(no)
   {
    add_end(&hptr);
    no--;
   }
  
  print(hptr);
   
    printf("enter k = ");
    scanf("%d",&k);

     swap(&hptr,k);
       printf("\n");
      print(hptr);


}

   void swap(str **ptr,int k)
       {
            str *temp=*ptr;
            int i,c=count(*ptr);
             
               str **p=(str **)malloc(sizeof(str)*c);
               
                for(i=0;i<c;i++,temp=temp->next)
                p[i]=temp;
                
                 
               
          /*
          p[0]->next=0;
          for(i=1;i<c;i++)
          p[i]->next=p[i-1];
          *ptr=p[c-1];
          */
 
            temp=p[k-1];
            p[k-1]=p[c-k];
            p[c-k]=temp;
         
              
                 
                  temp=p[0];    
                *ptr=temp;      
       		for(i=1;i<c;i++)
                  {
                   temp->next=p[i];
                      temp=temp->next;
                   }
          }

    int  count(str *ptr)
   {
     int c=0;
         while(ptr)
         {
            ptr=ptr->next;
             c++;
         }
        return c;
    }

  void add_end(str **ptr)
  {
    str *temp=(str*)malloc(sizeof(str));
    printf("Enter data:");
     scanf("%d",&temp->rn);
     
       if(*ptr==0)
      {
        temp->next=*ptr;
        *ptr=temp;
      }
       else
         {
         str *last=*ptr;
           
                         while(last->next)
                          last=last->next;

                   temp->next=last->next;
                    last->next=temp;
           }
      }
   void print(str *ptr)
   {
        while(ptr)
       {
          printf("%d ",ptr->rn);
          ptr=ptr->next;
       }
printf("\n");
  }
