#include <iostream>

using namespace std;

int main()
{   //given array
    int arr[]={10,8,7,16,9,43};
    int temp1[4];
    
    //ask for specific queries
    //and store it in temp1 array
    printf("%d %d\n",0,1);
    fflush(stdout);
    scanf("%d",&temp1[0]);
    printf("%d %d\n",1,2);
    fflush(stdout);
    scanf("%d",&temp1[1]);
    printf("%d %d\n",3,4);
    fflush(stdout);
    scanf("%d",&temp1[2]);
    printf("%d %d\n",4,5);
    fflush(stdout);
    scanf("%d",&temp1[3]);
    
    int temp[4][2];
    //resolve temp1 elements into 
    //multiplicants from array
    for(int k=0;k<4;k++){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(temp1[k]==arr[i]*arr[j])
            {temp[k][0]=arr[i];
             temp[k][1]=arr[j];
            }
        }
    }
    }
    
    //for asked choice of queries the middle element
    //appears twice in temp and hence order can be found.
    for(int i=0;i<4;i+=2){
    if(temp[i][0]==temp[i+1][0]){
    printf("%d %d %d ",temp[i][1],temp[i][0],temp[i+1][1]);
        fflush(stdout);
    }
    else if(temp[i][1]==temp[i+1][0]){
    printf("%d %d %d ",temp[i][0],temp[i][1],temp[i+1][1]);
        fflush(stdout);
    }
    else if(temp[i][1]==temp[i+1][1]){
    printf("%d %d %d ",temp[i][0],temp[i][1],temp[i+1][0]);
       fflush(stdout);
    }
    else{
    printf("%d %d %d ",temp[i][1],temp[i][0],temp[i+1][0]);
        fflush(stdout)
    }
}
}

