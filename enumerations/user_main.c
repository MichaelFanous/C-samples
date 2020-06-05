#include "zoo_food_calculator.h"
#include <stdio.h> 
#include <string.h> 

int user_main() 
{ 
    int choice = 1;
    //struct Animal animal = malloc(sizeof *Animal);
    Animal *animal;   /// declaration ok?
    float food; 
    while (choice) { 
        printf("Zoo Food Calculator:\n"); 
        printf("Animal Type ? ([0]=mammal, [1]=amphibian, or [2]=reptile) : ");
        int animalType;
        scanf("%d",&animalType);
        animal->type=animalType;
        float animalWeight;
        printf("Weight in lbs : "); 
        scanf("%f",&animalWeight);
        animal->weight=animalWeight;
        printf("type=%d\n",animal->type);
        printf("inputtype=%d\n",animalType);
        switch(animal->type) { 
            case mammal: 
                printf("Age : ");
                scanf("%d",&animal->age); 
                printf("Can it run faster than a human ? (0=No or 1=Yes : "); 
                scanf("%d",&animal->faster_than_human); 
                printf("Height : ");
                scanf("%f",&animal->height);
                food = process_mammal(animal); 
                printf("\nEntered Animal Details\n"); 
                printf("***********************\n");
                print_animal(animal); 
                printf("***********************\n");
                printf("For this animal, you'll need %f lbs of food a week\n\n", food);
                break;
            case amphibian: 
                printf("Age : ");
                scanf("%d",&animal->age);
                printf("Is it Pregnant ? (0=No or 1=Yes : ");
                scanf("%d",&animal->pregnant);
                printf("Length : ");
                scanf("%f",&animal->length);
                food = process_amphibian(animal); 
                printf("\nEntered Animal Details\n"); 
                printf("***********************\n"); 
                print_animal(animal); 
                printf("***********************\n"); 
                printf("For this animal, you'll need %f lbs of food a week\n\n", food); 
                break; 
            case reptile: 
                printf("Is it winter ? (0=No or 1=Yes : "); 
                scanf("%d",&animal->winter); 
                printf("Length : ");
                scanf("%f",&animal->length);
                food = process_reptile(animal); 
                printf("\nEntered Animal Details\n"); 
                printf("***********************\n"); 
                print_animal(animal); 
                printf("***********************\n"); 
                printf("For this animal, you'll need %f lbs of food a week\n\n", food); 
                break;
            default:
                printf("Invalid Animal Type");
        }
    }
    return 0;
}
