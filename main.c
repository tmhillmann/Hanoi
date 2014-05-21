#include <stdio.h> 
  
void moves(int,char,char,char); 
  
int main(void) 
    { int n; 
      printf("Enter the number of disks: "); 
      scanf("%d",&n); 
      int i; 
      int m=1; 
      for (i=1;i<n+1;i++) 
        { 
            m=2*m; 
        } 
      m=m-1; 
      printf("The Tower of Hanoi is solved in %d moves. \n",m); 
      printf("This involves the moves: \n \n"); 
      moves(n,'A','C','B'); 
      return 0; 
    } 
  
void moves(int n,char a,char c,char b) 
    { 
      if (n==1) 
      { 
          printf("Disk %d from %c to %c \n",n,a,c); 
          return; 
      } 
      if (n==0) 
      { 
          return; 
      } 
      moves(n-1,a,b,c); 
      printf("Disk %d from %c to %c \n",n,a,c); 
      moves(n-1,b,c,a); 
    } 
