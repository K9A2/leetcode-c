#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#endif

#include "HashMap.h"

/**
 * Get the hash code of given key
 *
 * @param key Target key
 * @return Corresponding hash code
 */
int getHashCode(int key) {
    int hash = key % DEFAULT_TABLE_SIZE;
    return hash < 0 ? 0 - hash : hash;
}

/**
 * Create a new node contains given key and value
 *
 * @param key Value entry
 * @param value value
 * @return Node wanted
 */
Node *createNewNode(int key, int value) {

    Node *newNode = (Node *) malloc(sizeof(Node));

    if (newNode == NULL) {
        return NULL;
    }

    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    return newNode;
}

/**
 * Add the given node to the table at tha tail of given slot
 *
 * @param slot Slot it belongs to
 * @param node Target node
 * @return Result of insertion, true for success, false if failed
 */
bool addNewNode(Slot *slot, Node *node) {

    if (slot->first == NULL) {
        /*
         * This slot is empty, therefor, this node will be the first node.
         * Both first and tail pointer will be pointed to it.
         */
        slot->first = node;
        slot->tail = node;
        return true;
    }

    slot->tail->next = node;
    slot->tail = node;

    return true;

}

/**
 * Create a empty table
 *
 * @return The pointer the this new table
 */
HashTable *createNewTable() {

    HashTable *newTable = (HashTable *) malloc(sizeof(HashTable));

    /* Initialize the slots */
    Slot *slots = (Slot *) malloc(sizeof(Slot) * DEFAULT_TABLE_SIZE);
    for (int i = 0; i < DEFAULT_TABLE_SIZE; i++) {
        (slots + i)->first = NULL;
        (slots + i)->tail = NULL;
    }

    /* Initialize the table itself */
    newTable->slots = slots;
    newTable->length = DEFAULT_TABLE_SIZE;

    return newTable;
}


/**
 * Whether it contains the given key
 *
 * @param table Table to be searched
 * @param key Target key
 * @return If it is contained, returns true, or false if non-exists.
 */
bool containsKey(HashTable *table, int key) {

    /* Calculated the corresponding hash code, then search it at target slot */
    int hash = getHashCode(key);

    Slot *targetSlot = table->slots + hash;

    Node *f = targetSlot->first;
    Node *t = targetSlot->tail;

    if (f == NULL) {
        return false;
    }

    while (f != t) {
        if (f->value == key) {
            return true;
        }
        f = f->next;
    }
    if (f->key == key) {
        return true;
    }

    return false;

}

/**
 * Whether it contains the given value
 *
 * @param table Table to be searched
 * @param value Target value
 * @return If it is contained, return true, or false if non-exists.
 */
bool containsValue(HashTable *table, int value) {

    if (table == NULL) {
        // Nothing to be searched
        return false;
    }

    Node *f;
    Node *t;

    for (int i = 0; i < table->length; i++) {
        if ((table->slots + i)->first != NULL) {
            // This slot contains at least one node
            f = (table->slots + i)->first;
            t = (table->slots + i)->tail;
            while (f != t) {
                if (f->value == value) {
                    return true;
                }
                f = f->next;
            }
            if (f->value == value) {
                return true;
            }
        }
    }

    return false;

}

/**
 * Get the value of given key
 *
 * @param table Table to be search
 * @param key Given key
 * @return If the given key is non-exist, it returns NULL. Or it will return the corresponding value
 */
int get(HashTable *table, int key) {

    /* Calculated the corresponding hash code, then search it at target slot */
    int hash = getHashCode(key);

    Slot *targetSlot = table->slots + hash;

    Node *f = targetSlot->first;
    Node *t = targetSlot->tail;

    while (f != t) {
        if (f->key == key) {
            return f->value;
        }
        f = f->next;
    }
    if (f->key == key) {
        return f->value;
    }

    return -1;

}

/**
 * Put a the key-value pair into the given HashTable
 *
 * @param table Table to store
 * @param key Key of value
 * @param value
 * @return If it successfully adds the new key-value pair, it returns true, else it returns false
 */
bool put(HashTable *table, int key, int value) {

    Node *newNode = createNewNode(key, value);
    if (newNode == NULL) {
        return NULL;
    }

    int hash = getHashCode(key);

    Slot *targetSlot = table->slots + hash;
    if (!addNewNode(targetSlot, newNode)) {
        return false;
    } else {
        return true;
    }
}

/**
 * Delete the a certain key-value pair in given table by key
 *
 * @param table Table to be modified
 * @param key Given key
 * @return If it successfully deleted the target key-value pair, it returns true. Else it return false even if the
 * given key does not exist.
 */
bool delete(HashTable *table, int key) {

    int hash = getHashCode(key);

    Slot *slot = table->slots + hash;
    // The node prior to the key node
    Node *prior = slot->first;
    // Key node
    Node *k = prior;
    if (prior == NULL) {
        return false;
    }

    /*
     * Dual pointer to locate the node to be deleted and its prior node
     */
    while (k->key != key) {
        k = k->next;
    }
    while (prior->next != k && prior->key != key) {
        prior = prior->next;
    }

    /*
     * Delete the target node and reorganize pointers
     */
    if (k == slot->first) {
        // Going to delete the first node
        if (k->next == NULL) {
            // In one-node slot
            slot->first = NULL;
            slot->tail = NULL;
            free(k);
            return true;
        } else {
            // In slot with multiple nodes
            slot->first = k->next;
            free(k);
            return true;
        }
    } else if (k == slot->tail) {
        // Going to delete the last node
        prior->next = NULL;
        slot->tail = prior;
        free(k);
        return true;
    } else {
        // In the middle
        prior->next = k->next;
        free(k);
        return true;
    }

    return true;

}

/**
 * Clear the given HashTable
 *
 * @param table Table to be cleared
 * @return If it is cleared, returns true, or false if failed.
 */
bool clear(HashTable *table) {
    // todo: implement it

    for (int i = 0; i < table->length; i++) {
        // Slot to be clear out
        Slot *slot = table->slots + i;
        Node *f = slot->first;
        Node *n = slot->first;
        if (f == NULL) {
            // An empty slot
            continue;
        }
        while (f != NULL) {

        }
    }

}

/**
 * Clone the given table and returns a pointer to the cloned table
 *
 * @param table Table to be cloned
 * @return The pointer to the cloned table
 */
HashTable *clone(HashTable *table) {
    // todo: implement it
}

/**
 * Whether the given table is empty
 *
 * @param table Table to be searched
 * @return Returns true if it is empty, else returns false (even if there is a NULL pointer).
 */
bool isEmpty(HashTable *table) {

    if (table == NULL) {
        return false;
    }

    for (int i = 0; i < table->length; i++) {
        if (!(table->slots + i)->first == NULL) {
            return false;
        }
    }

    return true;

}

/**
 * Print the target table to terminal
 *
 * @param table Table to be printed
 */
void print(HashTable *table) {

    printf("Table length: %d\n", table->length);

    printf("|%10s|%20s|\n", "slots", "(key - value) pairs");

    Node *f;
    Node *t;

    for (int i = 0; i < table->length; i++) {
        f = (table->slots + i)->first;
        t = (table->slots + i)->tail;
        if (f == NULL) {
            printf("|key %5d:| empty\n", i);
            continue;
        } else {
            printf("|key %5d:| ", i);
            while (f != t) {
                printf("(%5d - %5d)", f->key, f->value);
                f = f->next;
            }
            printf("(%5d - %5d)", f->key, f->value);
        }
        printf("\n");
    }

}

/**
 * Free the given table
 *
 * @param table Table to be freed
 */
void free_table(HashTable *table) {
    // todo: implement it
}
