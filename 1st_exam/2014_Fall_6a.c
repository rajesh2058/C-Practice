#include<stdio.h>
#include<string.h>
struct football {
    char player_name[50];
    char country_name[50];
    int goal_count;
};
void main(){
    struct football f[5], t;
    for (int i=0; i<5; i++){
        printf("\nEnter the information of %d player \n", i+1);
        printf("Name : ");
        scanf("%s", f[i].player_name);
        printf("Country : ");
        scanf("%s", f[i].country_name);
        printf("Number of goal scored : ");
        scanf("%s", &f[i].goal_count);
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            if (strcmpi(f[j].country_name, f[j+1].country_name > 0)){
                t = f[j];
                f[j] = f[j+1];
                f[j+1] = t;
            }
        }
    }
    printf("\nCountry name , player name , no of goal scored");
    for (int i=0; i<5; i++){
        printf("\n%s  %s  %d", f[i].country_name, f[i].player_name, f[i].goal_count);
    }
}