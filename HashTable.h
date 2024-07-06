#pragma once
#ifndef HASHTABLE_H
#define HASHTABLE_H

template <class K, class V>
class HashTable {
private:
    struct Entity {
        K key;
        V value;
        Entity(const K& _k, const V& _v) : key(_k), value(_v) {}
    };

    vector<list<Entity>> table;
    int numElements;
    int capacity;

    int hashFunction(const K& key) const {
        hash<K> hashFn;
        return hashFn(key) % capacity;
    }

public:
    HashTable(int size) : capacity(size), numElements(0) {
        table.resize(size);
    }

    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        for (auto& entity : table[index]) {
            if (entity.key == key) {
                entity.value = value; // Actualiza el valor si la clave ya existe
                return;
            }
        }
        table[index].emplace_back(key, value);
        numElements++;
    }

    bool remove(const K& key) {
        int index = hashFunction(key);
        auto& chain = table[index];
        for (auto it = chain.begin(); it != chain.end(); ++it) {
            if (it->key == key) {
                chain.erase(it);
                numElements--;
                return true;
            }
        }
        return false;
    }

    bool search(const K& key, V& value) const {
        int index = hashFunction(key);
        for (const auto& entity : table[index]) {
            if (entity.key == key) {
                value = entity.value;
                return true;
            }
        }
        return false;
    }

    void display() const {
        for (int i = 0; i < capacity; ++i) {
            std::cout << "Bucket " << i << ": ";
            for (const auto& entity : table[i]) {
                std::cout << "[" << entity.key << ": " << entity.value << "] ";
            }
            std::cout << std::endl;
        }
    }

    int size() const {
        return numElements;
    }
};


#endif