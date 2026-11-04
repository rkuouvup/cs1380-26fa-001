#include <stdio.h>

/*#define SUIT        int
#define CLUBS       0
#define DIAMONDS    1
#define HEARTS      2
#define SPADES      3*/

enum suit {CLUBS, DIAMONDS = 10, HEARTS, SPADES};
typedef enum {MON, TUE, WED} Day;

struct card_t {
    enum suit s;
    char rank[3];
};

int main() {
    //int d = 1;  // d is the day. 1 is Monday. 2 is Tuesday

    /*SUIT s;
    s = HEARTS;
    printf("s: %d, %s\n", s, (s == HEARTS) ? "Hearts" : "Others");*/

    enum suit s = HEARTS;
    Day d = WED;
    printf("s: %d, %s\n", s, (s == HEARTS) ? "Hearts" : "Others");

    if (s == d)
        printf("Same data\n");
    else
        printf("Different data\n");

    struct card_t cards[] = {{CLUBS, "J"}, {DIAMONDS, "2"}};
    for (int i = 0; i < 2; i++) {
        switch(cards[i].s) {
            case CLUBS:     printf("CLUBS\t\t%s\n", cards[i].rank);
                            break;
            case DIAMONDS:  printf("DIAMONDS\t%s\n", cards[i].rank);
                            break;
            case HEARTS:    printf("HEARTS\t\t%s\n", cards[i].rank);
                            break;
            case SPADES:    printf("SPADES\t\t%s\n", cards[i].rank);
                            break;
        }
    }
    return 0;
}