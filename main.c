#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct Node
{
    char* key;
    int value;
    struct Node* next;
} Node;

Node* hashTable[SIZE];

unsigned int hash(char* key) {
    unsigned int hashValue = 0;
    for (int i = 0; key[i] != '\0'; i++)
    {
        hashValue += key[i];
    }
    return hashValue % SIZE;
}

void insert(char* key, int value) {
    unsigned int index = hash(key);

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = value;
    newNode->next = NULL;

    if(hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
} 

int get(char* key) {
    unsigned int index = hash(key);
    Node* current = hashTable[index];

    while (current != NULL) {
        if(strcmp(current->key, key) == 0){
            return current->value;
        }
        current = current->next;
    }
    return -1;
}

int main() {
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = NULL;
    }

    insert("Sword", 150);
    insert("Shield", 80);
    insert("Potion", 25);

    printf("Sword damage: %d\n", get("Sword"));
    printf("Shield defense: %d\n", get("Shield"));
    printf("Potion healing: %d\n", get("Potion"));
    printf("Unknown item: %d\n", get("Unknown"));

    return 0;
}