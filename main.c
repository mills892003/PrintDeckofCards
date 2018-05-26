//  Print Deck of Cards
//  Created by Milan Patel on 5/26/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char suits[4][10];                  //Initialize and Assign Suits
    strcpy(suits[0],"Spades  ");
    strcpy(suits[1],"Clubs   ");
    strcpy(suits[2],"Diamonds");
    strcpy(suits[3],"Hearts  ");
                                        //Initialize and Assign Cards
    char cards[13][2] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
                                        //Print Deck of Cards
    int i,k;
    for(i=0;i<4;i++){
        for(k=0;k<13;k++){
            
                printf("-------------\n");
                printf("|\t\t\t|\n");
                printf("|\t\t\t|\n");
                printf("|\t%s\t\t|\n", cards[k]);
                printf("| %s\t|\n", suits[i]);
                printf("|\t\t\t|\n");
                printf("|\t\t\t|\n");
                printf("|\t\t\t|\n");
                printf("|\t\t\t|\n");
                printf("-------------\n\n\n");
            
        }
    }
    return(0);
}
