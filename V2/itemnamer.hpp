#ifndef ITEMNAMER_HPP_INCLUDED
#define ITEMNAMER_HPP_INCLUDED

#include <string>

#ifdef MAIN_FILE
#include "passwd.h"
#endif

class idea
{
public:
     virtual std::string getText();
};

class material
{
public:
    std::string name;
    idea magicspace;
    bool isliquid;
    bool isthread;
    bool issolid;
};

class thing
{
public:
    std::string name;
    idea desiredmat;
};

class thingmod : public thing
{
public:
    std::string prefexmodtext;
    std::string suffexmodtext;
    int applicationweight; //for deciding which mods are more important.
    int ismagical;
    int isdetrimental;
    int islayer;
    idea usethoughts;
    idea strangethoughts;
    material mat;
};

class baseobject : public thing
{
public:
    material basemat;
    std::vector<thingmod> itemmodificationlist;
    std::string getfullname();
    bool isdesiredmat();
};

class concreatethought : public idea
{
private:
    std::string text;
public:
    std::string getText()
    {
        return text;
    }
    concreatethought()
    {
        text = "empty thought";
    }
};

class abstractthought : public idea
{
private:
    std::string text;
public:
    void setText(std::string &a)
    {
        text = a;
    }
    std::string getText()
    {
        return text;
    }
    abstractthought()
    {
        text = "empty thought";
    }
};

void addrandomitemmods(baseobject& object1);
void inititemlist();
void initimagelist();
void inititemPmodlist();
void inititemSmodlist();
void initmateriallist();
void initarcitecturelist();
void initfurniturelist();
std::string randomarcitecturetype();
std::string randomfurnituretype();
thingmod constructitemmod();
std::string randomitemtype();
std::string randomimage();
std::string randommaterialtype();
thingmod addedmaterialmods();
thingmod metaitemmods();
void addrandomitemmods(baseobject& object1);

std::string randomusername();
std::string randompassword();

#endif // ITEMNAMER_HPP_INCLUDED
