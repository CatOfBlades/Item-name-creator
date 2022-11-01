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
    itemlist.push_back("backpack");
    itemlist.push_back("axe");
    itemlist.push_back("matchbox");
    itemlist.push_back("rug");
    itemlist.push_back("pillow");
    itemlist.push_back("blanket");
    itemlist.push_back("spoon");
    itemlist.push_back("sock");
    itemlist.push_back("puppet");
    itemlist.push_back("doll");
    itemlist.push_back("statuet");
    itemlist.push_back("minifigure");
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
    itemlist.push_back("blade");
    itemlist.push_back("cube");
    itemlist.push_back("shoe");
    itemlist.push_back("lamp");
    itemlist.push_back("crowbar");
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
    itemlist.push_back("necklace");
    itemlist.push_back("sleeping bag");
    itemlist.push_back("igniter");
    itemlist.push_back("pants");
    itemlist.push_back("codpeice");
    itemlist.push_back("breeches");
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
    itemlist.push_back("fake beard");
    itemlist.push_back("bandana");
    itemlist.push_back("boots");
    itemlist.push_back("skirt");
    itemlist.push_back("robe");
    itemlist.push_back("toga");
    itemlist.push_back("dress");
    itemlist.push_back("brassere");
    itemlist.push_back("chemis");
    itemlist.push_back("girdel");
    itemlist.push_back("corset");
    itemlist.push_back("belt");
    itemlist.push_back("bottle");
    itemlist.push_back("tube");
    itemlist.push_back("straw");
    itemlist.push_back("basket");
    itemlist.push_back("bin");
    itemlist.push_back("sack");
    itemlist.push_back("bag");
    itemlist.push_back("box");
    itemlist.push_back("blender");
    itemlist.push_back("tankerd");
    itemlist.push_back("flagen");
    itemlist.push_back("chest");
    itemlist.push_back("flute");
    itemlist.push_back("lipstick");
    itemlist.push_back("chain saw");
    itemlist.push_back("shotgun");
    itemlist.push_back("bar");
    itemlist.push_back("log");
    itemlist.push_back("bucket");
    itemlist.push_back("mop");
    itemlist.push_back("mortar");
    itemlist.push_back("pestle");
    itemlist.push_back("mug");
    itemlist.push_back("jug");
    itemlist.push_back("retort");
    itemlist.push_back("plate");
    itemlist.push_back("bowl");
    itemlist.push_back("flask/vial");
    itemlist.push_back("horn");
    itemlist.push_back("trumpet");
    itemlist.push_back("drum");
    itemlist.push_back("lute");
    itemlist.push_back("lyre");
    itemlist.push_back("guitar");
    itemlist.push_back("printer");
    itemlist.push_back("rope/chain");
    itemlist.push_back("grappling hook");
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
    materiallist.push_back("bathus");
    materiallist.push_back("bolonium");
    materiallist.push_back("bombastium");
    materiallist.push_back("brightsteel");
    materiallist.push_back("cavorite");
    materiallist.push_back("celestial bronze");
    materiallist.push_back("corbomite");
    materiallist.push_back("cryonite");
    materiallist.push_back("cuendillar");
    materiallist.push_back("darksteel");
    materiallist.push_back("dilithium");
    materiallist.push_back("dwarven metal");
    materiallist.push_back("eitr");
    materiallist.push_back("element 115");
    materiallist.push_back("element zero");
    materiallist.push_back("eridium");
    materiallist.push_back("fractite");
    materiallist.push_back("gorgonite");
    materiallist.push_back("gravitium");
    materiallist.push_back("Jerktonium");
    materiallist.push_back("Jumbonium");
    materiallist.push_back("Katagon");
    materiallist.push_back("Kratonite");
    materiallist.push_back("Kryptonite");
    materiallist.push_back("Latinum");
    materiallist.push_back("Marmaros");
    materiallist.push_back("Morphite");
    materiallist.push_back("Nikolite");
    materiallist.push_back("Novite");
    materiallist.push_back("Obdurium");
    materiallist.push_back("Obsidium");
    materiallist.push_back("Omnium steel");
    materiallist.push_back("Onnesium");
    materiallist.push_back("Orantium");
    materiallist.push_back("Oxyale");
    materiallist.push_back("Oxium");
    //materiallist.push_back("Oxypheromalkahyde");
    materiallist.push_back("Pergium");
    materiallist.push_back("Phazite");
    materiallist.push_back("Phazon");
    materiallist.push_back("Parium");
    materiallist.push_back("Philote");
    materiallist.push_back("Phostlite");
    materiallist.push_back("Photofine Steel");
    materiallist.push_back("Photonium");
    materiallist.push_back("Phrik");
    materiallist.push_back("Pizzazium Infinionite");
    materiallist.push_back("Plasteel");
    materiallist.push_back("Polarite");
    materiallist.push_back("Polydenum");
    materiallist.push_back("Primal");
    materiallist.push_back("Primium");
    materiallist.push_back("Promethium");
    materiallist.push_back("Protoculture");
    materiallist.push_back("Protonite");
    materiallist.push_back("ProtoZortium");
    materiallist.push_back("Psitanium");
    materiallist.push_back("Purralinium");
    materiallist.push_back("Pyerite");
    materiallist.push_back("Pyreal");
    materiallist.push_back("protodermis");
    materiallist.push_back("live wood");
    materiallist.push_back("dark wood");
    materiallist.push_back("soar wood");
    materiallist.push_back("iron wood");
    materiallist.push_back("dense wood");
    materiallist.push_back("luurden(aka bloodfruit) wood");
    materiallist.push_back("counting pine wood");
    materiallist.push_back("bronze wood");
    materiallist.push_back("sapient pear wood");
    materiallist.push_back("transparent bread wood");
    materiallist.push_back("whisper bead stone");
    materiallist.push_back("pine");
    materiallist.push_back("oak");
    materiallist.push_back("ceder");
    materiallist.push_back("horn wood");
    materiallist.push_back("glowstone");
    materiallist.push_back("darkstone");
    materiallist.push_back("dwarven stone bread");
    materiallist.push_back("plaster");
    materiallist.push_back("bone");
    materiallist.push_back("clear black rock");
    materiallist.push_back("crumble stone");
    materiallist.push_back("crysstone");
    materiallist.push_back("darkstone");
    materiallist.push_back("photogenerative rock");
    materiallist.push_back("photostatic rock");
    materiallist.push_back("rock gourd");
    materiallist.push_back("sickstone");
    materiallist.push_back("slickstone");
    materiallist.push_back("coral");
    materiallist.push_back("tufa");
    materiallist.push_back("onix");
    materiallist.push_back("quartz");
    materiallist.push_back("sapphire");
    materiallist.push_back("ruby");
    materiallist.push_back("topaz");
    materiallist.push_back("diamond");
    materiallist.push_back("siberys dragon shard");
    materiallist.push_back("eberron dragon shard");
    materiallist.push_back("khyber dragon shard");
    materiallist.push_back("onium crystal");
    materiallist.push_back("chaos emerald");
    materiallist.push_back("antimiasma gem");
    materiallist.push_back("red glass");
    materiallist.push_back("yellow glass");
    materiallist.push_back("green glass");
    materiallist.push_back("blue glass");
    materiallist.push_back("purple glass");
    materiallist.push_back("broken glass");
    materiallist.push_back("dirt");
    materiallist.push_back("orichalcum");
    materiallist.push_back("brass");
    materiallist.push_back("aluminium");
    materiallist.push_back("tin");
    materiallist.push_back("zinc");
    materiallist.push_back("bismuth");
    materiallist.push_back("copper");
    materiallist.push_back("gold");
    materiallist.push_back("targath");
    materiallist.push_back("riedran crysteel");
    materiallist.push_back("octiron");
    materiallist.push_back("methril");
    materiallist.push_back("adamant");
    materiallist.push_back("soulgem");
    materiallist.push_back("magnasite");
    materiallist.push_back("magnatite");
    materiallist.push_back("hematite");
    materiallist.push_back("orgonite");
    materiallist.push_back("amber");
    materiallist.push_back("congealed putrescence");
    materiallist.push_back("solid madness");
    materiallist.push_back("solid thought");
    materiallist.push_back("solid time");
    //materiallist.push_back("solid time");
    materiallist.push_back("ectoplasim");
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
    materiallist.push_back("rune ess");
    materiallist.push_back("solid magictite");
    materiallist.push_back("red apracorn");
    materiallist.push_back("ylw apracorn");
    materiallist.push_back("blu apracorn");
    materiallist.push_back("pnk apracorn");
    materiallist.push_back("blk apracorn");
    materiallist.push_back("chitin");
    materiallist.push_back("tattered rags");
    materiallist.push_back("duct tape");
    materiallist.push_back("drugh wax");
    materiallist.push_back("bees wax");
    materiallist.push_back("parafin wax");
    materiallist.push_back("nanobot ooze");
    materiallist.push_back("sphinx stone");
    materiallist.push_back("soap stone");
    materiallist.push_back("soap");
    materiallist.push_back("cotton");
    materiallist.push_back("silk");
    materiallist.push_back("nilon");
    materiallist.push_back("spandex");
    materiallist.push_back("glow in the dark plastic");
    materiallist.push_back("celulose plastic");
    materiallist.push_back("yarn");
    materiallist.push_back("rainbows and moonbeams");
    materiallist.push_back("woven threads of darkness");
    materiallist.push_back("shadowstuff");
    materiallist.push_back("human tissue");
    materiallist.push_back("leather");
    materiallist.push_back("mud");
    materiallist.push_back("ANIMALCLAW"); //place holders
    materiallist.push_back("ANIMALTOOTH");
    materiallist.push_back("ANIMALFUR/SKIN");
    materiallist.push_back("quantonium");
    materiallist.push_back("Quassium B");
    materiallist.push_back("radical isotope");
    materiallist.push_back("Radium X");
    materiallist.push_back("randomonium");
    materiallist.push_back("Randsdell's Metal");
    materiallist.push_back("raritanium");
    materiallist.push_back("Rearden Metal");
    //materiallist.push_back("Red Matter"); //commented for safty purposes
    materiallist.push_back("red stone");
    materiallist.push_back("relux");
    materiallist.push_back("residuum");
    materiallist.push_back("resistium");
    materiallist.push_back("rodinium");
    materiallist.push_back("runite");
    materiallist.push_back("ryanium");
    materiallist.push_back("sakuradite");
    materiallist.push_back("Saronite");
    materiallist.push_back("Schwartz");
    materiallist.push_back("Scrith");
    materiallist.push_back("Shazamium");
    materiallist.push_back("red sheol");
    materiallist.push_back("Silverium");
    materiallist.push_back("Sinisite");
    materiallist.push_back("Sivanium");
    materiallist.push_back("Sky Iron");
    //materiallist.push_back("Solarbonite");
    materiallist.push_back("Solinium");
    materiallist.push_back("Solinite");
    materiallist.push_back("Soulsteel");
    materiallist.push_back("Space Alloy Gren");
    materiallist.push_back("Spartanium");
    materiallist.push_back("Specium");
    materiallist.push_back("Star Metal");
    materiallist.push_back("Stygian Iron");
    materiallist.push_back("Stealth ore");
    materiallist.push_back("Stravidium");
    materiallist.push_back("wax coated stormphrax");
    materiallist.push_back("Strongium 90");
    materiallist.push_back("Stygium");
    materiallist.push_back("Submarinum");
    materiallist.push_back("Supermanium");
    materiallist.push_back("Supremium");
    materiallist.push_back("Tarydium");
    materiallist.push_back("Thaesium");
    materiallist.push_back("Theor+");
    materiallist.push_back("Titanium-A");
    materiallist.push_back("Thiotimoline");
    materiallist.push_back("Thorium");
    materiallist.push_back("Thyrium");
    materiallist.push_back("Tiberium");
    materiallist.push_back("Timonium");
    materiallist.push_back("Titanite");
    materiallist.push_back("Titansteel");
    materiallist.push_back("Transparent aluminum");
    materiallist.push_back("Transparisteel");
    materiallist.push_back("Triidium");
    materiallist.push_back("Trinium");
    materiallist.push_back("Tritanium");
    materiallist.push_back("Tronium");
    materiallist.push_back("Truesilver");
    materiallist.push_back("Tungite");
    materiallist.push_back("Turbidium");
    materiallist.push_back("Tylium");
    materiallist.push_back("Unobtainium");
    materiallist.push_back("Upsidaisium");
    materiallist.push_back("Uridium");
    materiallist.push_back("Uminm steel");
    materiallist.push_back("Uru");
    materiallist.push_back("Valyrian Steel");
    materiallist.push_back("Veridium");
    materiallist.push_back("Vibranium");
    materiallist.push_back("Vik-ro");// Do not combine with Yor-san.
    materiallist.push_back("Vionesium");
    materiallist.push_back("Viridium");
    materiallist.push_back("Vizorium");
    materiallist.push_back("Voltairium");
    materiallist.push_back("Wyrdstone");
    materiallist.push_back("Wasabinite");
    materiallist.push_back("Wellstone");
    materiallist.push_back("White(metal)");
    materiallist.push_back("Wishalloy");
    materiallist.push_back("Wonderflonium");// time freeze and other unknown propertys
    materiallist.push_back("Xenium");
    materiallist.push_back("Xenothium");
    materiallist.push_back("Xentronium");
    materiallist.push_back("Xirdalium");
    materiallist.push_back("Xithricite");
    materiallist.push_back("Yautjavian metal");
    //materiallist.push_back("Yor-san"); // commented out to prevent automated mixing
    materiallist.push_back("Zamomin");//sentiant element minipulates living things
    materiallist.push_back("Zanium");
    materiallist.push_back("Zephyrium");
    materiallist.push_back("Zexonite");
    materiallist.push_back("Zfylud Crystal");// self replacating and harmless when small
    materiallist.push_back("Zol");
    materiallist.push_back("Zoridium");
    materiallist.push_back("Zortium");
    materiallist.push_back("Zuunium");
    materiallist.push_back("Zydrine");
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
    itemPmodlist.push_back("flametouched ");
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
    itemPmodlist.push_back("shaddowy ");
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
    itemPmodlist.push_back("flakey ");
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
    itemSmodlist.push_back(", of portal making");
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
    itemSmodlist.push_back(", it has muddy hoofprints on it");
    //itemSmodlist.push_back(", it was emblazoned by a horse");//emblazened
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
    int i = (rand()%9);
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
    if(i==5)
    {
        stemp = ", it is encircled with "+stemp+" rings";
    }
    if(i==6)
    {
        stemp = ", it has a mosaic of "+randomimage()+" in "+stemp+" and "+randommaterialtype()+" on it";
    }
    if(i==7)
    {
        stemp = ", it is covered in spiderwebs";
    }
    if(i==8)
    {
        stemp = ", it has interwoven threads of "+stemp+" in it";
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

    int a = rand()%11;
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
    if(a==9) // it sticks to
    {
        temp.isdetrimental = 0;
        temp.prefexmodtext = "";
        stemp = "(s) ";
        temp.suffexmodtext = " it seems to pull twords "+randomitemtype()+stemp;
    }
    if(a==10) // it repels
    {
        temp.isdetrimental = 0;
        temp.prefexmodtext = "";
        stemp = "(s) ";
        temp.suffexmodtext = " it seems to push away from "+randomitemtype()+stemp;
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
    int i = (rand()%8);
    for(i;i>=0;i--)
    {
        object1.itemmodificationlist.push_back(constructitemmod());
    }

    i = (rand()%8);
    for(i;i>0;i--)
    {
        object1.itemmodificationlist.push_back(addedmaterialmods());
    }

    i = (rand()%8);
    for(i;i>0;i--)
    {
        object1.itemmodificationlist.push_back(metaitemmods());
    }
}

#ifndef LIBMAKE

string randobjecttype()
{
    int i = rand()%5;
    if(i==0)return randomarcitecturetype()+randomitemtype();
    if(i==1)return randomfurnituretype();
    if(i==2)return randomitemtype();
    if(i==3)return randomfurnituretype()+randomitemtype();
    if(i==4)return randomitemtype()+randomitemtype();
    return 0;
}

int main()
{
    srand(time(0));
    inititemlist();
    initimagelist();
    inititemPmodlist();
    inititemSmodlist();
    initmateriallist();
    initarcitecturelist();
    initfurniturelist();

    abstractthought idealmat;
    string str = randommaterialtype();
    idealmat.setText(str);
    material mat1;

    mat1.name = randommaterialtype();

    baseobject object1;

    object1.name = randobjecttype();//randomitemtype();//"sword";
    object1.desiredmat = idealmat;
    object1.basemat = mat1;

    addrandomitemmods(object1);

    //cout << randomusername() << " \n";
    //cout << randompassword() << " \n";


    FILE* a=fopen("item.txt","w");
    fprintf(a,(object1.getfullname()).c_str());
    fclose(a);


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

