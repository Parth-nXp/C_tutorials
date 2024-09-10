# include <stdio.h>


void namaste();
void bonjour();

int main(){
    char entry;
    printf("enter i if indian or f if french: ");
    scanf("%c", &entry);
    if (entry == 'i'){
        namaste();
    }
    else if (entry == 'f'){
        bonjour();
    }
    else {
        printf("wrong input");
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}

