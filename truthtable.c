#include <stdio.h>

int clean_stdin(){
    while (getchar()!='\n');
    return 1;
}

int disp_truthtable(int twoD){

    for(int i = 0; i < sizeof(twoD) / sizeof(twoD); i++){
        printf("test");
    
    }
    return 1;
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

        
        /*
        for(int i = 0; i < sizeof(test_output) / sizeof(*test_output); i++){
            printf("%d",test_output[i]);
        }
        */

        if(mode == 1){
            printf("mode 1 activaaate\n");
        }

        else if(mode == 2){
            printf("mode 2 activaaate\n");
        }
            disp_truthtable(9);
    }

    return 0;  
}