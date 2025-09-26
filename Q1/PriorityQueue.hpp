#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include <sstream>

constexpr int FIRST_PRIORITY = 1;
constexpr int PRIORITIES = 20;
using namespace std;

class PriorityQueue {
private:
    vector<list<string>> priorityBuckets;  // Each bucket contains item IDs
    unordered_map<string, int> idToPriority;    // Maps ID to its priority
    
public:
    PriorityQueue();
    
    void insert(string id, int priority);
    
    void removeById(string id);
    
    void removeByPriority(int priority);
    
    void printCurrent();
    
    void printAndQuit();
};
