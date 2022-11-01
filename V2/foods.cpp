
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
    foodlist.push_back("loaf");
    foodlist.push_back("biscut");
}

std::vector<std::string> fruitlist;
void initfruitlist()
{
    /*
    fruitlist.push_back("apple");
    fruitlist.push_back("pear");
    fruitlist.push_back("peach");
    fruitlist.push_back("mango");
    fruitlist.push_back("starfruit");
    fruitlist.push_back("banana");
    fruitlist.push_back("watermellon");
    fruitlist.push_back("cantaloupe");
    */
    fruitlist.push_back("Abiu");
    fruitlist.push_back("Açaí");
    fruitlist.push_back("Acerola");
    fruitlist.push_back("Ackee"); // (Blighia sapida or Cupania sapida; Sapindaceae)
    fruitlist.push_back("African cherry orange"); // (Citropsis articulata; Rutaceae)
    fruitlist.push_back("African mango"); //(Irvingia gabonensis)
    fruitlist.push_back("African moringa"); //(Moringa stenopetala; Moringaceae)
    fruitlist.push_back("Ambarella"); //(Spondias dulcis; Anacardiaceae)
    fruitlist.push_back("American Black Elderberry"); //(Sambucus canadensis; Adoxaceae)
    fruitlist.push_back("American Chestnut"); //(Castanea dentata; Fagaceae)
    fruitlist.push_back("American grape"); //: North American species
    fruitlist.push_back("American Hazelnut"); //(Corylus americana; Betulaceae)
    fruitlist.push_back("American Pawpaw"); //(Asimina triloba; Annonaceae)
    fruitlist.push_back("American Persimmon"); //(Diospyros virginiana; Ebenaceae)
    fruitlist.push_back("American plum");//(Prunus americana; Rosaceae)
    fruitlist.push_back("American Red Elderberry"); //(Sambucus pubens; Adoxaceae)
    fruitlist.push_back("American Red Raspberry"); //(Rubus strigosus; Rosaceae)
    fruitlist.push_back("Apple");
    fruitlist.push_back("crabapple"); //(Malus)
    fruitlist.push_back("Malay Apple");
    fruitlist.push_back("Custard apple");
    fruitlist.push_back("Elephant apple");
    fruitlist.push_back("key apple");
    fruitlist.push_back("mammee apple");
    fruitlist.push_back("Apricot"); //(Prunus armeniaca or Armeniaca vulgaris)
    fruitlist.push_back("Araza"); //(Eugenia stipitata)
    fruitlist.push_back("Arhat"); //(Siraitia grosvenorii; Cucurbitaceae) Also called longevity fruit
    fruitlist.push_back("Atemoya"); //(Annona cherimola × Annona squamosa; Annonaceae)
    fruitlist.push_back("Atherton Raspberry"); //(Rubus probus; Rosaceae)
    fruitlist.push_back("Avocado"); //(Persea americana; Lauraceae)
    fruitlist.push_back("Babaco"); //(Carica pentagona; Caricaceae)
    fruitlist.push_back("Bacupari"); //(Garcinia gardneriana)
    fruitlist.push_back("Bacuri"); //(Platonia esculenta; Guttiferae)
    fruitlist.push_back("Bael");
    fruitlist.push_back("Woodapple"); //(Aegle marmelos; Rutaceae), found in eastern India.
    fruitlist.push_back("Banana"); //(Musacea spp.; Musaceae); its starchy variant is the plantain
    fruitlist.push_back("plantain");
    fruitlist.push_back("Barbadine"); //(granadilla; maracujá-açu in Portuguese)
    fruitlist.push_back("Barbados Cherry"); //, see acerola
    fruitlist.push_back("Batuan"); //(Garcinia morella)
    fruitlist.push_back("Beach Plum"); //(Prunus maritima; Rosaceae)
    fruitlist.push_back("Bearberry"); //(Arctostaphylos spp.)
    fruitlist.push_back("Betel Nut"); //(“Areca catechu”; Arecaceae)
    fruitlist.push_back("Bignay"); //(Antidesma bunius; Euphorbiaceae)
    fruitlist.push_back("Bilberry"); //or whortleberry (Vaccinium spp.)
    fruitlist.push_back("Bilimbi"); //(Averrhoa bilimbi; Oxalidaceae) Also called cucumber tree or tree sorrel
    fruitlist.push_back("Biriba"); //(Rollinia deliciosa; Annonaceae)
    fruitlist.push_back("Bitter melon");
    fruitlist.push_back("Black Apple");
    fruitlist.push_back("Black cherry"); //(Prunus serotina; Rosaceae) very popular flavoring for pies, jams, and sweets.
    fruitlist.push_back("Black raspberry"); //(Rubus occidentalis or Rubus leucodermis; Rosaceae)
    fruitlist.push_back("Black Mulberry"); //(Morus nigra; Moraceae)
    fruitlist.push_back("Black Sapote"); //(Diospyros digyna)
    fruitlist.push_back("Black Walnut"); //(Juglans nigra; Juglandaceae)
    fruitlist.push_back("Blackberry");
    fruitlist.push_back("Blood Orange");
    fruitlist.push_back("Blue tongue"); //(Melastoma affine; Melastomataceae)
    fruitlist.push_back("Blueberry"); //(Vaccinium, sect. Cyanococcus; Ericaceae)
    fruitlist.push_back("Bolivian coconut"); //(Parajubaea torallyi)
    fruitlist.push_back("Bolwarra"); //(Eupomatia laurina; Eupomatiaceae)
    fruitlist.push_back("Boquila"); //(Boquila trifoliata ; Lardizabalaceae)
    fruitlist.push_back("Bottle Gourd"); //also known as Calabash (Lagenaria siceraria; Cucurbitaceae)
    fruitlist.push_back("Brazilian Guava"); //(Psidium guineense; Myrtaceae)
    fruitlist.push_back("Breadnut"); //(Artocarpus camansi; Moraceae)
    fruitlist.push_back("Mayan breadnut");
    fruitlist.push_back("Broad-leaf Bramble"); //(Rubus moluccanus; Rosaceae)
    fruitlist.push_back("Brush cherry"); //(Syzygium australe; Myrtaceae)
    fruitlist.push_back("Buddha's Hand");
    fruitlist.push_back("Buffaloberry"); //("Shepherdia argentea"; Elaeagnaceae)
    fruitlist.push_back("Burdekin Plum"); //(Pleiogynium timorense; Anacardiaceae)
    fruitlist.push_back("Burmese grape"); //, or Latka (Baccaurea sapida; Phyllanthaceae)
    fruitlist.push_back("Bush tomato"); //(Certain Solanum species; Solanaceae)
    fruitlist.push_back("Button Mangosteen"); //(Garcinia prainiana)
    fruitlist.push_back("Caimito"); //(Chrysophyllum_cainito; Sapotaceae)
    //fruitlist.push_back("Calabash Tree"); //(Crescentia cujete)
    fruitlist.push_back("Calamondin"); //(Citrofortunella Microcarpa)
    fruitlist.push_back("Calamansi"); //(×Citrofortunella Mitis))
    fruitlist.push_back("CamuCamu"); //(Myrciaria dubia; Myrtaceae)
    fruitlist.push_back("Canary melon");
    fruitlist.push_back("Canistel"); //(Pouteria campechiana; Sapotaceae), also called yellow sapote or "eggfruit"
    fruitlist.push_back("Cantaloupe");
    fruitlist.push_back("Cape Gooseberry"); //(Physalis peruviana; Solanaceae)
    fruitlist.push_back("Capuli cherry"); //(Prunus salicifolia, Prunus capuli or Prunus serotina subsp. capuli); Rosaceae), native to the Andes[3]
    fruitlist.push_back("Carambola"); //(Averrhoa carambola; Oxalidaceae), also called star fruit or five fingers
    fruitlist.push_back("Cardón"); //(Pachycereus pringlei; Cactaceae)
    fruitlist.push_back("Carob"); //(Ceratonia siliqua; Fabaceae)
    fruitlist.push_back("Cashew apple"); //(Anacardium occidentale)
    fruitlist.push_back("Cassabanana"); //(Sicana odorifera; Cucurbitaceae)
    fruitlist.push_back("Cattley Guava"); //(Psidium cattleianum; Myrtaceae)
    fruitlist.push_back("Cawesh"); //(Annona scleroderma; Annonaceae)
    fruitlist.push_back("Cedar Bay cherry"); //(Eugenia carissoides; Myrtaceae)
    fruitlist.push_back("Ceriman"); //(Monstera deliciosa; Araceae)
    fruitlist.push_back("Cereus peruvianus");
    fruitlist.push_back("Ceylon gooseberry"); //(Dovyalis hebecarpa; Flacourtiaceae
    fruitlist.push_back("Charichuelo"); //(Garcinia intermedia)
    fruitlist.push_back("Chayote"); //(Sechium edule; Cucurbitaceae)
    fruitlist.push_back("Che"); //(Cudrania tricuspidata; Moraceae)
    fruitlist.push_back("Chempedak"); //or Champedak (Artocarpus integer; Moraceae)
    fruitlist.push_back("Chenet"); //(guinep or ackee; pitomba-das-Guinas in Portuguese), also known as Spanish lime or mamoncillo
    fruitlist.push_back("Cherimoya"); //(Annona cherimola; Annonaceae), native to the Ecuadorian Andes[4]
    fruitlist.push_back("Cherry"); //, sweet, black, sour, and wild species (Prunus avium, Prunus serotina, Prunus cerasus, and others)
    fruitlist.push_back("Cherry ballart"); //(Exocarpus cupressiformis; Santalaceae)
    fruitlist.push_back("Cherry of the Rio Grande"); //(Eugenia aggregata; Myrtaceae)
    fruitlist.push_back("Chilean guava"); //(Psidium cattleianum; see also ugni (Myrtaceae)
    fruitlist.push_back("Chinese jujube"); //(Ziziphus zizyphus; Rhamnaceae)
    fruitlist.push_back("Chinese Olive"); //(Canarium album; Burseraceae)
    fruitlist.push_back("Chinese Quince"); //(Pseudocydonia sinensis)
    fruitlist.push_back("Chokeberry"); //(Aronia)
    fruitlist.push_back("Chokecherry"); //(Prunus virginiana)
    fruitlist.push_back("Chupa-Chupa"); //(Quararibea cordata; Malvaceae)
    fruitlist.push_back("Citron"); //(Citrus medica)
    fruitlist.push_back("Clementine"); //(Citrus reticulata var. clementine),
    fruitlist.push_back("Cloudberry"); //(Rubus chamaemorus)
    fruitlist.push_back("Cluster fig"); //(Ficus racemosa; Moraceae)
    fruitlist.push_back("Cocky apple"); //(Planchonia careya)
    fruitlist.push_back("Coco Plum"); //(Chrysobalanus icaco; Chrysobalanaceae)
    fruitlist.push_back("Cocona"); //(Solanum sessilifolium; Solanaceae)
    fruitlist.push_back("Coconut"); //(Cocos nucifera; Arecaceae)
    fruitlist.push_back("Cocoplum"); //(Chrysobalanus icaco; Chrysobalanaceae)
    fruitlist.push_back("Coffee"); //("coffee cherries" surround the better-known "bean")
    fruitlist.push_back("Cola nut"); //(Cola acuminata; Sterculiaceae)
    fruitlist.push_back("Common apple-berry"); //(Billardiera scandens; Pittosporaceae)
    fruitlist.push_back("Conkerberry"); //(Carissa lanceolata; Apocynaceae)
    fruitlist.push_back("Cornelian cherry"); //(Cornus mas; Cornaceae)
    fruitlist.push_back("Costa Rican Guava"); //(Psidium friedrichsthalianum; Myrtaceae)
    fruitlist.push_back("Cranberry"); //(Vaccinium spp.)
    fruitlist.push_back("Crowberry"); //(Empetrum spp.)
    fruitlist.push_back("Cupuaçu"); //(Theobroma grandiflorum; Malvaceae)
    fruitlist.push_back("Currant"); //(Ribes spp.; Grossulariaceae), red, black, and white types
    //fruitlist.push_back("Curry-leaf Tree"); //(Murraya koenigii; Rutaceae)
    fruitlist.push_back("Custard Apple"); //(Annona reticulata; Annonaceae), also called Bullock's Heart
    fruitlist.push_back("Damson plum"); //(Prunus domestica subsp. insititia; Rosaceae)
    fruitlist.push_back("Date"); //(Phoenix dactylifera; Arecaceae)
    fruitlist.push_back("Date plum"); //(Diospyros lotus; Ebenaceae)
    fruitlist.push_back("Davidson's plum"); //(Davidsonia spp.; Cunoniaceae) Davidsonia jerseyana Davidsonia johnsonii Davidsonia pruriens
    fruitlist.push_back("Dead Man's Fingers (fruit)"); //(Blue Bean, Blue Sausage Fruit,Decaisnea fargesii)
    fruitlist.push_back("Desert banana"); //(Marsdenia australis)
    fruitlist.push_back("Desert fig"); //(Ficus platypoda; Moraceae)
    fruitlist.push_back("Desert lime"); //(Citrus glauca; Rutaceae)
    fruitlist.push_back("Dodder laurel"); //(Cassytha melantha)
    fruitlist.push_back("Doubah"); //(Marsdenia australis; Apocynaceae)
    fruitlist.push_back("Double Coconut"); //or Coco-de-mer(Lodoicea maldivica; Arecaceae)
    fruitlist.push_back("Dragonfruit/Pitaya"); //(Hylocereus spp.; Cactaceae)
    fruitlist.push_back("Duku (fruit)"); //(Lansium domesticum; Meliaceae)
    fruitlist.push_back("Durian"); //(Durio zibethicus; Malvaceae)
    fruitlist.push_back("Eastern May Hawthorn"); //(Crataegus aestivalis; Rosaceae, better known as mayhaw.)
    fruitlist.push_back("Elderberry"); //(Sambucus; Caprifoliaceae)
    fruitlist.push_back("Elephant Apple"); //(Dillenia indica; Dilleniaceae or Limonia acidissima; Rutaceae)
    fruitlist.push_back("Indian gooseberry"); //Emblica
    fruitlist.push_back("Emu Apple"); //(Owenia acidula; Meliaceae)
    fruitlist.push_back("Emu berry"); //(Grewia retusifolia)
    fruitlist.push_back("Falberry"); //(Vaccinium spp.)
    fruitlist.push_back("False-mastic"); //(Sideroxylon foetidissimum; Sapotaceae)
    fruitlist.push_back("pineapple guava"); //Feijoa
    fruitlist.push_back("Fibrous Satinash"); //(Syzygium fibrosum; Myrtaceae)
    fruitlist.push_back("Fig"); //(Ficus spp. Moraceae)
    fruitlist.push_back("Finger Lime"); //(Citrus australasica; Rutaceae)
    fruitlist.push_back("Florida strangler fig"); //(Ficus aurea; Moraceae)
    fruitlist.push_back("Forest strawberries"); //, Fragaria vesca
    fruitlist.push_back("Gac");
    fruitlist.push_back("Galia melon");
    fruitlist.push_back("Gambooge"); //(Garcinia cambogia; Clusiaceae)
    fruitlist.push_back("Genip"); //(Melicoccus bijugatus; Sapindaceae)
    fruitlist.push_back("Giant Colombian blackberry"); //(Rubus macrocarpus), native to the highlands of Colombia, up to 5 cm long and 2.5 cm wide[5]
    fruitlist.push_back("Giant Granadilla"); //(Passiflora quadrangularis; Passifloraceae)
    fruitlist.push_back("Gooseberry"); //(Ribes spp.; Grossulariaceae)
    fruitlist.push_back("Ceylon gooseberry");
    fruitlist.push_back("Indian gooseberry");
    fruitlist.push_back("Otaheite gooseberry");
    fruitlist.push_back("cape gooseberry");
    fruitlist.push_back("Goumi"); //(Elaeagnus multiflora; Elaeocarpaceae)
    fruitlist.push_back("Governor’s Plum"); //(Flacourtia indica; Flacourtiaceae)
    fruitlist.push_back("Montessa granadilla");
    fruitlist.push_back("yellow granadilla");
    fruitlist.push_back("Grape"); //, called raisin, sultana when it is dried. (Vitis spp.; Vitaceae)
    fruitlist.push_back("Grapefruit"); //(Citrus × paradisi; Rutaceae)
    fruitlist.push_back("Greengage"); //, a cultivar of the plum
    fruitlist.push_back("Ground Plum"); //(Astragalus crassicarpus; Fabaceae), also called Ground-plum milk-vetch
    fruitlist.push_back("Grumichama"); //(Eugenia brasiliensis; Myrtaceae)
    fruitlist.push_back("Guanabana"); //(Annona muricata; Annonaceae)
    fruitlist.push_back("Guarana"); //(Paullinia cupana; Sapindaceae)
    fruitlist.push_back("Guava"); //(Psidium guajava; Myrtaceae)
    fruitlist.push_back("Cattley guava");
    fruitlist.push_back("Chilean guava");
    fruitlist.push_back("Costa Rican guava");
    fruitlist.push_back("pineapple guava");
    fruitlist.push_back("purple guava");
    fruitlist.push_back("strawberry guava");
    fruitlist.push_back("Guavaberry/Rumberry"); //; (Myrciaria floribunda; Myrtaceae)
    fruitlist.push_back("Hackberry"); //(Celtis spp.; Cannabaceae)
    fruitlist.push_back("Hairless rambutan");
    fruitlist.push_back("Hardy Kiwi"); //(Actinidia arguta; Actinidiaceae family)
    fruitlist.push_back("Hawthorn"); //(Crataegus and Rhaphiolepis)
    fruitlist.push_back("Hog Plum"); //(taperebá in Portuguese)
    fruitlist.push_back("Honeydew");
    fruitlist.push_back("Honeysuckle");
    fruitlist.push_back("Horned melon"); //(Cucumis metuliferus; Cucurbitaceae)
    fruitlist.push_back("Huckleberry"); //(Vaccinium spp.)
    fruitlist.push_back("Huito"); //(Genipa americana; Rubiaceae); also called jagua, genipap, jenipapo
    fruitlist.push_back("Ice Cream Bean"); //(Inga edulis)
    fruitlist.push_back("Ilama"); //(Annona diversifolia; Annonaceae)
    fruitlist.push_back("Illawarra Plum"); //(Podocarpus elatus; Podocarpaceae)
    fruitlist.push_back("Imbe"); //(Garcinia livingstonei)
    fruitlist.push_back("Indian almond");
    fruitlist.push_back("Indian fig");
    fruitlist.push_back("Indian gooseberry"); //(Phyllanthus emblica/Emblica officinalis; Euphorbiaceae)
    fruitlist.push_back("Indian jujube"); //(Ziziphus mauritiana; Rhamnaceae)
    fruitlist.push_back("Indian prune"); //(Flacourtia rukan; Flacourtiaceae)
    fruitlist.push_back("Jabuticaba"); //(Myrciaria cauliflora; Myrtaceae), also called Brazilian Grape Tree
    fruitlist.push_back("Jackfruit"); //(Artocarpus heterophyllus Moraceae), also called nangka
    fruitlist.push_back("Jambul"); //(Syzygium cumini; Myrtaceae)
    fruitlist.push_back("Japanese Persimmon"); //, or Sharon fruit (Diospyros kaki; Ebenaceae)
    fruitlist.push_back("Jatobá"); //(Hymenae coubaril; Leguminosae) Caesalpinioideae)
    fruitlist.push_back("Jelly Palm"); //(Butia capitata)
    fruitlist.push_back("Jocote"); //, also called Jamaica Plum
    fruitlist.push_back("Jujube"); //(Ziziphus zizyphus; Rhamnaceae)
    fruitlist.push_back("Chinese jujube");
    fruitlist.push_back("Indian jujube");
    fruitlist.push_back("Juniper berry"); //(Juniperus spp.), used for flavoring and in making gin
    fruitlist.push_back("Kabosu"); //(Citrus Sphaerocarpa) Rutaceae
    fruitlist.push_back("Kaffir lime"); //(Citrus hystix)
    fruitlist.push_back("Kahikatea"); //(Dacrycarpus dacrydioides)
    fruitlist.push_back("Kakadu lime"); //(Citrus gracilis; Rutaceae)
    fruitlist.push_back("Kakadu plum"); //(Terminalia ferdinandiana; Combretaceae)
    fruitlist.push_back("Kandis"); //(Garcinia forbesii; Clusiaceae)
    fruitlist.push_back("Kapok"); //(Ceiba pentandra; Bombacaceae)
    fruitlist.push_back("Karkalla"); //(Carpobrotus rossii; Aizoaceae)
    fruitlist.push_back("Karonda"); //(Carissa carandas; Apocynaceae)
    fruitlist.push_back("Kei apple"); //(Dovyalis caffra; Flacourtiaceae)
    fruitlist.push_back("Kepel fruit"); //(Stelechocarpus burahol; Annonaceae)
    fruitlist.push_back("Keule"); //(Gomortega keule; Gomortegaceae)
    fruitlist.push_back("Key Lime"); //(Citrus aurantifolia)
    fruitlist.push_back("Kitembilla"); //(Dovyalis hebecarpa; Flacourtiaceae)
    fruitlist.push_back("Kiwano"); //, see horned melon
    fruitlist.push_back("Kiwifruit"); //(Actinida spp.; Actinidiaceae)
    fruitlist.push_back("Korlan");
    fruitlist.push_back("Kumquat"); //(Fortunella spp.)
    fruitlist.push_back("meiwa kumquat");
    fruitlist.push_back("nagami kumquat");
    fruitlist.push_back("Kundong"); //(Garcinia sp.; Clusiaceae)
    fruitlist.push_back("Kutjera"); //(Solanum centrale; Solanaceae)
    fruitlist.push_back("Kwai Muk"); //(Artocarpus hypargyraea; Moraceae)
    fruitlist.push_back("Lady apple"); //(Syzygium suborbiculare; Myrtaceae)
    fruitlist.push_back("Lakoocha"); //(Artocarpus lakoocha; Moraceae)
    fruitlist.push_back("Langsat"); //(Lansium domesticum), also called longkong or duku
    fruitlist.push_back("Lanzones"); //(Lansium domesticum; Meliaceae)
    fruitlist.push_back("Lapsi"); //(Choerospondias axillaris Roxb. Anacardiaceae)
    fruitlist.push_back("Lardizabala"); //(Lardizabala biternata; Lardizabalaceae)
    fruitlist.push_back("Lemon"); //(Citrus limon)
    fruitlist.push_back("Lemon aspen"); //(Acronychia acidula; Rutaceae)
    fruitlist.push_back("Leucaena");
    fruitlist.push_back("Lillypilly"); //(Acmena spp., Syzygium spp.) Used raw and in jam
    //fruitlist.push_back("Little gooseberry tree"); //(Buchanania arborescens; Anacardiaceae)
    fruitlist.push_back("Lime");
    fruitlist.push_back("Limeberry"); //(Trifasia trifolia; Rutaceae)
    fruitlist.push_back("Limequat"); //(Citrus aurantifolia × Fortunella spp.; Rutaceae)
    fruitlist.push_back("Lingonberry"); //(Vaccinium vitis-idaea)
    fruitlist.push_back("Loganberry"); //(Rubus loganobaccus)
    fruitlist.push_back("Longan"); //(Dimocarpus longan or Euphoria longana; Sapindaceae)
    fruitlist.push_back("Loquat"); //(Eriobotrya japonica; Rosaceae)
    fruitlist.push_back("Louvi"); //(Flacourtia inermis; Flacourtaceae)
    fruitlist.push_back("Lúcuma"); //(Pouteria campechiana; Sapotaceae)
    fruitlist.push_back("Lychee"); //(Litchi chinensis; Sapindaceae)
    fruitlist.push_back("Ma-praang"); //(Bouea macrophylla; Anacardiaceae)
    fruitlist.push_back("Mabolo"); //(Diospyros discolor; Ebenaceae) also known as a velvet persimmon
    fruitlist.push_back("Macadamia"); //(Macadamia integrifolia; Proteaceae)
    fruitlist.push_back("rough shell macadamia");
    fruitlist.push_back("Madrono"); //(Rheedia acuminata; Guttiferae)
    fruitlist.push_back("Malabar plum"); //(Syzygium jambos; Myrtaceae)
    fruitlist.push_back("Malay Apple"); //(Syzygium malaccense; Myrtaceae)
    fruitlist.push_back("Mamey Sapote"); //(Pouteria sapota; Sapotaceae)
    fruitlist.push_back("Mammee Apple"); //(Mammea americana; Guttiferae)
    fruitlist.push_back("Mamoncillo"); //(Melicoccus bijugatus; Sapindaceae), also known as quenepa, genip or Fijian Longan
    fruitlist.push_back("Mandarin"); //(Citrus reticulata)
    fruitlist.push_back("Mangaba"); //(Hancornia speciosa; Apocynaceae)
    fruitlist.push_back("Mango"); //(Mangifera indica; Anacardiaceae)
    fruitlist.push_back("Mangosteen"); //(Garcinia mangostana; Guttiferae)
    fruitlist.push_back("Manila tamarind"); //(Pithecellobium dulce; Leguminosae)
    fruitlist.push_back("Manoao"); //(Manoao colensoi)
    fruitlist.push_back("Maqui"); //(Aristotelia chilensis; Elaeocarpaceae)
    fruitlist.push_back("Marang");
    fruitlist.push_back("Marula"); //(Sclerocarya birrea)
    //Breadnut, Mayan //(Brosimum alicastrum; Moraceae)
    fruitlist.push_back("Mayapple"); //(Podophyllum spp.; Berberidaceae)
    fruitlist.push_back("Mayhaw"); //, see Eastern may hawthorn
    fruitlist.push_back("Maypop"); //(Passiflora incarnata; Passifloraceae)
    fruitlist.push_back("Medlar"); //(Mespilus germanica)
    fruitlist.push_back("Meiwa Kumquat"); //(Fortunella japonica; Rutaceae)
    fruitlist.push_back("Melinjo");
    fruitlist.push_back("Melon pear");
    fruitlist.push_back("Midyim"); //(Austromyrtus dulcis; Myrtaceae)
    fruitlist.push_back("Miracle Fruit"); //(Synsepalum dulcificum; Sapotaceae)
    fruitlist.push_back("Mock Strawberry"); //or Indian Strawberry (Potentilla indica; Rosaceae)
    fruitlist.push_back("purple mombin");
    fruitlist.push_back("red mombin");
    fruitlist.push_back("yellow mombin");
    fruitlist.push_back("Monkey Jackfruit"); //(Artocarpus rigidus; Moraceae)
    fruitlist.push_back("Monkey Tamarind"); //(Inga edulis; Leguminosae)
    fruitlist.push_back("Monstera"); //(Monstera deliciosa; Araceae) also called Swiss Cheese Plant, Split-leaf Philodendron
    fruitlist.push_back("Montessa Granadilla"); //(Passiflora platyloba; Passifloraceae)
    fruitlist.push_back("Mora Común"); //(Rubus adenotrichus), most common native berry from Mexico to Ecuador[7]
    fruitlist.push_back("Mora de Castilla"); //(Rubus glaucus), a blackberry native to South and Central America[8]
    fruitlist.push_back("Morinda");
    fruitlist.push_back("Morinda citrifolia");
    fruitlist.push_back("Mortiño"); //, or Andean blueberry (Vaccinium floribundum), undomesticated, abundant in the northern Andes[9]
    fruitlist.push_back("Mountain pepper"); //(Tasmannia spp.; Winteraceae )
    fruitlist.push_back("Mountain Soursop"); //(Annona montana; Annonaceae)
    //Mulberry (Morus spp.; Moraceae) including black, red and white mulberry
    fruitlist.push_back("Munydjudj"); //, see wild plum
    fruitlist.push_back("Mundu"); //(Garcinia dulcis)
    fruitlist.push_back("Muntries"); //(Kunzea pomifera; Myrtaceae)
    fruitlist.push_back("Muscadine"); //(Vitis rotundifolia; Vitaceae)
    fruitlist.push_back("Muskmelon");
    fruitlist.push_back("Naartjie"); //(Citrus reticulata, Citrus nobilis)
    fruitlist.push_back("Nagami Kumquat"); //(Fortunella margarita; Rutaceae)
    fruitlist.push_back("Nageia"); //(Nageia spp.)
    fruitlist.push_back("Nance"); //(Byrsonima crassifolia; Malpighiaceae)
    fruitlist.push_back("Nannyberry"); //or sheepberry (Viburnum spp.; Caprifoliaceae)
    fruitlist.push_back("Naranjilla"); //(Solanum quitoense; Solanaceae)
    fruitlist.push_back("Native currant"); //(Acrotriche depressa; Ericaceae)
    fruitlist.push_back("Native gooseberry"); //(Physalis minima; Solanaceae)
    fruitlist.push_back("Native raspberry"); //(Rubus parviflorus)
    fruitlist.push_back("Nectarine");
    fruitlist.push_back("Neem"); //(Azadirachta indica; Meliaceae)
    fruitlist.push_back("Néré"); //(Parkia biglobosa)
    fruitlist.push_back("Nonda plum"); //(Parinari nonda)
    fruitlist.push_back("Noni"); //(Morinda citrifolia; Rubiaceae)
    fruitlist.push_back("Nungu"); //(Borassus flabellifer; Arecaceae)
    fruitlist.push_back("Nutmeg"); //(Myristica fragrans; Myristicaceae)
    //fruitlist.push_back("Oil Palm"); //(Elaeis guineensis; Arecaceae)
    fruitlist.push_back("Olive");
    fruitlist.push_back("Orange"); //, of which there are sweet (Citrus sinensis) and sour (Citrus aurantium) species
    fruitlist.push_back("Oregon grape"); //(Mahonia aquifolium; Berberidaceae)
    fruitlist.push_back("Oroblanco"); //(Citrus paradisi C. grandis) Rutaceae (Also called the sweetie)
    fruitlist.push_back("Otaheite gooseberry"); //(Phyllanthus acidus; Phyllanthaceae)
    fruitlist.push_back("Palmyra Palm/Toddy Palm"); //(Borassus flabellifer; Arecaceae)
    fruitlist.push_back("Papaya"); //(Carica papaya; Caricaceae)
    fruitlist.push_back("Passion fruit"); // or Granadilla (Passiflora edulis and other Passiflora spp.; Passifloraceae)
    fruitlist.push_back("Pawpaw");
    fruitlist.push_back("Peach"); //(of the normal and white variety) and its variant the nectarine (Prunus persica)
    fruitlist.push_back("Peach palm"); //(Bactris gasipaes; Arecaceae)
    fruitlist.push_back("Peanut"); //(Arachis hypogaea; Fabaceae)
    fruitlist.push_back("Peanut butter fruit"); //(Bunchosia argentea; Malpighiaceae)
    fruitlist.push_back("Pear"); //, European and Asian species (Pyrus)
    fruitlist.push_back("Pecan"); //(Carya illinoinensis or illinoensis; Juglandaceae)
    fruitlist.push_back("Pepino"); //(Solanum muricatum)
    fruitlist.push_back("Pequi"); //(Caryocar brasiliensis; Caryocaraceae)
    fruitlist.push_back("Persian lime"); //Also known as tahiti lime.
    //Persimmon, American, see American persimmon
    //Persimmon, oriental, see Oriental persimmon
    fruitlist.push_back("Peumo"); //(Cryptocarya alba; Lauraceae)
    fruitlist.push_back("Phalsa"); //(Grewia subinaequalis; Tiliaceae)
    fruitlist.push_back("Pigeon pea");
    fruitlist.push_back("Pigeon plum"); //(Coccoloba diversifolia; Polygonaceae)
    fruitlist.push_back("Pigface"); //(Carpobrotus glaucescens; Aizoaceae)
    fruitlist.push_back("Pili Nut"); //(Canarium ovatum; Burseraceae)
    fruitlist.push_back("Pindo Palm"); //(Butia Capitata; Arecaceae)
    fruitlist.push_back("Pineapple"); //(Ananas comosus ; Bromeliaceae)
    fruitlist.push_back("Pineapple guava"); //(Feijoa sellowiana; Myrtaceae)
    fruitlist.push_back("Pink-flowered Native Raspberry"); //(Rubus parvifolius; Rosaceae)
    fruitlist.push_back("Pistachio"); //(Pistacia vera; Anacardiaceae)
    fruitlist.push_back("Pitaya"); //, see Dragon fruit
    fruitlist.push_back("Pitomba"); //(Eugenia luschnathiana or Talisia esculenta)
    fruitlist.push_back("Plum"); //, of which there are several domestic and wild species; dried plums are called prunes
    fruitlist.push_back("Pois doux"); //(Inga edulis, ice-cream bean, or inga-cipó in Portuguese)
    fruitlist.push_back("Pomegranate"); //(Punica granatum; Punicaceae)
    fruitlist.push_back("Pomelo"); //(also known as the shaddock) (Citrus maxima)
    fruitlist.push_back("Pommecythère"); // or pomcité (Spondias cytherea)
    fruitlist.push_back("Pommerac"); //(Eugenia malaccensis); also known as Otaheite apple; Malay apple; jambo in Portuguese
    fruitlist.push_back("Pond-apple"); //(Annona glabra; Annonaceae) Also called Alligator-apple and Monkey-apple
    fruitlist.push_back("Prickly pear"); //(Opuntia spp.; Cactaceae) used as both a fruit and vegetable depending on part of plant.
    fruitlist.push_back("Pulasan"); //(Nephelium mutabile; Sapindaceae)
    fruitlist.push_back("Pummelo"); //(Citrus grandis; Rutaceae)
    fruitlist.push_back("Pumpkin"); //(Cucurbita spp.)
    fruitlist.push_back("Pupunha"); //(Bactris gasipaes; Arecaceae); also known as Peach Plum or Pewa
    fruitlist.push_back("Purple apple-berry"); //(Billarderia longiflora; Pittosporaceae)
    fruitlist.push_back("Purple granadilla"); //(Passiflora edulis f edulis; Passifloraceae)
    fruitlist.push_back("Purple Guava"); //(Psidium rufum; Myrtaceae)
    fruitlist.push_back("Purple Mombin");//(Spondias purpurea; Anacardiaceae)
    fruitlist.push_back("Quandong"); //(Santalum acuminatum; Santalaceae)
    fruitlist.push_back("Queensland Ebony"); //(Diospyros humilis)
    fruitlist.push_back("Quince"); //(Cydonia oblonga and Chaenomeles)
    fruitlist.push_back("Raisin tree"); //(Hovenia dulcis, Rhamnaceae) Also called Japanese Raisin Tree
    fruitlist.push_back("Rambutan"); //(Nephelium lappaceum; Sapindaceae)
    fruitlist.push_back("Raspberry"); //, several species (genus Rubus)
    fruitlist.push_back("Red granadilla"); //(Passiflora coccinea; Passifloraceae)* Red Mombin (Spondias purpurea; Anacardiaceae)
    fruitlist.push_back("Red Mombin"); //(Spondias purpurea; Anacardiaceae)
    fruitlist.push_back("Red Mulberry"); //(Morus rubra)
    fruitlist.push_back("Rhubarb"); //(Rheum rhaponticum; Polygonaceae)
    fruitlist.push_back("Riberry"); //(Syzygium luehmannii; Myrtaceae), also called Lilly Pilly, Lillipilli, Chinese Apple
    fruitlist.push_back("Rimu"); //(Dacrydium cupressinum)
    fruitlist.push_back("Rollinia"); //(Rollinia mucosa; Annonaceae)
    fruitlist.push_back("Rose Apple"); //(Syzygium jambos; Myrtaceae)
    fruitlist.push_back("Rose hip"); //, the fruitlike base of roses (Rosa); used mostly for jams and tisane
    fruitlist.push_back("Rose-leaf Bramble"); //(Rubus rosifolius; Rosaceae)
    fruitlist.push_back("Rose myrtle"); //(Archirhodomyrtus beckleri; Myrtaceae)
    fruitlist.push_back("Rough Shell Macadamia"); //(Macadamia tetraphylla; Proteaceae)
    fruitlist.push_back("Rowan"); //(Sorbus)
    fruitlist.push_back("Safou"); //(Dacryodes edulis), also called atanga or butterfruit
    fruitlist.push_back("Sageretia"); //(Sageretia theezans; Rhamnaceae) Also called Mock Buckthorn.
    fruitlist.push_back("Saguaro"); //(Carnegiea gigantea; Cactaceae)
    fruitlist.push_back("Salak"); //(Salacca edulis; Arecaceae), also called snakefruit or cobrafruit
    fruitlist.push_back("Salal"); //(Gaultheria shallon; Ericaceae)
    fruitlist.push_back("Salmonberry"); //(Rubus spectabilis)
    fruitlist.push_back("Sandpaper Fig"); //(Ficus coronata; Moraceae)
    fruitlist.push_back("Santol"); //(Sandoricum koetjape; Meliaceae)
    fruitlist.push_back("Sapote"); //, see mamey
    fruitlist.push_back("Sapodilla"); //(Manilkara zapota; Sapotaceae), also called chiku, mespel, naseberry, sapadilla, snake fruit, sawo
    //Satinash //, fibrous, see #fibrous_satinash#fibrous satinash
    fruitlist.push_back("Saskatoonberry"); //(Amelanchier alnifolia, Rosaceae)
    fruitlist.push_back("Saw Palmetto"); //(Serenoa repens; Arecaceae)
    fruitlist.push_back("Sea-buckthorn"); //(Hippophae rhamnoides; Elaeagnaceae)
    fruitlist.push_back("Sea Grape"); //(Coccoloba uvifera; Polygonaceae)
    fruitlist.push_back("Serviceberry"); // or Saskatoon (Amelanchier)
    fruitlist.push_back("Shipova"); //(× Sorbopyrus auricularis)
    fruitlist.push_back("Small-leaf tamarind"); //(Diploglottis campbellii; Sapindaceae)
    fruitlist.push_back("Snow berry"); //(Gaultheria hispida; Ericaceae)
    fruitlist.push_back("Soncoya"); //(Annona diversifolia; Annonaceae)
    //Service tree //(Sorbus domestica), bears a fruit known as a sorb or sorb apple
    fruitlist.push_back("Soursop"); //(Annona muricata; Annonaceae), also called guanabana
    fruitlist.push_back("Southern Crabapple"); //(Malus angustifolia; Rosaceae)
    fruitlist.push_back("Spanish lime"); //(Melicoccus bijugatus; Sapindaceae)
    fruitlist.push_back("Spanish tamarind"); //(Vangueria madagascariensis)
    fruitlist.push_back("Spiny Monkey-orange"); //(Strychnos spinosa)
    fruitlist.push_back("Star Apple"); //(Chrysophyllum cainito; Chrysobalanaceae), also called caimito or caimite
    fruitlist.push_back("Starfruit"); //, see carambola
    fruitlist.push_back("Strawberry"); //(Fragaria)
    fruitlist.push_back("Strawberry Guava"); //(Psidium littorale; Myrtaceae)
    fruitlist.push_back("Strawberry myrtle"); //, see ugni
    fruitlist.push_back("Strawberry Pear");
    fruitlist.push_back("Sugar Apple"); //(Annona squamosa; Annonaceae); ata in Portuguese
    fruitlist.push_back("Surinam Cherry"); //(Eugenia uniflora; Myrtaceae) also called Brazilian Cherry, Cayenne Cherry, Pitanga
    fruitlist.push_back("Sweet apple-berry"); //(Billarderia cymosa; Pittosporaceae)
    fruitlist.push_back("Sweet Granadilla"); //(Passiflora ligularis; Passifloraceae)
    fruitlist.push_back("Sweet Lemon"); //(Citrus limetta)
    fruitlist.push_back("Sweet orange");
    fruitlist.push_back("Sweet pepper");
    fruitlist.push_back("Sweetsop"); //(Annona squamosa; Annonaceae) also called Sugar Apple
    fruitlist.push_back("Sycamore fig"); //(Ficus sycomorus. Moraceae) also called old world sycomore or just sycomore.
    fruitlist.push_back("Tahitian apple"); //(Spondias dulcis)
    fruitlist.push_back("Tamarillo"); //or Tree Tomato (Cyphomandra betacea; Solanaceae)
    fruitlist.push_back("Tamarind"); //(Tamarindus indica; Leguminosae)
    //Tamarind, Manila, see Manila tamarind
    //Tamarind, monkey, see monkey tamarind
    //Tamarind, velvet, see velvet tamarind
    fruitlist.push_back("Tangerine"); //, and similar
    fruitlist.push_back("Tanjong"); //(Mimusops elengi; Sapindaceae)
    fruitlist.push_back("Texas Persimmon"); //(Diospyros texana; Ebenaceae)
    fruitlist.push_back("Thimbleberry"); //(Rubus parviflorus)
    fruitlist.push_back("Totara"); //(Podocarpus totara)
    fruitlist.push_back("Toyon"); //(Heteromeles arbutifolia; Rosaceae)
    fruitlist.push_back("Tropical Almond"); //(Terminalia catappa; Combretaceae)
    fruitlist.push_back("Ugni"); //(Ugni molinae; Myrtaceae)
    fruitlist.push_back("Vanilla"); //(Vanilla planifolia; Orchidaceae)
    fruitlist.push_back("Velvet Tamarind"); //(Dialium indum; Leguminosae)
    fruitlist.push_back("Wampee"); //(Clausena lansium; Rutaceae)
    fruitlist.push_back("Water Apple"); //(Syzygium aqueum; Myrtaceae)
    fruitlist.push_back("Watermelon"); //(Citrullus lanatus)
    fruitlist.push_back("Wax apple"); //("Syzygium samarangense)
    fruitlist.push_back("Wax Gourd"); //, or winter melon (Benincasa hispida), eaten as a culinary vegetable when mature, but sweet when young
    fruitlist.push_back("Wax jambu"); //(Syzygium samarangense; Myrtaceae)
    fruitlist.push_back("West Indian cherry"); //, see acerola
    fruitlist.push_back("White aspen"); //(Acronychia oblongifolia; Rutaceae)
    fruitlist.push_back("White Mulberry"); //(Morus alba)
    fruitlist.push_back("White Sapote"); //(Casimiroa edulis; Rutaceae)
    fruitlist.push_back("Whortleberry"); //, see bilberry
    fruitlist.push_back("Wild grape"); //(Ampelocissus acetosa)
    fruitlist.push_back("Wild orange"); //(Capparis mitchellii; Capparaceae)
    fruitlist.push_back("Wild peach"); //(Terminalia carpentariae)
    fruitlist.push_back("Wild plum"); //(munydjudj) (Buchanania obovata)
    //Wild plum (Santalum lanceolatum)
    fruitlist.push_back("Wild Mangosteen"); //(Garcinia indica)
    fruitlist.push_back("Wineberry"); //(Rubus phoenicolasius)
    fruitlist.push_back("Wolfberry"); //(Lycium barbarum, Lycium spp.; Solanaceae)
    fruitlist.push_back("Wongi"); //(Manilkara kaukii; Sapotaceae)
    fruitlist.push_back("Wood Apple"); //(Feronia limonia; Rutaceae)
    fruitlist.push_back("Yangmei"); //(Myrica rubra; Myricaceae)
    fruitlist.push_back("Yantok"); //, or rattan fruit (Calamus manillensis)
    fruitlist.push_back("Yellow Granadilla"); //(Passiflora edulis f flavicarpa; Passifloraceae)
    fruitlist.push_back("Yellow Mombin"); //(Spondias mombin; Anacardiaceae)
    fruitlist.push_back("Yellow plum"); //(Ximenia americana; Olacaceae)
    fruitlist.push_back("Yew"); //(Taxus baccata; Taxaceae)
    fruitlist.push_back("Youngberry");
    fruitlist.push_back("Zig Zag Vine"); //(Melodurum leichhardtii; Annonaceae)
    fruitlist.push_back("Ziziphus"); //, see Jujube


}
std::string GetRandFruit()
{
    initfruitlist();
    return fruitlist[(rand()%fruitlist.size())];
}

std::vector<std::string> veglist;
void initveglist()
{
/*    veglist.push_back("carrot");
    veglist.push_back("potato");
    veglist.push_back("tomato"); //In this book tomatos are vegitable not fruit.
    veglist.push_back("lettuce");
    veglist.push_back("celery");
    veglist.push_back("pumpkin");
    veglist.push_back("onion");
    veglist.push_back("mushroom");
    veglist.push_back("peas");
    veglist.push_back("brocoli");
    veglist.push_back("cabbage");
    veglist.push_back("cucumber");*/

    //veglist.push_back();
    veglist.push_back("mushroom");
    veglist.push_back("amaranth");
    veglist.push_back("arugula");
    veglist.push_back("beet greens");
    veglist.push_back("bok choy");
    veglist.push_back("borage greens");
    veglist.push_back("broccoli Rabe");
    veglist.push_back("brussels sprout");
    veglist.push_back("cabbage");
    veglist.push_back("catsear");
    veglist.push_back("celery");
    veglist.push_back("celtuce");
    veglist.push_back("chaya");
    veglist.push_back("chickweed");
    veglist.push_back("chicory");
    veglist.push_back("chinese mallow");
    veglist.push_back("chrysanthemum leaves");
    veglist.push_back("collard greens");
    veglist.push_back("common Purslane");
    veglist.push_back("corn salad");
    veglist.push_back("cress");
    veglist.push_back("dandelion");
    veglist.push_back("endive");
    veglist.push_back("fat hen plant");
    veglist.push_back("fiddlehead");
    veglist.push_back("fluted pumpkin");
    veglist.push_back("garden Rocket");
    veglist.push_back("golden samphire");
    veglist.push_back("good King Henry plant");
    veglist.push_back("greater Plantain");
    veglist.push_back("kai-lan");
    veglist.push_back("kale");
    veglist.push_back("komatsuna");
    veglist.push_back("kuka");
    veglist.push_back("lagos bologi");
    veglist.push_back("lamb's lettuce");
    veglist.push_back("Lamb's Quarters");
    veglist.push_back("Land cress");
    veglist.push_back("Lettuce");
    veglist.push_back("Lizard's tail");
    veglist.push_back("Malabar Spinach");
    veglist.push_back("Melokhia");
    veglist.push_back("Miner's Lettuce");
    veglist.push_back("Mizuna greens");
    veglist.push_back("Mustard");
    veglist.push_back("Napa cabbage");
    veglist.push_back("New Zealand Spinach");
    veglist.push_back("Orache");
    veglist.push_back("Pak choy");
    veglist.push_back("Paracress");
    veglist.push_back("Pea sprouts/leaves");
    veglist.push_back("Poke");
    veglist.push_back("Radicchio");
    veglist.push_back("Samphire");
    veglist.push_back("Sculpit/Stridolo");
    veglist.push_back("Sea beet");
    veglist.push_back("Sea kale");
    veglist.push_back("Sierra Leone bologi");
    veglist.push_back("Soko");
    veglist.push_back("Sorrel");
    veglist.push_back("Spinach");
    veglist.push_back("Summer purslane");
    veglist.push_back("Swiss chard");
    veglist.push_back("Tatsoi");
    veglist.push_back("Turnip greens");
    veglist.push_back("Watercress");
    veglist.push_back("Water spinach");
    veglist.push_back("Wheatgrass");
    veglist.push_back("Winter purslane");
    veglist.push_back("Yarrow");
    veglist.push_back("Yao Choy");
    veglist.push_back("Avocado");
    veglist.push_back("Bell pepper");
    veglist.push_back("Bitter melon");
    veglist.push_back("Chayote");
    veglist.push_back("Cucumber");
    veglist.push_back("Ivy Gourd");
    veglist.push_back("Eggplant"); // /Aubergine/Brinjal
    veglist.push_back("Luffa");
    veglist.push_back("Pumpkin");
    veglist.push_back("Squash");
    veglist.push_back("corn");
    veglist.push_back("Sweet pepper");
    veglist.push_back("tinda");
    veglist.push_back("tomatillo");
    veglist.push_back("tomato");
    veglist.push_back("west indian gherkin");
    veglist.push_back("winter melon");
    veglist.push_back("zucchini"); // /Courgette
    veglist.push_back("Artichoke");
    veglist.push_back("Broccoli");
    veglist.push_back("Caper");
    veglist.push_back("Cauliflower");
    veglist.push_back("Courgette flowers");
    veglist.push_back("Squash blossoms");
    veglist.push_back("Asparagus");
    veglist.push_back("Cardoon");
    veglist.push_back("Celeriac");
    veglist.push_back("Celery");
    veglist.push_back("Chives");
    veglist.push_back("Elephant Garlic");
    veglist.push_back("Florence fennel");
    veglist.push_back("garlic");
    veglist.push_back("garlic chives");
    veglist.push_back("Kohlrabi");
    veglist.push_back("Kurrat");
    veglist.push_back("lemongrass");
    veglist.push_back("leek");
    veglist.push_back("lotus root");
    veglist.push_back("Nopal");
    veglist.push_back("Onion");
    veglist.push_back("Pearl onion");
    veglist.push_back("Potato onion");
    veglist.push_back("Prussian asparagus");
    veglist.push_back("Spring Onion/Scallion");
    veglist.push_back("Shallot");
    veglist.push_back("Tree onion");
    veglist.push_back("Welsh onion");
    veglist.push_back("Wild leek");
    veglist.push_back("Ahipa");
    veglist.push_back("Arracacha");
    veglist.push_back("Bamboo shoot");
    veglist.push_back("Beetroot");
    veglist.push_back("Burdock");
    veglist.push_back("Broadleaf arrowhead");
    veglist.push_back("Camas");
    veglist.push_back("Canna");
    veglist.push_back("Carrot");
    veglist.push_back("Cassava");
    veglist.push_back("Chinese artichoke");
    veglist.push_back("Daikon");
    veglist.push_back("Earthnut pea");
    veglist.push_back("Elephant Foot yam");
    veglist.push_back("Ensete");
    veglist.push_back("Galangal");
    veglist.push_back("Ginger");
    veglist.push_back("Hamburg parsley");
    veglist.push_back("Horseradish");
    veglist.push_back("Jerusalem artichoke");
    veglist.push_back("Jícama");
    veglist.push_back("Mashua");
    veglist.push_back("Parsnip");
    veglist.push_back("Pignut");
    veglist.push_back("Potato");
    veglist.push_back("Prairie turnip");
    veglist.push_back("Radish");
    veglist.push_back("Rutabaga");
    veglist.push_back("Salsify");
    veglist.push_back("Scorzonera");
    veglist.push_back("Skirret");
    veglist.push_back("Swede");
    veglist.push_back("Sweet Potato");
    veglist.push_back("Taro");
    veglist.push_back("Ti");
    veglist.push_back("Tigernut");
    veglist.push_back("Turmeric");
    veglist.push_back("Turnip");
    veglist.push_back("Ulluco");
    veglist.push_back("Wasabi");
    veglist.push_back("Water caltrop");
    veglist.push_back("Water chestnut");
    veglist.push_back("Yacón");
    veglist.push_back("Yam");
    veglist.push_back("Aonori");
    veglist.push_back("Arame");
    veglist.push_back("Carola");
    veglist.push_back("Dabberlocks");
    veglist.push_back("Dulse");
    veglist.push_back("Hijiki");
    veglist.push_back("Kombu");
    veglist.push_back("Laver");
    veglist.push_back("Mozuku");
    veglist.push_back("Nori");
    veglist.push_back("Ogonori");
    veglist.push_back("Sea grape");
    veglist.push_back("Sea lettuce");
    veglist.push_back("Wakame");
    veglist.push_back("American groundnut");
    veglist.push_back("Azuki bean");
    veglist.push_back("Black-eyed pea");
    veglist.push_back("Chickpea");
    veglist.push_back("Common bean");
    veglist.push_back("Drumstick bean");
    veglist.push_back("Dolichos bean");
    veglist.push_back("Fava bean");
    veglist.push_back("Garbanzo bean");
    veglist.push_back("Green bean");
    veglist.push_back("Guar bean");
    veglist.push_back("Horse gram");
    veglist.push_back("Indian pea");
    veglist.push_back("Lentil");
    veglist.push_back("Lima Bean");
    veglist.push_back("Moth bean");
    veglist.push_back("Mung bean");
    veglist.push_back("Okra");
    veglist.push_back("Pea");
    veglist.push_back("Peanut");
    veglist.push_back("Pigeon pea");
    veglist.push_back("Ricebean");
    veglist.push_back("Runner bean");
    veglist.push_back("Snap pea");
    veglist.push_back("Snow pea");
    veglist.push_back("Soybean");
    veglist.push_back("Tarwi");
    veglist.push_back("Tepary bean");
    veglist.push_back("Urad bean");
    veglist.push_back("Velvet bean");
    veglist.push_back("Winged bean");
    veglist.push_back("Yardlong bean");
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
    int a = rand()%5;
    if(a==0)
    {
        return GetRandVeg() + " and " + GetRandFruit() + " " + GenarateFoodName();
    }
    if(a==1)
    {
        return GetRandVeg();
    }
    if(a==2)
    {
        return GetRandFruit();
    }
    if(a==3)
    {
        return GetRandFruit() + " " + GenarateFoodName();
    }
    if(a==4)
    {
        return GetRandVeg() + " " + GenarateFoodName();
    }
    return 0;
}
