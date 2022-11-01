#include <vector>
#include <stdlib.h>
#include "itemnamer.hpp"

using namespace std;

vector<string> arcitecturelist;
void initarcitecturelist()
{
    arcitecturelist.push_back("wall");
    arcitecturelist.push_back("floor");
    arcitecturelist.push_back("upstair");
    arcitecturelist.push_back("downstair");
    arcitecturelist.push_back("up/downstair");
    arcitecturelist.push_back("doorway");
    arcitecturelist.push_back("closet");
    arcitecturelist.push_back("window");
    arcitecturelist.push_back("road");
}
vector<string> furniturelist;
void initfurniturelist()
{
    furniturelist.push_back("chair");
    furniturelist.push_back("table");
    furniturelist.push_back("counter");
    furniturelist.push_back("desk");
    furniturelist.push_back("dresser");
    furniturelist.push_back("bed");
    furniturelist.push_back("shelf");
}
std::string randomarcitecturetype()
{
    return arcitecturelist[(rand()%arcitecturelist.size())];
}
std::string randomfurnituretype()
{
    return furniturelist[(rand()%furniturelist.size())];
}
