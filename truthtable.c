#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n = 5;
char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char display[100];

int clean_stdin(){
    while (getchar()!='\n');
    return 1;
}

char *foo(int count) {
    char *ret = malloc(count);
    if(!ret)
        return NULL;

    for(int i = 0; i < count; ++i) 
        ret[i] = i;

    return ret;
}

int gen_bincount() {
    char *p = foo(10);
    if(p) {
        // do stuff with p
        free(p);
    }
    return *p;
}

char* disp_truthtable(int input[],int output[],int isize, int osize){

    char* source = alphabet;
    char* destination = display;
    memset(display,0,sizeof(display));

    for(int i = 0; i < isize;i++){
        *destination++ = *source++;
        *destination++ = ' ';
    }

    *destination++ = '|';
    *destination++ = ' ';

    for(int i = 0; i < osize;i++){
        *destination++ = *source++;
        *destination++ = ' ';
    }

    *destination++ = '\n';

    for(int i = 0; i < 2 * (isize + osize) + 1;i++){
        *destination++ = '-';
    }

    return display;
}

int main(void){
    printf("  _______         _   _       _______    _     _        _______        _   \n");
    printf(" |__   __|       | | | |     |__   __|  | |   | |      |__   __|      | |  \n");
    printf("    | |_ __ _   _| |_| |__      | | __ _| |__ | | ___     | | ___  ___| |_ \n");
    printf("    | | '__| | | | __| '_ \\     | |/ _` | '_ \\| |/ _ \\    | |/ _ \\/ __| __|\n");
    printf("    | | |  | |_| | |_| | | |    | | (_| | |_) | |  __/    | |  __/\\__ \\ |_ \n");
    printf("    |_|_|   \\__,_|\\__|_| |_|    |_|\\__,_|_.__/|_|\\___|    |_|\\___||___/\\__|\n\n");

    int mode = 0;  
    char c;
    
    printf("INPUT FORMAT: \n (1) Manual\n (2) Random\n\nYOUR INPUT (1-2): ");

    if((((scanf("%d%c", &mode, &c)!=2 || c!='\n') 
        && 
        clean_stdin()) || mode<1 || mode>2)){
        printf("invalid input idiot!\n");
    }
    else{

        int test_input0[4] = {0,0,1,1};
        int test_input1[4] = {0,1,0,1};
        int test_output[4] = {0,1,0,0};
        int test[3][4] = {*test_input0,*test_input1,*test_output};
        

        if(mode == 1){
            // printf("mode 1 activaaate\n");
        }

        else if(mode == 2){
            // printf("mode 2 activaaate\n");
        }

        printf("%s\n",disp_truthtable(test_input0,test_output,sizeof(test_input0)/sizeof(*test_input0),sizeof(test_output)/sizeof(*test_output)));
    }

    return 0;  
}