 #include <stdio.h>

float Kilometers(float meters) {
    const float conversionFactor = 0.001; // 
    static int callCount = 0; 
    callCount++;
    printf("Function called %d times.\n", callCount);
    return meters * conversionFactor;
}

int main() {
    float meters;

    printf("Enter the distance in meters: ");
    scanf("%f", &meters);

    float kilometers = Kilometers(meters);
    printf("Distance in kilometers: %.3f km\n", kilometers);

    Kilometers(500);
    Kilometers(1000);

    return 0;
}
