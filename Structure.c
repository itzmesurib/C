#include<stdio.h>

//Structure in Global scope
struct car{
        char *engine;
        char *fuel_type;
        int fuel_tank_capacity;
        int seating_capacity;
        float city_mileage;
    };

int main() {
    
    struct car car1;
    struct car car2;
    car1.engine = "1200CC Engine";
    car1.fuel_type = "Diesel";
    car1.fuel_tank_capacity = 35;
    car1.seating_capacity = 4;
    car1.city_mileage = 22.5;

    car2.engine = "2000CC Engine";
    car2.fuel_type = "Petrol";
    car2.fuel_tank_capacity = 45;
    car2.seating_capacity = 6;
    car2.city_mileage = 15.05;

    printf("Car1 Engine is : %s\n", car1.engine);
    printf("Car2 Engine is : %s\n", car2.engine);
    printf("Car1 Fuel Type is : %s\n", car1.fuel_type);
    printf("Car2 Fuel Type is : %s\n", car2.fuel_type);
    printf("Car1 Fuel Tank Capacity is : %d\n", car1.fuel_tank_capacity);
    printf("Car2 Fuel Tank Capacity is : %d\n", car2.fuel_tank_capacity);
    printf("Car1 Seating Capacity is : %d\n", car1.seating_capacity);
    printf("Car2 seating capacity is : %d\n", car2.seating_capacity);
    printf("Car1 mileage in city is : %f\n", car1.city_mileage);
    printf("Car2 mileage in city is : %f\n", car2.city_mileage);
}