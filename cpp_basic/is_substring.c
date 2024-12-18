//auther:       SwarupSikder
//judge:        beeCrowd
//problem:      isSubstring
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool isSubstring(char s1[], int len_s1, char s2[], int len_s2){
    int maxLen, minLen;
    char maxStr[1001], minStr[1001];
    if(len_s1>len_s2){
        maxLen = len_s1;
        strcpy(maxStr, s1);

        minLen = len_s2;
        strcpy(minStr, s2);
    }
    else{
        maxLen = len_s2;
        strcpy(maxStr, s2);
        
        minLen = len_s1;
        strcpy(minStr, s1);
    }



    int i=0, j=0, countMatch=0;
    while(1){
        if(j==maxLen-1 || countMatch==minLen){
            break;
        }

        if(minStr[i]==maxStr[j]){
            for(int z=j; z<maxLen ;){
                if(minStr[i]==maxStr[z]){
                    countMatch++;
                    //printf("%c %c %d i=%d z=%d\n", minStr[i], maxStr[z], countMatch, i, z);
                }
                else{
                    i=0;
                    countMatch=0;
                    j++;
                    break;
                }

                if(countMatch==minLen){
                    break;
                }
                else{
                    i++;
                    z++;
                }

            }
        }
        else{
            j++;
        }
    }
        
        
    //----------------//
    //     return     //
    //----------------//
    if(countMatch==minLen){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    //---------------//
    //     input     //
    //---------------//
    char s1[1001], s2[1001];
    scanf("%s\n", s1);
    scanf("%s", s2);
        


    //-----------------//
    //     process     //
    //-----------------//
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    


    //----------------//
    //     output     //
    //----------------//
    if(isSubstring(s1, len_s1, s2, len_s2)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}