#include <stdio.h>

#define MAX_CANDIDATES 25

struct candidate {
    char name[69];
};

int main() {
    struct candidate candidates[MAX_CANDIDATES] = {
        {"Yogendra"},
        {"Mayank"},
        {"Sparsh"},
        {"Prayag"},
        {"Rajat"},
        {"Shreekar"},
        {"Kuldeep"}
    };

    int arr[MAX_CANDIDATES] = {0};

    while (1) {
        printf("              ******** IIT JODHPUR STUDENT BODY ELECTION ********\n");
        printf("                 #### Election will be held between 6-7th April ####\n");
        printf("1. Yogendra\n");
        printf("2. Mayank\n");
        printf("3. Sparsh\n");
        printf("4. Prayag\n");
        printf("5. Rajat\n");
        printf("6. Shreekar\n");
        printf("7. Kuldeep\n");
        printf("8. Declare result\n");
        
       
        int n;
        scanf("%d", &n);
        // when we press option 1

        if(n == 1){
            printf("%s","Yogendra\n");
            arr[0]++;
        }
        // when we press option 2
        else if(n == 2){
            printf("%s","Mayank\n");
            arr[1]++;
        }
        // when we press option 3
        else if(n == 3){
            printf("%s","Sparsh\n");
            arr[2]++;
            
        }
        
        // when we press option 4
        else if(n == 4){
        printf("%s","Prayag\n");
            arr[3]++;
        }
    
         
        // when we press option 5
        else if(n == 5){
            printf("%s","Rajat\n");
            arr[4]++;
        }


        
        // when we press option 5
        else if(n == 6){
            printf("%s","Shreekar\n");
            arr[5]++;
        }

        else if(n == 7){
            printf("%s","Kuldeep\n");
            arr[6]++;
        }if(n == 2005){
        
         printf("Votes of different person :- %d %d %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3]  ,arr[4], arr[5], arr[6] );
        }
        
        else if(n == 955){
        break;
        }
        
    }
    

    // Find the winner
    int maxVotes = arr[0];
    int winnerIndex = 0; // Assume the first candidate is the winner

    for(int i = 1; i < 7; i++) {
        if (arr[i] > maxVotes) {
            maxVotes = arr[i];
            winnerIndex = i;
        }
    }

    // Print the winner
    if (winnerIndex == 0)
        printf("Winner is Yogendra with %d votes\n", arr[0]);
    else if (winnerIndex == 1)
        printf("Winner is Mayank with %d votes\n", arr[1]);
    else if (winnerIndex == 2)
        printf("Winner is Sparsh with %d votes\n", arr[2]);
    else if (winnerIndex == 3)
    printf("Winner is Prayag with %d votes\n", arr[3]);
    else if(winnerIndex == 4)
    printf("winner is Rajat with %d votes\n ", arr[4]);
    else if(winnerIndex == 5)
    printf("winner is Shreekar with %d votes\n", arr[5]);
    else if(winnerIndex == 6)
    printf("winner is Kuldeep with %d votes\n",arr[6]);
    return 0;
}
