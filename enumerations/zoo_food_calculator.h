#ifndef zoo_food_calculator_h
#define zoo_food_calculator_h

typedef enum {
  mammal=0, amphibian=1, reptile=2
} AnimalTypeEnum;

typedef struct {
  AnimalTypeEnum type;
  float weight;
  float height;
  float length;
  int age;
  int faster_than_human;
  int pregnant;
  int winter;
} Animal;


// function declarations (this is just declaring the functions, not implementing them)
float process_mammal(Animal* animal);
float process_amphibian(Animal* animal);
float process_reptile(Animal* animal);

void print_animal(Animal* animal);

#endif
