// Online C compiler to run C program online  Bubble sort
// #include <stdio.h>
// void bubble_sort(int B[],int N)
// {  
//     int round,i,temp,flag;
//     flag=0;
//     for(round=1;round<=N-1;round++){
//        for(i=0;i<=N-1-round;i++){
//            if(B[i]>B[i+1])
//            {flag=1;
//              temp=B[i];
//              B[i]=B[i+1];
//              B[i+1]=temp;
//            }
//            if(flag==0)
//              {
//                  printf("round = %d\n",round);
//                  return;
//              }
//        }
//     }
// }
// int main() 
// {
//      int A[]={34,15,29,8};
//      int i;
//      for(int i=0;i<=3;i++)
//           printf(" %d",A[i]);
//      printf("\n");
//      bubble_sort(A,4);
//      for(int i=0;i<=3;i++)
//           printf(" %d",A[i]);
// }

//selection sort

// Online C compiler to run C program online
// #include <stdio.h>
// int min(int A[],int k,int N)
// {
//     int LOC,MIN;
//     MIN=A[k];
//     LOC=k;
//     for(int j=k+1;j<=N-1;j++)
//     {
//         if(MIN>A[j])
//         {
//             MIN=A[j];
//             LOC=j;
//         }
//     }
//     return LOC;
// }
// int main()
// {
//     int A[]={33,11,66,88,99,77,44,55,22,1};
//     int k,temp,LOC;
//     for(k=0;k<=9;k++){
//         printf(" %d",A[k]);
//     }
//     printf("\n");
//     for(k=0;k<=8;k++)
//     {
//         LOC=min(A,k,10);
//         temp=A[k];
//         A[k]=A[LOC];
//         A[LOC]=temp;
//     }
//     for(k=0;k<=9;k++){
//         printf(" %d",A[k]);
//     }
// }

//Insertion sort
// Online C compiler to run C program online
// #include <stdio.h>
// void insertion_sort(int A[],int N)
// {
//     int i,j,temp;
//     for(i=1;i<N;i++)
//     {
//         temp=A[i];
//         for(j=i-1;j>=0 && temp<A[j];j--)
//         {
//             A[j+1]=A[j];
//         }
//         A[j+1]=temp;
//     }
// }

// int main() 
// {
// int  A[]={34,45,11,89,55,19,22,8,40};

// for(int i=0;i<=8;i++)
//     printf("  %d",A[i]);
    
// printf("\n");

// insertion_sort(A,9);

// for(int i=0;i<=8;i++)
//     printf("  %d",A[i]);
// }

//Quick sort
// Online C compiler to run C program online
// #include <stdio.h>
// void quick(int A[],int N,int BEG,int END,int *LOCPTR)
// {
//     int LEFT,RIGHT,temp;
//     LEFT=BEG;RIGHT=END;
//     *LOCPTR=BEG;
// step2:
//     while(A[*LOCPTR]<=A[RIGHT] && *LOCPTR!=RIGHT)
//     {
//         RIGHT--;
//     }
//     if(*LOCPTR==RIGHT)
//        return;
//     if(A[*LOCPTR]>A[RIGHT])
//     {
//         temp=A[*LOCPTR];
//         A[*LOCPTR]=A[RIGHT];
//         A[RIGHT]=temp;
//         *LOCPTR=RIGHT;
//     }
//     goto step3;
// step3:
//   while(A[LEFT]<=A[*LOCPTR] && LEFT!=*LOCPTR)
//     LEFT++;
//   if(*LOCPTR==LEFT)
//       return;
//   if(A[LEFT]>A[*LOCPTR])
//   {
//      temp=A[LEFT];
//      A[LEFT]=A[*LOCPTR];
//      A[*LOCPTR]=temp;
//      *LOCPTR=LEFT;
//   }
//   goto step2;
// }
// void quick_sort(int A[],int N)
// {
//     int TOP=-1,BEG,END,LOC;
//     int LOWER[10],UPPER[10];
//     if(N>1)
//     {
//         TOP++;
//         LOWER[TOP]=0;
//         UPPER[TOP]=N-1;
//     }
//     while(TOP!=-1)
//     {
//         BEG=LOWER[TOP];
//         END=UPPER[TOP];
//         TOP--;
//         quick(A,N,BEG,END,&LOC);
//         if(BEG<LOC-1)
//         {   TOP++;
//             LOWER[TOP]=BEG;
//             UPPER[TOP]=LOC-1;
//         }
//         if(LOC+1<END)
//         {
//             TOP++;
//             LOWER[TOP]=LOC+1;
//             UPPER[TOP]=END;
//         }
        
//     }
// }
// int main() 
// {
//     int A[]={44,33,11,55,77,90,40,60,99,22,88,66};
//     for(int i=0;i<=11;i++)
//        printf("  %d",A[i]);
//      printf("\n");
//     quick_sort(A,12);
//     for(int i=0;i<=11;i++)
//        printf("  %d",A[i]);
// }


//Merge sort
// #include <iostream>
// void merge(int A[],int n1,int index1,int B[],int n2,int index2,int C[],int index )
// {
// while(n1&&n2)
// {
//     if(A[index1]<B[index2])
//     {
//         C[index]=A[index1];
//         index++;
//         index1++;
//         n1--;
//     }
//     else{
//         C[index]=B[index2];
//         index++;
//         index2++;
//         n2--;
//     }
// }    
// while(n1)
// {
//         C[index]=A[index1];
//         index++;
//         index1++;
//         n1--;
// }
// while(n2)
// {
//         C[index]=B[index2];
//         index++;
//         index2++;
//         n2--;
// }
// }
// void mergepass(int A[],int N,int L,int B[])
// {
//     int j,LB;
//     int Q, S, R;
//     Q=N/(2*L);//Q is the total pair of arrays to be merged
//     S=2*L*Q;// S is the total number of elements in all pair of arrays;
//     R=N-S;//Residual elements;
//     for(j=0;j< Q;j++)
//     {
//         LB=(2*j)*L;//Lower bound (index) of first array in each pair 
//         merge(A,L,LB,A,L,LB+L,B,LB);//merging two arrays
//     }
//     if(R<=L)//if only one sub array left
//     {
//         for(j=0;j<R;j++)
//             B[S+j]=A[S+j];//Copy last array to B
//     }
//     else
//     {
//         merge(A,L,S,A,R-L,S+L,B,S);
//     }
// }
// void merge_sort(int A[],int N)
// {
//     int L=1,B[11];
//     while(L<N)
//     {
//         mergepass(A,N,L,B);
//         mergepass(B,N,2*L,A);
//         L=4*L;
//     }
// }
// int main() 
// {
//    int i,a[]={11,66,88,33,66,77,99,88,22,44,55};
//    for(i=0;i<=10;i++)
//        printf("%d ",a[i]);
//    merge_sort(a,11);
//    printf("\n");
//    for(i=0;i<=10;i++)
//        printf("%d ",a[i]);
// }