#include <stdio.h>
#include <string.h>

int main(){
    int B[3][2][2]={{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};
    // 
    int (*P)[2][2]=B;
    printf("%d \n",B);
    printf("%d \n",B+1);
    printf("%d \n",B+2);
    printf("%d \n",*B);
    printf("%d \n",*B+1);
    printf("%d \n",*(*(*(B))));
    printf("%d \n",*(*(*(B))+1));
    printf("%d \n",*(*(*(B)+1)));
    printf("%d \n",*(*(*(B)+1)+1));
    printf("%d \n",*(*(*(B+1)+1)+1));
    printf("%d \n",*(*(*(B+2))+1));
    printf("%d \n",*(*(*(B+1))+1));
    


    // int i=0;
    // int j=0;
    // for(i=0;i<sizeof(B)/sizeof(B[0]);i++){
    //     for(j=0;j<sizeof(B[0])/sizeof(B[0][0]);j++){
    //         // printf("%d \n",B[i][j]);
    //         printf("%d \n",*(*B+i)+j);
    //         // printf("%d \n",*(B[i]+j));
    //     }
    // }
}