
#include "foods.hpp"
#include <stdlib.h>

std::vector<std::string> foodlist;
void initfoodlist()
{
    foodlist.push_back("jellybeans");
    foodlist.push_back("pie");
    foodlist.push_back("cake");
    foodlist.push_back("cheesecake");
    foodlist.push_back("muffuns");
    foodlist.push_back("tachos");
    foodlist.push_back("sandwitches");
    foodlist.push_back("soup");
    foodlist.push_back("stew");
    foodlist.push_back("chilli");
}

std::vector<std::string> fruitlist;
void initfruitlist()
{
    fruitlist.push_back("apple");
    fruitlist.push_back("pear");
    fruitlist.push_back("peach");
    fruitlist.push_back("mango");
    fruitlist.push_back("starfruit");
    fruitlist.push_back("banana");
    fruitlist.push_back("watermellon");
    fruitlist.push_back("cantaloupe");
}
std::string GetRandFruit()
{
    initfruitlist();
    return fruitlist[(rand()%fruitlist.size())];
}

std::vector<std::string> veglist;
void initveglist()
{
    veglist.push_back("carrot");
    veglist.push_back("potato");
    veglist.push_back("tomato"); //In this book tomatos are vegitable not fruit.
    veglist.push_back("lettuce");
    veglist.push_back("celery");
    veglist.push_back("pumpkin");
    veglist.push_back("onion");
    veglist.push_back("peas");
    veglist.push_back("brocoli");
    veglist.push_back("cabbage");
    veglist.push_back("cucumber");
}
std::string GetRandVeg()
{
    initveglist();
    return veglist[(rand()%veglist.size())];
}

std::string GenarateFoodName()
{
    initfoodlist();
    return foodlist[(rand()%foodlist.size())];
}

std::string GenarateFruitFood()
{
    return GetRandFruit() + " " + GenarateFoodName();
}

std::string GenarateRandFood()
{
    return GetRandVeg() + " and " + GetRandFruit() + " " + GenarateFoodName();
}
