#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#endif

#define DEFAULT_TABLE_SIZE 1024

/**
 * Key-value pair to be stored in
 */
struct node {
    int key;
    int value;
    struct node *next;
};

typedef struct node Node;

/**
 * A hash per slot
 */
struct slot {
    // Point to the first node
    Node *first;
    // Point to he last node
    Node *tail;
};

typedef struct slot Slot;

/**
 * Header of a HashTable
 */
struct hash_table {
    Slot *slots;
    int length;
};

typedef struct hash_table HashTable;

/**
 * Get the hash code of given key
 *
 * @param key Target key
 * @return Corresponding hash code
 */
int getHashCode(int key);

/**
 * Create a new node contains given key and value
 *
 * @param key Value entry
 * @param value value
 * @return Node wanted
 */
Node *createNewNode(int key, int value);

/**
 * Add the given node to the table at tha tail of given slot
 *
 * @param slot Slot it belongs to
 * @param node Target node
 * @return Result of insertion, true for success, false if failed
 */
bool addNewNode(Slot *slot, Node *node);

/**
 * Create a empty table
 *
 * @return The pointer the this new table
 */
HashTable *createNewTable();

/**
 * Whether it contains the given key
 *
 * @param table Table to be searched
 * @param key Target key
 * @return If it is contained, returns true, or false if non-exists.
 */
bool containsKey(HashTable *table, int key);

/**
 * Whether it contains the given value
 *
 * @param table Table to be searched
 * @param value Target value
 * @return If it is contained, return true, or false if non-exists.
 */
bool containsValue(HashTable *table, int value);

/**
 * Get the value of given key
 *
 * @param table Table to be search
 * @param key Given key
 * @return If the given key is non-exist, it returns NULL. Or it will return the corresponding value
 */
int get(HashTable *table, int key);

/**
 * Put a the key-value pair into the given HashTable
 *
 * @param table Table to store
 * @param key Key of value
 * @param value
 * @return If it successfully adds the new key-value pair, it returns true, else it returns false
 */
bool put(HashTable *table, int key, int value);

/**
 * Delete the a certain key-value pair in given table by key
 *
 * @param table Table to be modified
 * @param key Given key
 * @return If it successfully deleted the target key-value pair, it returns true. Else it return false even if the
 * given key does not exist.
 */
bool delete(HashTable *table, int key);

/**
 * Clear the given HashTable
 *
 * @param table Table to be cleared
 * @return If it is cleared, returns true, or false if failed.
 */
bool clear(HashTable *table);

/**
 * Clone the given table and returns a pointer to the cloned table
 *
 * @param table Table to be cloned
 * @return The pointer to the cloned table
 */
HashTable *clone(HashTable *table);

/**
 * Whether the given table is empty
 *
 * @param table Table to be searched
 * @return Returns true if it is empty, else returns false (even if there is a NULL pointer).
 */
bool isEmpty(HashTable *table);

/**
 * Print the target table to terminal
 *
 * @param table Table to be printed
 */
void print(HashTable *table);

/**
 * Free the given table
 *
 * @param table Table to be freed
 */
void free_table(HashTable *table);
