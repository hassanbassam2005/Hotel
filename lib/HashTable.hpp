#include <iostream>
#include <string>
#include <algorithm>

class HashTable
{
public:
    HashTable(int size);
    int hash_function(std::string key) const;
    void insert(std::string key, int value);
    int search(std::string key);
    void remove(std::string key);
private:
    struct Node
    {
        std::string key;
        int value;
        Node* next;
        Node(const std::string& k, const int& v) :key(k), value(v), next(nullptr) {}
    };

    Node** table;
    int size;
};

HashTable::HashTable(int size)
{
    this->size = size;
    table = new Node * [size];
    for (int i = 0; i < size; i++)
        table[i] = NULL;
}

int HashTable::hash_function(std::string key) const
{
    int hash = 0;
    for (int i = 0; i < key.size(); i++)
        hash = 37 * hash + key[i];
    return hash % size;
}

void HashTable::insert(std::string key, int value)
{
    int index = hash_function(key);
    Node* node = new Node(key, value);
    node->key = key;
    node->value = value;
    node->next = table[index];
    table[index] = node;
}

int HashTable::search(std::string key)
{
    int index = hash_function(key);
    Node* node = table[index];
    while (node != NULL)
    {
        if (node->key == key)
            return node->value;
        node = node->next;
    }
    return 0;
}

void HashTable::remove(std::string key)
{
    int index = hash_function(key);
    Node* node = table[index];
    Node* prev = NULL;
    while (node != NULL)
    {
        if (node->key == key)   
        {
            if (prev == NULL)
                table[index] = node->next;
            else
                prev->next = node->next;
            delete node;
            return;
        }
        prev = node;
        node = node->next;
    }
}
