#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <time.h>
#define MAIN_FILE
#include "itemnamer.hpp"
#include "foods.hpp"

using namespace std;

vector<string> itemlist;
void inititemlist()
{
    itemlist.push_back("sword");
    itemlist.push_back("hammer");
    itemlist.push_back("knife");
    itemlist.push_back("longbow");
    itemlist.push_back("short-bow");
    itemlist.push_back("bow");
    itemlist.push_back("axe");
    itemlist.push_back("matchbox");
    itemlist.push_back("rug");
    itemlist.push_back("spoon");
    itemlist.push_back("sock");
    itemlist.push_back("laptop");
    itemlist.push_back("candle");
    itemlist.push_back("torch");
    itemlist.push_back("mindstar");
    itemlist.push_back("staff");
    itemlist.push_back("stave");
    itemlist.push_back("walkingstick");
    itemlist.push_back("headband");
    itemlist.push_back("mallet");
    itemlist.push_back("hammer");
    itemlist.push_back("whatnot");
    itemlist.push_back("dohicky");
    itemlist.push_back("thingy-ma-bob");
    itemlist.push_back("whatzits");
    itemlist.push_back("rock");
    itemlist.push_back("stone");
    itemlist.push_back("pot");
    itemlist.push_back("hook");
    itemlist.push_back("shades");
    itemlist.push_back("glasses");
    itemlist.push_back("statuet");
    itemlist.push_back("minifigure");
    itemlist.push_back("blade");
    itemlist.push_back("cube");
    itemlist.push_back("shoe");
    itemlist.push_back("lamp");
    itemlist.push_back("sphere");
    itemlist.push_back("baseballcap");
    itemlist.push_back("tophat");
    itemlist.push_back("fedora");
    itemlist.push_back("cane");
    itemlist.push_back("walkingstick");
    itemlist.push_back("fork");
    itemlist.push_back("hourglass");
    itemlist.push_back("gem");
    itemlist.push_back("ring");
    itemlist.push_back("sleeping bag");
    itemlist.push_back("igniter");
    itemlist.push_back("pants");
    itemlist.push_back("shirt");
    itemlist.push_back("blaster");
    itemlist.push_back("caster");
    itemlist.push_back("brick");
    itemlist.push_back("ore");
    itemlist.push_back("screwdriver");
    itemlist.push_back("calipers");
    itemlist.push_back("tongs");
    itemlist.push_back("paintbrush");
    itemlist.push_back("jar");
    itemlist.push_back("bandana");
    itemlist.push_back("boots");
    itemlist.push_back("skirt");
    itemlist.push_back("dress");
    itemlist.push_back("bottle");
    itemlist.push_back("tube");
    itemlist.push_back("straw");
    itemlist.push_back("basket");
    itemlist.push_back("bin");
    itemlist.push_back("sack");
    itemlist.push_back("bag");
    itemlist.push_back("box");
    itemlist.push_back("blender");
    itemlist.push_back("chest");
    itemlist.push_back("flute");
    itemlist.push_back("lipstick");
    itemlist.push_back("chain saw");
    itemlist.push_back("shotgun");
    itemlist.push_back("fake beard");
    itemlist.push_back("bar");
    itemlist.push_back("bucket");
    itemlist.push_back("mop");
    itemlist.push_back("mortar");
    itemlist.push_back("pestle");
    itemlist.push_back("plate");
    itemlist.push_back("bowl");
    itemlist.push_back("horn");
    itemlist.push_back("trumpet");
    itemlist.push_back("drum");
    itemlist.push_back("lute");
    itemlist.push_back("lyre");
    itemlist.push_back("guitar");
    itemlist.push_back("printer");
    itemlist.push_back("mug");
    itemlist.push_back("jug");
    itemlist.push_back("rope");
    itemlist.push_back("cloak");
    itemlist.push_back("hood");
    itemlist.push_back("mask");
    itemlist.push_back("disguise-kit");
}

vector<string> imagelist;
void initimagelist()
{
    for(int i =0;i<itemlist.size();i++)
    {
        string str = "a "+itemlist[i];
        imagelist.push_back(str);
    }
/*
    for(int i =0;i<foodlist.size();i++)
    {
        string str = " "+foodlist[i];
        imagelist.push_back(str);
    }
    for(int i =0;i<fruitlist.size();i++)
    {
        string str = " "+fruitlist[i];
        imagelist.push_back(str);
    }
    for(int i =0;i<veglist.size();i++)
    {
        string str = " "+veglist[i];
        imagelist.push_back(str);
    }
*/
    imagelist.push_back("dragons");
    imagelist.push_back("soup");
    imagelist.push_back("a pair of shoes");
    imagelist.push_back("a longsword");
    imagelist.push_back("dancing people");
    imagelist.push_back("a broken wagon");
    imagelist.push_back("a pair of socks");
    imagelist.push_back("two fighting ogres");
    imagelist.push_back("a regal unicorn");
    imagelist.push_back("an oak leaf");
    imagelist.push_back("a large oak tree");
    imagelist.push_back("a cross");
    imagelist.push_back("a clover");
    imagelist.push_back("a fish");
    imagelist.push_back("a bone");
    imagelist.push_back("a spoon, plate and fork");
    imagelist.push_back("a single wooden shoe");
}

vector<string> materiallist;
void initmateriallist()
{
    materiallist.push_back("live wood");
    materiallist.push_back("dark wood");
    materiallist.push_back("soar wood");
    materiallist.push_back("iron wood");
    materiallist.push_back("counting pine wood");
    materiallist.push_back("bronze wood");
    materiallist.push_back("sapient pear wood");
    materiallist.push_back("pine");
    materiallist.push_back("oak");
    materiallist.push_back("ceder");
    materiallist.push_back("horn wood");
    materiallist.push_back("glowstone");
    materiallist.push_back("darkstone");
    materiallist.push_back("plaster");
    materiallist.push_back("bone");
    materiallist.push_back("onix");
    materiallist.push_back("quartz");
    materiallist.push_back("sapphire");
    materiallist.push_back("ruby");
    materiallist.push_back("topaz");
    materiallist.push_back("diamond");
    materiallist.push_back("octiron");
    materiallist.push_back("onium crystal");
    materiallist.push_back("chaos emerald");
    materiallist.push_back("antimiasma gem");
    materiallist.push_back("dirt");
    materiallist.push_back("orichalcum");
    materiallist.push_back("brass");
    materiallist.push_back("bismuth");
    materiallist.push_back("congealed putrescence");
    materiallist.push_back("soulgem");
    materiallist.push_back("magnasite");
    materiallist.push_back("magnatite");
    materiallist.push_back("hematite");
    materiallist.push_back("orgonite");
    materiallist.push_back("amber");
    materiallist.push_back("solid madness");
    materiallist.push_back("solid thought");
    materiallist.push_back("solid time");
    materiallist.push_back("solid time");
    materiallist.push_back("morrowindic ebony");
    materiallist.push_back("nevermelt ice");
    materiallist.push_back("deku wood");
    materiallist.push_back("kinstone");
    materiallist.push_back("red rupie gemstone");
    materiallist.push_back("green rupie gemstone");
    materiallist.push_back("blue rupie gemstone");
    materiallist.push_back("yellow rupie gemstone");
    materiallist.push_back("purple rupie gemstone");
    materiallist.push_back("chu jelly");
    materiallist.push_back("secret seashell");
    materiallist.push_back("methril");
    materiallist.push_back("adamant");
    materiallist.push_back("rune ess");
    materiallist.push_back("solid magictite");
    materiallist.push_back("red apracorn");
    materiallist.push_back("ylw apracorn");
    materiallist.push_back("blu apracorn");
    materiallist.push_back("pnk apracorn");
    materiallist.push_back("blk apracorn");
    materiallist.push_back("chitin");
    materiallist.push_back("gold");
    materiallist.push_back("tattered rags");
    materiallist.push_back("duct tape");
    materiallist.push_back("drugh wax");
    materiallist.push_back("bees wax");
    materiallist.push_back("parafin wax");
    materiallist.push_back("nanobot ooze");
    materiallist.push_back("sphinx stone");
    materiallist.push_back("soap stone");
    materiallist.push_back("soap");
    materiallist.push_back("mud");
}

vector<string> itemPmodlist;
void inititemPmodlist()
{
    itemPmodlist.push_back("glowing ");
    itemPmodlist.push_back("flying ");
    itemPmodlist.push_back("flaming ");
    itemPmodlist.push_back("undulating ");
    itemPmodlist.push_back("sparkling ");
    itemPmodlist.push_back("vorproal ");
    itemPmodlist.push_back("very sparkly ");
    itemPmodlist.push_back("rusty ");
    itemPmodlist.push_back("rumpled ");
    itemPmodlist.push_back("crumpled ");
    itemPmodlist.push_back("red ");
    itemPmodlist.push_back("yellow ");
    itemPmodlist.push_back("blue ");
    itemPmodlist.push_back("green ");
    itemPmodlist.push_back("purple ");
    itemPmodlist.push_back("orange ");
    itemPmodlist.push_back("magenta ");
    itemPmodlist.push_back("teal ");
    itemPmodlist.push_back("furry ");
    itemPmodlist.push_back("sandy ");
    itemPmodlist.push_back("rounded ");
    itemPmodlist.push_back("blunt ");
    itemPmodlist.push_back("wasabi coated ");
    itemPmodlist.push_back("razor sharp ");
    itemPmodlist.push_back("acidic ");
    itemPmodlist.push_back("fresh ");
    itemPmodlist.push_back("flowing ");
    itemPmodlist.push_back("armor piercing ");
    itemPmodlist.push_back("mossy ");
    itemPmodlist.push_back("vined ");
    itemPmodlist.push_back("flowery ");
    itemPmodlist.push_back("flowering ");
    itemPmodlist.push_back("heated ");
    itemPmodlist.push_back("bastard ");
    itemPmodlist.push_back("cursed ");
    itemPmodlist.push_back("laser ");
    itemPmodlist.push_back("flashing ");
    itemPmodlist.push_back("frozen ");
    itemPmodlist.push_back("masterwork ");
    itemPmodlist.push_back("master ");
    itemPmodlist.push_back("blasted ");
    itemPmodlist.push_back("awesome ");
    itemPmodlist.push_back("sticky ");
    itemPmodlist.push_back("ugly ");
    itemPmodlist.push_back("dwarven ");
    itemPmodlist.push_back("elven ");
    itemPmodlist.push_back("elvish ");
    itemPmodlist.push_back("spaded ");
    itemPmodlist.push_back("booklike ");
    itemPmodlist.push_back("timekeeping ");
    itemPmodlist.push_back("magical ");
    itemPmodlist.push_back("flammable ");
    itemPmodlist.push_back("muttering ");
    itemPmodlist.push_back("normal ");
    itemPmodlist.push_back("average ");
    itemPmodlist.push_back("unsightly ");
    itemPmodlist.push_back("beautiful ");
    itemPmodlist.push_back("warped ");
    itemPmodlist.push_back("twisted ");
    itemPmodlist.push_back("seawork ");//mermade
    itemPmodlist.push_back("growing ");
    itemPmodlist.push_back("baddass ");
    itemPmodlist.push_back("fearless ");
    itemPmodlist.push_back("forgotten ");
    itemPmodlist.push_back("lost ");
    itemPmodlist.push_back("tainted ");
    itemPmodlist.push_back("");
}

vector<string> itemSmodlist;
void inititemSmodlist()
{
    itemSmodlist.push_back(", of breaking");
    itemSmodlist.push_back(", with rough edges");
    itemSmodlist.push_back(", of dancing");
    itemSmodlist.push_back(", without a handle");
    itemSmodlist.push_back(", with sparkles");
    itemSmodlist.push_back(", of cutting");
    itemSmodlist.push_back(", of weight");
    itemSmodlist.push_back(", of destruction and chaos");
    itemSmodlist.push_back(", of true sight");
    itemSmodlist.push_back(", of blinding speed");
    itemSmodlist.push_back(", it lacks style");
    itemSmodlist.push_back(", with a fazing edge");//?phazing
    itemSmodlist.push_back(", with a waxy layer");
    itemSmodlist.push_back(", with a candy coating");
    itemSmodlist.push_back(", of lesser battle");
    itemSmodlist.push_back(", it is rather stylish");
    itemSmodlist.push_back(", it is caked in mud");
    itemSmodlist.push_back(", it is scorched");
    itemSmodlist.push_back(", it has some dirt on it");
    itemSmodlist.push_back(", it needs to be washed");
    itemSmodlist.push_back(", it has green stench waves flowing from it");
    itemSmodlist.push_back(", it is old and warn");
    itemSmodlist.push_back(", it is falling apart");
    itemSmodlist.push_back(", it is scratched");
    itemSmodlist.push_back(", of extream style");
    itemSmodlist.push_back(", it is powered by a plasma cell");
    itemSmodlist.push_back(", it is infused with earth");
    itemSmodlist.push_back(", it is wrapped with duct tape");
    itemSmodlist.push_back(", it is fixed with duct tape");
    itemSmodlist.push_back(", it has an aura of hate");
    itemSmodlist.push_back(", it has an aura of love");
    itemSmodlist.push_back(", it has an aura of passion");
    itemSmodlist.push_back(", it has an aura of water");
    itemSmodlist.push_back(", it has an aura of fire");
    itemSmodlist.push_back(", it has an aura of stone");
    itemSmodlist.push_back(", it has an aura of fear");
    itemSmodlist.push_back(", it has an aura of confusion");
    itemSmodlist.push_back(", it has an aura of weariness");
    itemSmodlist.push_back(", it has an aura of imbalance");
    itemSmodlist.push_back(", it has an aura of lightning");
    itemSmodlist.push_back(", it was emblazoned by a horse");//emblazened
    itemSmodlist.push_back(", it smells faintly of fruit");
    itemSmodlist.push_back(", it smells rotten");
    itemSmodlist.push_back(", it is unusually transparent");
    itemSmodlist.push_back(", it smells somewhat like flowers");
    itemSmodlist.push_back(", it smells like a birds nest");
    itemPmodlist.push_back("");
}

string baseobject::getfullname()
{
    string temp;
    temp = name;
    temp += ", made of ";
    temp += basemat.name;
    for(int i=0;i < itemmodificationlist.size();i++)
    {
        temp = ((itemmodificationlist[i]).prefexmodtext+temp);
        temp += (itemmodificationlist[i]).suffexmodtext;
    }
    return temp;
}

bool baseobject::isdesiredmat()
{
    if(strcmp((desiredmat.getText()).c_str(),basemat.name.c_str()))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


thingmod constructitemmod()
{
    thingmod temp;

    temp.applicationweight = 0;
    abstractthought thought;
    temp.desiredmat = thought;
    temp.isdetrimental = 0;
    temp.prefexmodtext = itemPmodlist[(rand()%itemPmodlist.size())];
    temp.suffexmodtext = itemSmodlist[(rand()%itemSmodlist.size())];
    return temp;
}

string randomitemtype()
{
    return itemlist[(rand()%itemlist.size())];
}

string randomimage()
{
    return imagelist[(rand()%imagelist.size())];
}

string randommaterialtype()
{
    return materiallist[(rand()%materiallist.size())];
}

thingmod addedmaterialmods()
{
    thingmod temp;
    string stemp;
    temp.applicationweight = 0;
    abstractthought thought;
    temp.desiredmat = thought;
    temp.isdetrimental = 0;
    stemp = randommaterialtype();
    int i = (rand()%5);
    if(i==1)
    {
        stemp = ", it is encrusted with "+stemp+" gems";
    }
    if(i==2)
    {
        stemp = ", it is plated with "+stemp;
    }
    if(i==3)
    {
        stemp = ", it has an image of "+randomimage()+" in "+stemp+" on it";
    }
    if(i==4)
    {
        stemp = ", it has "+stemp+" spikes";
    }
    if(i==0)
    {
        stemp = "";
    }

    temp.suffexmodtext = stemp;

    return temp;

}

thingmod metaitemmods()
{
    thingmod temp;
    string stemp;
    temp.applicationweight = 0;
    abstractthought thought;
    temp.desiredmat = thought;
    temp.isdetrimental = 0;
    baseobject object1;
    material mat1;

    int a = rand()%9;
    if(a==1) // it doubles as a/an
    {
        temp.prefexmodtext = "";
        stemp = " it doubles as a ";
        temp.suffexmodtext = stemp += randomitemtype();
    }
    if(a==2) // it is fuzed to a
    {
        temp.prefexmodtext = "";
        stemp = " it is fuzed to a (";

        abstractthought idealmat;
        string str = randommaterialtype();
        idealmat.setText(str);

        mat1.name = randommaterialtype();
        object1.name = randomitemtype();//"sword";
        object1.desiredmat = idealmat;
        object1.basemat = mat1;
        addrandomitemmods(object1);
        temp.suffexmodtext = stemp += object1.getfullname()+")";
    }
    if(a==3) // it destroys
    {
        temp.isdetrimental = 1;
        temp.prefexmodtext = "";
        stemp = " destroying";
        temp.suffexmodtext = " of "+randomitemtype()+stemp;
    }
    if(a==4) // it fixes
    {
        temp.prefexmodtext = "";
        stemp = " fixing";
        temp.suffexmodtext = " of "+randomitemtype()+stemp;
    }
    if(a==5) // it needs
    {
        temp.prefexmodtext = "";
        stemp = " to work properly";
        temp.suffexmodtext = " it needs a "+randomitemtype()+stemp;
    }
    if(a==6) //food it makes
    {
        temp.prefexmodtext = "";
        stemp = " makeing";
        temp.suffexmodtext = " of "+GenarateRandFood()+stemp;
    }
    if(a==7) // it shrinks
    {
        temp.prefexmodtext = "";
        stemp = " shrinking";
        temp.suffexmodtext = " of "+randomitemtype()+stemp;
    }
    if(a==8) // it destroys
    {
        temp.isdetrimental = 1;
        temp.prefexmodtext = "";
        stemp = " blasting";
        temp.suffexmodtext = " of "+randomitemtype()+stemp;
    }
    if(a==0) // it makes
    {
        temp.prefexmodtext = "";
        stemp = " makeing";
        temp.suffexmodtext = " of "+randomitemtype()+stemp;
    }
    return temp;
}

void addrandomitemmods(baseobject& object1)
{
    int i = (rand()%5);
    for(i;i>=0;i--)
    {
        object1.itemmodificationlist.push_back(constructitemmod());
    }

    i = (rand()%5);
    for(i;i>0;i--)
    {
        object1.itemmodificationlist.push_back(addedmaterialmods());
    }

    i = (rand()%5);
    for(i;i>0;i--)
    {
        object1.itemmodificationlist.push_back(metaitemmods());
    }
}

#ifndef LIBMAKE

int main()
{
    srand(time(0));
    inititemlist();
    initimagelist();
    inititemPmodlist();
    inititemSmodlist();
    initmateriallist();

    abstractthought idealmat;
    string str = randommaterialtype();
    idealmat.setText(str);
    material mat1;

    mat1.name = randommaterialtype();

    baseobject object1;

    object1.name = randomitemtype();//"sword";
    object1.desiredmat = idealmat;
    object1.basemat = mat1;

    addrandomitemmods(object1);

    //cout << randomusername() << " \n";
    //cout << randompassword() << " \n";

    cout << object1.getfullname();

    //cout << " " << GetRandFruit();
    //cout << " " << GenarateFruitFood();

    //cout << "Hello world!" << endl;
    return 0;
}

#endif //libmake

string idea::getText()
{
    return 0;
}

std::string randomusername()
{
    std::string out = usernames[(rand()%21)];
    return out;
}
std::string randompassword()
{
    std::string out = passwords[(rand()%140)];
    return out;
}

