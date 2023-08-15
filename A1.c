#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char x[100];
    scanf("%s", x);

    char s[10][30];
    char temp[30] = {0};
    int s_index = 0;
    char c = '.';
    int x_len = strlen(x);

    for (int i = 0; i < x_len; i++) {
        if (x[i] != c) {
            temp[strlen(temp)] = x[i];
        }
        else {
            strcpy(s[s_index], temp);
            s_index++;
            memset(temp, 0, sizeof(temp));
        }
    }
    strcpy(s[s_index], temp);

    int pos = (int)(strchr(x, '.') - x);
    char n_str[4] = {0};
    strncpy(n_str, x, pos);
    int n = atoi(n_str);

    if (n <= 127) {
        printf("Class A\n");
        printf("Network ID: %s\n", s[0]);
        printf("Host ID: ");
        for (int i = 1; i <= s_index; i++) {
            printf("%s", s[i]);
            if (i != s_index) {
                printf(".");
            }
        }
        printf("\n");
    }
    else if (n <= 191) {
        printf("Class B\n");
        printf("Network ID: ");
        for (int i = 0; i < 2; i++) {
            printf("%s", s[i]);
            if (i != 1) {
                printf(".");
            }
        }
        printf("\n");
        printf("Host ID: ");
        for (int i = 2; i < 4; i++) {
            printf("%s", s[i]);
            if (i != 3) {
                printf(".");
            }
        }
        printf("\n");
    }
    else if (n <= 223) {
        printf("Class C\n");
        printf("Network ID: ");
        for (int i = 0; i < 3; i++) {
            printf("%s", s[i]);
            if (i != 2) {
                printf(".");
            }
        }
        printf("\n");
        printf("Host ID: ");
        for (int i = 3; i < 4; i++) {
            printf("%s", s[i]);
            
        }
        printf("\n");
    }
    else {
        printf("Class D or E\n");
        printf("Network ID: ");
        for (int i = 0; i < 4; i++) {
            printf("%s", s[i]);
            if (i != 3) {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
