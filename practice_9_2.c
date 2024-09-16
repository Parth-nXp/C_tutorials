# include <stdio.h>
# include <string.h>

struct addresses{
    int house_no;
    int block;
    char city[100];
    char state[100];
};

void print_address(struct addresses adds);

int main(){
    struct addresses adds[5];
    printf("Enter info for person 1: ");
    scanf("%d",&adds[0].house_no);
    scanf("%d",&adds[0].block);
    scanf("%s",&adds[0].city);
    scanf("%s",&adds[0].state);
    print_address(adds[0]);

    printf("Enter info for person 2: ");
    scanf("%d",&adds[1].house_no);
    scanf("%d",&adds[1].block);
    scanf("%s",&adds[1].city);
    scanf("%s",&adds[1].state);
    print_address(adds[1]);

    printf("Enter info for person 3: ");
    scanf("%d",&adds[2].house_no);
    scanf("%d",&adds[2].block);
    scanf("%s",&adds[2].city);
    scanf("%s",&adds[2].state);
    print_address(adds[2]);

    printf("Enter info for person 4: ");
    scanf("%d",&adds[3].house_no);
    scanf("%d",&adds[3].block);
    scanf("%s",&adds[3].city);
    scanf("%s",&adds[3].state);
    print_address(adds[3]);

    printf("Enter info for person 5: ");
    scanf("%d",&adds[4].house_no);
    scanf("%d",&adds[4].block);
    scanf("%s",&adds[4].city);
    scanf("%s",&adds[4].state);
    print_address(adds[4]);
    return 0;
}

void print_address(struct addresses adds){

    printf("address is %d, %d, %s, %s", adds.house_no, adds.block, adds.city, adds.state);
}