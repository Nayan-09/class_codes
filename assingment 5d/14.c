#include <stdio.h>

int main() {
    float pole_height, jump_height = 5, attempts = 1;
    
    printf("Enter the height of the pole in feet: ");
    scanf("%f", &pole_height);
    
    while (jump_height < pole_height) {
        jump_height *= 0.98; // decrease jump height by 2%
        attempts++; // increment the number of attempts
    }
    
    printf("The monkey made %.0f attempts to reach the top of the pole.", attempts);
    return 0;
}