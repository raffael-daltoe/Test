#include "PriorityQueue.hpp"

PriorityQueue::PriorityQueue() {
    priorityBuckets = vector<list<string>>(PRIORITIES + 1);
}

void PriorityQueue::insert(string id, int priority)
{
    if (priority < FIRST_PRIORITY || priority > PRIORITIES)
    {
        cout << "Prioridade '" << priority << "' inválida. Use valores entre 1 e 20." << endl;
        return;
    }

    if (idToPriority.find(id) != idToPriority.end())
    {
        cout << "Item " << id << " já existe na fila." << endl;
        return;
    }

    // Add to the end of the priority bucket
    priorityBuckets[priority].push_back(id);

    // Store mapping
    idToPriority[id] = priority;

    cout << "Item " << id << " inserido." << endl;
}

void PriorityQueue::removeById(string id)
{
    auto priorityIt = idToPriority.find(id);
    if (priorityIt == idToPriority.end())
    {
        cout << "Item " << id << " não encontrado." << endl;
        return;
    }

    int priority = priorityIt->second;

    // Find and remove from the list
    auto &bucket = priorityBuckets[priority];
    for (auto it = bucket.begin(); it != bucket.end(); ++it)
    {
        if (*it == id)
        {
            bucket.erase(it);
            break;
        }
    }

    // Remove from map
    idToPriority.erase(priorityIt);

    cout << "Item " << id << " removido." << endl;
}

void PriorityQueue::removeByPriority(int priority)
{
    if (priority < FIRST_PRIORITY || priority > PRIORITIES)
    {
        cout << "Prioridade inválida." << endl;
        return;
    }

    if (priorityBuckets[priority].empty())
    {
        cout << "Nenhum item com prioridade " << priority << " encontrado." << endl;
        return;
    }

    // Remove the first item with this priority (FIFO)
    string id = priorityBuckets[priority].front();

    // Remove from map
    idToPriority.erase(id);

    // Remove from list
    priorityBuckets[priority].pop_front();

    cout << "Item " << id << " removido." << endl;
}

void PriorityQueue::printCurrent()
{
    if (idToPriority.empty())
    {
        cout << "Fila vazia." << endl;
        return;
    }

    bool first = true;
    for (int p = FIRST_PRIORITY; p <= PRIORITIES; p++)
    {
        for (string id : priorityBuckets[p])
        {
            if (!first)
                cout << ", ";
            cout << id << "(P=" << p << ")";
            first = false;
        }
    }
    cout << endl;
}

void PriorityQueue::printAndQuit()
{
    printCurrent();
}
