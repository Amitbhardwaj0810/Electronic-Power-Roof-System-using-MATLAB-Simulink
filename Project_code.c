#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // for sleep()

// Function prototypes
bool automaticSunroofControl(int speed, bool rainSensor, bool airbagSensor);
bool parkingSubsystem(int temperature, bool parking);

int main()
{
    // Simulated sensor inputs (can be replaced with real sensor readings)
    int speed;
    bool rainSensor;
    bool airbagSensor;
    int temperature;
    bool parking;

    // Run the control loop
    while (1)
    {
        // Simulate sensor input (this could be replaced by actual sensor readings)
        printf("\n--- Input Sensor Values ---\n");
        printf("Enter Speed (km/h): ");
        scanf("%d", &speed);

        printf("Is Rain Detected? (1 = Yes, 0 = No): ");
        scanf("%d", (int *)&rainSensor);

        printf("Is Airbag Deployed? (1 = Yes, 0 = No): ");
        scanf("%d", (int *)&airbagSensor);

        printf("Enter Temperature (°C): ");
        scanf("%d", &temperature);

        printf("Is Car Parked? (1 = Yes, 0 = No): ");
        scanf("%d", (int *)&parking);

        // Evaluate system logic
        bool autoControl = automaticSunroofControl(speed, rainSensor, airbagSensor);
        bool parkControl = parkingSubsystem(temperature, parking);

        // Combine both decisions (logical OR)
        bool sunroofOpen = autoControl || parkControl;

        // Output result
        printf("\n--- Sunroof Status ---\n");
        if (sunroofOpen)
        {
            printf("Sunroof is OPEN.\n");
        }
        else
        {
            printf("Sunroof is CLOSED.\n");
        }

        // Optional delay between cycles
        sleep(2); // Sleep for 2 seconds before next iteration
    }

    return 0;
}

// Automatic Sunroof Control Block Logic
bool automaticSunroofControl(int speed, bool rainSensor, bool airbagSensor)
{
    // Sunroof opens only if:
    // - Speed is less than 40 km/h
    // - No rain detected
    // - Airbag not deployed
    if (speed < 10 && !rainSensor && airbagSensor)
    {
        return true;
    }
    return false;
}

// Parking Subsystem Logic
bool parkingSubsystem(int temperature, bool parking)
{
    // Sunroof opens when parked and temperature is more than 30°C
    if (parking && temperature > 40)
    {
        printf("Sunroof is tilted\n");
    }
}
