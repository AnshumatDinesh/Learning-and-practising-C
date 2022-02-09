#include <stdio.h>
#include <stdlib.h>
void main(){
    int result[6]={0,0,0,0,0,0};
    int ballot[]={1,2,34,5,5,5,5,2,5,5,5,5,6,1,2,3,4,3,3,2,3,3};
    int size = sizeof(ballot) / sizeof(int);
    for(int i=0;i<size;i++){
        switch (ballot[i])
        {
        case 1:
            result[ballot[i]-1]+=1;
            break;
        case 2:
            result[ballot[i]-1]+=1;
            break;
        case 3:
            result[ballot[i]-1]+=1;
            break;
        case 4:
            result[ballot[i]-1]+=1;
            break;
        case 5:
            result[ballot[i]-1]+=1;
            break;
        default:
            result[5]+=1;
            break;
        }
    }
    printf("Candidate 1: %d\n",result[0]);
    printf("Candidate 2: %d\n",result[1]);
    printf("Candidate 3: %d\n",result[2]);
    printf("Candidate 4: %d\n",result[3]);
    printf("Candidate 5: %d\n",result[4]);
    printf("Spoilt Ballot: %d\n",result[5]);
}