#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include "zoo_food_calculator.h"

float process_mammal(Animal* animal)
{
  float food_lbs = 0; 
  food_lbs += (animal->weight/10) + (animal->height/3) + (animal->age/50);
  if(animal->faster_than_human) {
    food_lbs += 0.15*food_lbs;
  } 
  return food_lbs;
}

float process_amphibian(Animal* animal) //function to calculate food for Amphibian
{
  double food;
  food = animal->weight*2/15 + animal->length/24 + (double)animal->age/20;
  if(animal->pregnant == 1)
    food = food + (food*0.1);
  return food;
}

float process_reptile(Animal* animal) //function to calculate food for reptile
{
  double food;
  food = animal->weight/30 + animal->length/2 ;
  if(animal->winter == 1)
    food = food - (food*0.1);
  return food;
}

void print_animal(Animal* animal) 
{
  char buf[4]; 
  switch(animal->type)
  {
    case mammal: 
      if(animal->faster_than_human)
        strcpy(buf, "yes"); 
      else 
        strcpy(buf, "no");
      printf("mammal, weight : %f, height : %f, age : %d, faster than human : %s \n",animal->weight,animal->height,animal->age,buf);
      break;
    case amphibian: 
      if(animal->pregnant)
        strcpy(buf, "yes");
      else
        strcpy(buf, "no"); 
      printf("amphibian, weight : %f, length : %f, age : %d, pregnant : %s \n",animal->weight,animal->length,animal->age,buf);
      break;
    case reptile:
      printf("reptile, weight : %f, length : %f\n",animal->weight,animal->length);
      break;
  }
}

