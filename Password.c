#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int len, i, has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    printf("Enter a password: ");
    scanf("%s", password);

    len = strlen(password);

    if (len < 8) {
        printf("Password must be at least 8 characters long\n");
        return 1;
    }

    for (i = 0; i < len; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else if (ispunct(password[i])) {
            has_special = 1;
        }
    }

    if (!has_upper) {
        printf("Password must contain at least one uppercase letter\n");
        return 1;
    }

    if (!has_lower) {
        printf("Password must contain at least one lowercase letter\n");
        return 1;
    }

    if (!has_digit) {
        printf("Password must contain at least one digit\n");
        return 1;
    }

    if (!has_special) {
        printf("Password must contain at least one special character\n");
        return 1;
    }

    printf("Password is valid\n");

    return 0;
}
