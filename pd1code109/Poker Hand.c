#include <stdio.h>
#include <stdbool.h>
int catagorize(bool deck[13][4]);

int main() {
    const char ranks[13] = {'2','3','4','5','6','7','8','9','t','j','q','k','a'},
               suits[4] = {'c','d','h','s'};
    bool deck[13][4] = {false};
    int i, j, k, n, catagory[4]={0};
    char rank, suit,c;
    for(n = 0; n < 4; n++) {
        for (i = 0; i < 5; i++) {
            scanf("%c%c%c", &rank, &suit, &c);
            for (j = 0; j < 13; j++) {
                for (k = 0; k < 4; k++) {
                    if (rank == ranks[j] && suit == suits[k]) {
                        deck[j][k] = true;
                    }
                }
            }
        }
        catagory[n] = catagorize(deck);
        //print out the table
/*
        for (int l = 0; l < 13; l++){
            for (int m = 0; m < 4; m++){
                if (deck[l][m]){
                    printf("1");
                }else {printf("0");
                }
            }
            printf("\n");
        }*/
        for (int l = 0; l < 13; l++)
            for (int m = 0; m < 4; m++)
                deck[l][m] = false;
        //printf("==%d==\n",catagory[n]);
    }
struct p{
        char player;
        int category;
    };
    struct p player[4];
for(int o = 0; o < 4; o++){
    player[o].category = catagory[o];
    player[o].player = o + 65;
}
    for(int x=0;x<4;x++)
        for(int y=x+1;y<4;y++)
            if(player[x].category < player[y].category)
            {
                struct p temp = player[x];
                player[x] = player[y];
                player[y] = temp;
            }
//quickSort(&player->category,0,3);
for(int p = 3; p >= 0; p--) printf("%c ",player[p].player);
/*
    for (int l = 0; l < 13; l++){
        for (int m = 0; m < 4; m++){
            if (deck[l][m]){
                printf("1");
            }else {printf("0");
            }
        }
        printf("\n");
    }
*/
    return 0;
}

int catagorize(bool deck[13][4]) {
    int i, j,cate = 0,value = 0,sub = 1, pair = 0, rank = 0, suit = 0;
    bool house, yes;

    for (j = 3; j > -1; j--){
        for (i = 0; i < 13; i++){
            if(deck[i][j]) {
                value++;
                suit++;
                if(suit == 5) cate = 4;
                if(value == 5) cate = 1;
            }else{value = 0;}
            sub++;
        }
        value = 0;
        suit =0;
    }

    for(i = 0; i < 13; i++){
        for(j = 0; j < 4; j++) {
            if(deck[i][j]) {
                value++;
                yes = true;
                if(value == 4) cate = 2;
                if(value == 2) pair++;
                if(value == 3) house = true;
            }else{value = 0;
                yes = false;
            }
        }
        if(yes) rank++;
        if(rank == 5 && cate == 0) cate = 5;
        value = 0;
    }
    if(house && pair == 2) cate = 3;
    if(pair == 1 && cate == 0) cate = 8;
    if(pair == 2 && cate == 0) cate = 7;
    if(cate == 0) cate =9;
    return cate;
    }