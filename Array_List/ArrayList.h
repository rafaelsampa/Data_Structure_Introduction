typedef struct array Array;


Array * Array_Create(int capacity, int growthFactor);
void Array_Destroy(Array * array);
int Array_Size(Array * array);
void Array_Add(Array * array, int value);
void Array_Print(Array * array);


