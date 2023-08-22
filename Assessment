 #include<stdio.h> 
 void show(); 
 void mult(); 
 int main() 
 { 
     int i,j; 
     int m1[2][2],m2[2][2],result[2][2]; 
     printf("Enter the first matrix\n"); 
     for(i=0; i<2; i++) 
     { 
         for(j=0; j<2; j++) 
         { 
             printf("Enter the element :"); 
             scanf("%d",&m1[i][j]); 
         } 
     } 
     show(m1); 
     printf("\nEnter the second matrix\n"); 
     for(i=0; i<2; i++) 
     { 
         for(j=0; j<2; j++) 
         { 
             printf("Enter the element :"); 
             scanf("%d",&m2[i][j]); 
         } 
     } 
     show(m2); 
     mult(m1,m2,result); 
     printf("\nThe finel result is\n"); 
     show(result); 
     return 0; 
 } 
 void show(int m[2][2]) 
 { 
     int i,j; 
     for(i=0; i<2; i++) 
     { 
         for(j=0; j<2; j++) 
         { 
             printf("%d\t",m[i][j]); 
         } 
         printf("\n"); 
     } 
 } 
 void mult(int x[2][2],int y[2][2],int z[2][2]) 
 { 
     int temp=0,i,j,k; 
     for(i=0; i<2; i++) 
     { 
         for(j=0; j<2; j++) 
         { 
             for(k=0; k<2; k++) 
             { 
                 temp += x[i][k] * y[k][j]; 
             } 
             z[i][j]=temp; 
             temp=0; 
         } 
     } 
 }
