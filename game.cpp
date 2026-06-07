#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

class Enemy
{
public:
    string name;
    int damage;
    int health;

    Enemy(string n, int d, int h)
    {
        name = n;
        damage = d;
        health = h;
    }

    void TakeDamage(int amount)
    {
        health -= amount;
    }

    void Status()
    {
        cout << name << " Health: " << health << endl;
    }
};

class Player
{
public:
    string name;
    int health;

    Player(string n, int h)
    {
        name = n;
        health = h;
    }

    void Attack(Enemy &enemy)
    {
        enemy.TakeDamage(30);
    }
};

int main()
{
    Enemy enemies[3] = {
        Enemy("Goblin", 20, 100),
        Enemy("Slime", 70, 200),
        Enemy("Orc", 40, 150)
    };

    Player Alex("Alex", 120);

    cout << "Before Attack:" << endl;

    for (int i = 0; i < 3; i++)
    {
        enemies[i].Status();
    }

//   std::this_thread::sleep_for(std::chrono::milliseconds(1000)); (dosent work :sob:)

Sleep(1000);

    cout << "Player Alex attacks all Enemies!" << endl;

    for (int i = 0; i < 3; i++)
    {
        Alex.Attack(enemies[i]);
    }

//    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); (dosent work :sob:)

Sleep(1000);

    cout << "After Attack:" << endl;

    for (int i = 0; i < 3; i++)
    {
        enemies[i].Status();
    }

    return 0;
}
