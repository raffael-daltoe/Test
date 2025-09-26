#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include <sstream>

#include "PriorityQueue.hpp"

#define FIRST_PRIORITY 1
#define PRIORITIES 20
using namespace std;

int main()
{
    PriorityQueue pq;
    string line;

    cout << "Fila de Prioridades - Comandos disponíveis:" << endl;
    cout << "A <id> <prioridade> - Inserir item" << endl;
    cout << "R <id> - Remover por ID" << endl;
    cout << "X <prioridade> - Remover por prioridade" << endl;
    cout << "P - Imprimir estado atual" << endl;
    cout << "Q - Imprimir e sair" << endl;
    cout << "----------------------------------------" << endl;

    while (true)
    {
        cout << "> ";
        getline(cin, line);

        istringstream iss(line);
        char command;
        iss >> command;

        // Check if there's a space after the command
        if (line.length() > 1 && line[1] != ' ')
        {
            cout << "Formato inválido. Use espaço após o comando." << endl;
            continue;
        }

        try
        {
            switch (command)
            {
            case 'A':
            {
                int priority;
                string item;
                if (iss >> item >> priority)
                {
                    pq.insert(item, priority);
                }
                else
                {
                    cout << "Formato inválido. Use: A <id> <prioridade>" << endl;
                }
                break;
            }
            case 'R':
            {
                string id;
                if (iss >> id)
                {
                    pq.removeById(id);
                }
                else
                {
                    cout << "Formato inválido. Use: R <id>" << endl;
                }
                break;
            }
            case 'X':
            {
                int priority;
                if (iss >> priority)
                {
                    pq.removeByPriority(priority);
                }
                else
                {
                    cout << "Formato inválido. Use: X <prioridade>" << endl;
                }
                break;
            }
            case 'P':
            {
                pq.printCurrent();
                break;
            }
            case 'Q':
            {
                pq.printAndQuit();
                cout << "Programa finalizado." << endl;
                return 0;
            }
            default:
            {
                cout << "Comando inválido. Comandos válidos: A, R, X, P, Q" << endl;
                break;
            }
            }
        }
        catch (const exception &e)
        {
            cout << "Erro: " << e.what() << endl;
        }
    }

    return 0;
}