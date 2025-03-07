#include <stdio.h>

int main(){
    printf("Enter all dimensions to calculate the volume\n");
    float x, y, z, volume;
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);
    printf("z: ");
    scanf("%f", &z);
    volume = x*y*z;
    
    if (x<0 || y<0 || z<0)
    {
        printf("dimensions should be bigger than 0\n");
    }
    else
    {
        printf("\nvolume: %0.2f", volume);
    }
}