#ifndef __BTC__
#ifndef ubyte
#define ubyte unsigned char
#endif
#ifndef byte
#define byte char
#endif
#ifndef ushort
#define ushort unsigned short
#endif
#endif
enum
#ifdef __BTC__
<ubyte> 
#endif
GOVERMENT_TYPE
{
	ANARCHY,
	DESPOTISM,
	MONARCHY,
	COMMUNISM,
	REPUBLIC,
	DEMOCRACY
};
enum
#ifdef __BTC__
<ushort> 
#endif
LEVEL
{
	CHIEFTAN,
	WARLORD,
	PRINCE,
	KING,
	EMPEROR,
	DUMMY_LEVEL = 0x200
};
enum 
#ifdef __BTC__
<ubyte>
#endif
CITY{ ROME, CAESAREA, CARTHAGE, NICOPOLIS, BYZANTIUM, BRUNDISIUM, SYRACUSE,
	ANTIOCH_ROME, PALMYRA, CYRENE, GORDION, TYRUS, JERUSALEM, SELEUCIA,
	RAVENNA, ARTAXATA, BABYLON, SUMER, URUK, NINEVEH, ASHUR, ELLIPI, AKKAD,
	ERIDU, KISH, NIPPUR, SHURUPPAK, ZARIQUM, IZIBIA, NIMRUD, ARBELA, ZAMUA,
	BERLIN, LEIPZIG, HAMBURG, BREMEN, FRANKFURT, BONN, NUREMBERG, COLOGNE,
	HANNOVER, MUNICH, STUTTGART, HEIDELBURG, SALZBURG, KONIGSBERG, DORTMUND,
	BRANDENBURG, THEBES, MEMPHIS, ORYX, HELIOPOLIS, GAZA, ALEXANDRIA, BYBLOS,
	CAIRO, COPTOS, EDFU, PITHOM, BUSIRIS, ATHRIBIS, MENDES, TANIS, ABYDOS,
	WASHINGTON, NEW_YORK, BOSTON, PHILADELPHIA, ATLANTA, CHICAGO, BUFFALO,
	ST_LOUIS, DETROIT, NEW_ORLEANS, BALTIMORE, DENVER, CINCINNATI, DALLAS,
	LOS_ANGELES, LAS_VEGAS, ATHENS, SPARTA, CORINTH, DELPHI, ERETRIA,
	PHARSALOS, ARGOS, MYCENAE, HERAKLEIA, ANTIOCH_GREEK, EPHESOS, RHODES,
	KNOSSOS, TROY, PERGAMON, MILETOS, DELHI, BOMBAY, MADRAS, BANGALORE,
	CALCUTTA, LAHORE, KARACHI, KOLHAPUR, JAIPUR, HYDERABAD, BENGAL, CHITTAGONG,
	PUNJAB, DACCA, INDUS, GANGES, MOSCOW, LENINGRAD, KIEV, MINSK, SMOLENSK,
	ODESSA, SEVASTOPOL, TBLISI, SVERDLOVSK, YAKUTSK, VLADIVOSTOK, NOVOGRAD,
	KRASNOYARSK, RIGA, ROSTOV, ASTRAKHAN, ZIMBABWE, ULUNDI, BAPEDI, HLOBANE,
	ISANDHLWANA, INTOMBE, MPONDO, NGOME, SWAZI, TUGELA, UMTATA, UMFOLOZI,
	IBABANAGO, ISIPEZI, AMATIKULU, ZUNGUIN, PARIS, ORLEANS, LYONS, TOURS,
	CHARTRES, BORDEAUX, ROUEN, AVIGNON, MARSEILLES, GRENOBLE, DIJON, AMIENS,
	CHERBOURG, POITIERS, TOULOUSE, BAYONNE, TENOCHTITLAN, CHIAUHTIA,
	CHAPULTEPEC, COATEPEC, AYOTZINCO, ITZAPALAPA, IZTAPAM, MITXCOAC, TACUBAYA,
	TECAMAC, TEPEZINCO, TICOMAN, TLAXCALA, XALTOCAN, XICALANGO, ZUMPANCO,
	PEKING, SHANGHAI, CANTON, NANKING, TSINGTAO, HANGCHOW, TIENTSIN, TATUNG,
	MACAO, ANYANG, SHANTUNG, CHINAN, KAIFENG, NINGPO, PAOTING, YANGCHOW,
	LONDON, COVENTRY, BIRMINGHAM, DOVER, NOTTINGHAM, YORK, LIVERPOOL, BRIGHTON,
	OXFORD, READING, EXETER, CAMBRIDGE, HASTINGS, CANTERBURY, BANBURY,
	NEWCASTLE, SAMARKAND, BOKHARA, NISHAPUR, KARAKORUM, KASHGAR, TABRIZ,
	ALEPPO, KABUL, ORMUZ, BASRA, KHANBALYK, KHORASAN, SHANGTU, KAZAN, QUINSAY,
	KERMAN, MECCA, NAPLES, SIDON, TYRE, TARSUS, ISSUS, CUNAXA, CREMONA, CANNAE,
	CAPUA, TURIN, GENOA, UTICA, CRETE, DAMASCUS, VERONA, SALAMIS, LISBON,
	HAMBURG_EXTRA, PRAGUE, SALZBURG_EXTRA, BERGEN, VENICE, MILAN, GHENT, PISA,
	CORDOBA, SEVILLE, DUBLIN, TORONTO, MELBOURNE, SYDNEY }; 
enum
#ifdef __BTC__
<ubyte>
#endif
UNIT_TYPE
{NONEXISTENT=-1, SETTLERS=0, MILITIA, PHALANX, LEGION, MUSKETEERS, RIFLEMEN, CAVALRY, KNIGHTS,
	CATAPULT, CANNON, CHARIOT, ARMOR, MECH__INF_, ARTILLERY, FIGHTER, BOMBER,
	TRIREME, SAIL, FRIGATE, IRONCLAD, CRUISER, BATTLESHIP, SUBMARINE, CARRIER,
	TRANSPORT, NUCLEAR, DIPLOMAT, CARAVAN };
enum
#ifdef __BTC__
<ubyte>
#endif
TECHNOLOGY
{
	ALPHABET,
	CODE_OF_LAWS,
	CURRENCY,
	ATOMIC_THEORY,
	DEMOCRACY_TECH,
	MONARCHY_TECH,
	ASTRONOMY,
	MAPMAKING,
	NAVIGATION,
	MATHEMATICS,
	MEDICINE,
	PHYSICS,
	ENGINEERING,
	UNIVERSITY,
	MAGNETISM,
	ELECTRONICS,
	MASONRY,
	BRONZE_WORKING,
	IRON_WORKING,
	BRIDGE_BUILDING,
	INVENTION,
	COMPUTERS,
	WRITING,
	STEAM_ENGINE,
	TRADE,
	CEREMONIAL_BURIAL,
	MYSTICISM,
	NUCLEAR_FISSION,
	PHILOSOPHY,
	RELIGION,
	LITERACY,
	HORSEBACK_RIDING,
	FEUDALISM,
	THE_WHEEL,
	GUNPOWDER,
	INDUSTRIALIZATION,
	CHEMISTRY,
	COMBUSTION,
	FLIGHT,
	ADVANCED_FLIGHT,
	SPACE_FLIGHT,
	MASS_PRODUCTION,
	POTTERY,
	COMMUNISM_TECH,
	THE_REPUBLIC,
	CONSTRUCTION,
	ROCKETRY,
	THE_CORPORATION,
	METALLURGY,
	RAILROAD,
	NUCLEAR_POWER,
	THEORY_OF_GRAVITY,
	STEEL,
	BANKING,
	ELECTRICITY,
	REFINING,
	EXPLOSIVES,
	SUPERCONDUCTOR,
	AUTOMOBILE,
	GENETIC_ENGINEERING,
	PLASTICS,
	RECYCLING,
	CHIVALRY,
	ROBOTICS,
	CONSCRIPTION,
	LABOR_UNION,
	FUSION_POWER,
	FUTURE_TECH
};
enum 
#ifdef __BTC__
<ushort>
#endif
NATION
{
	BARBARIAN,
	ROMAN,
	BABYLONIAN,
	GERMAN,
	EGYPTIAN,
	AMERICAN,
	GREEK,
	INDIAN,
	RUSSIAN = 9,
	ZULU,
	FRENCH,
	AZTEC,
	CHINESE,
	ENGLISH,
	MONGOL,
	BARBARIAN_USHORT = 0xffff
};
enum
#ifdef __BTC__
<ubyte>
#endif
WONDER
{
	THE_PYRAMIDS              = 0x01,
	THE_HANGING_GARDENS       = 0x02,
	THE_COLOSSUS              = 0x03,
	THE_LIGHTHOUSE            = 0x04,
	THE_GREAT_LIBRARY         = 0x05,
	THE_ORACLE                = 0x06,
	THE_GREAT_WALL            = 0x07,   
	MAGELLAN_S_EXPEDITION     = 0x08,
	MICHELANGELO_S_CHAPEL     = 0x09,
	COPERNICUS_OBSERVATORY    = 0x0a,
	SHAKESPEARE_S_THEATRE     = 0x0b,
	ISAAC_NEWTON_S_COLLEGE    = 0x0c,
	J_S_BACH_S_CATHEDRAL      = 0x0d,
	DARWIN_S_VOYAGE           = 0x0e,
	HOOVER_DAM                = 0x0f,
	WOMEN_S_SUFFRAGE          = 0x10,
	MANHATTAN_PROJECT         = 0x11,
	UNITED_NATIONS            = 0x12,
	APOLLO_PROGRAM            = 0x13,
	SETI_PROGRAM              = 0x14,
	CURE_FOR_CANCER           = 0x15
};
enum
#ifdef __BTC__
<short>
#endif
HISTORY_ITEM_TYPE
{
	FOUND_CITY = 0x1,
	DECLARE_WAR = 0x2,
	MAKE_PEACE = 0x3,
	DISCOVER = 0x5,
	PRODUCE_FIRST = 0x6,
	FORM_GOVERMENT = 0x8,
	CAPTURE_CITY = 0x9,
	BUILD_WONDER = 0xa,
	EMPIRE_POPULATION = 0xb,
	CIV_RANGE = 0xc,
	CIVILIZATION_DESTROYED = 0xd
};
#ifndef ENUM_ONLY
struct SVEFile
{
#ifdef __BTC__
	LittleEndian();
#endif
	struct SVEString
	{
		char name[11];
		ubyte eos;
	};
	struct SVEHeader
	{
		ushort step;
		ubyte playerNum;
		ubyte unknown[3];
		ushort unknown1;
		short year;
		LEVEL level;
		ushort unknown2;
		TECHNOLOGY tech;
		ubyte zero;
	} sveHeader;
	struct LeaderString
	{
		char name[13];
		ubyte eos;
	} leaders[8];
	struct NationPluralString
	{
		char name[11];
		ubyte eos;
	} nationsPlural[8];
	struct NationString
	{
		char name[10];
		ubyte eos;
	} nations[8];
	ushort money[8];
	ushort science[8];
	ushort unk[8];
	ushort unk1[8];
	ushort unk2[8];
	ushort unk3[8];
	ushort unk4[8];
	ubyte unk5[816];
	ushort civCharacter[8];
	struct Technologies
	{
		ubyte tech_bits[8];
		ushort future;

	} technologies[8];
	ushort govermentType[8]; 
	ubyte unk6[256];
	struct ForeignAffairs
	{
		struct Relation
		{
			ushort has_contact : 1;
			ushort war : 1;
			ushort embassy : 1;
			ushort unkn1 : 1;
			ushort unkn2 : 1;
			ushort peace : 1;
			ushort empty : 10;
		} relations[8];
	} foreignAffairs[8];
	ushort cityCount[8];
	ushort combatUnitsCount[8];
	ushort unknownCount[8];
	ushort settlersCount[8];
	ushort unknownCount1[8];
	ushort unknownCount2[8];
	ushort unknownOrder[8];
	ushort taxRates[8];
	ushort unknownCount3[8];
	short unknownLevel[8];
	ushort unknownCount4[8];
	NATION nation[8];
	ubyte unknownData[1092];
	//FSeek(3004);
	struct City1
	{
		ubyte city_num;
		ubyte unk[7];
	} cities1[128];
	
	/*FSeek(0x00006970);
	struct CityName
	{
		char cityName[12];
		ubyte eos;
	} cityNames[256];*/
	//FSeek(5384);
	ubyte unknownData1[1340];
	struct City
	{
		struct Buildings
		{
			ubyte courthouse: 1;
			ubyte city_walls: 1;
			ubyte library: 1;
			ubyte marketplace: 1;
			ubyte temple: 1;
			ubyte granary: 1;
			ubyte barracks: 1;
			ubyte palace: 1;

                        ubyte mfg_plant: 1;
                        ubyte factory: 1;
                        ubyte colloseum: 1;
                        ubyte mass_transit: 1;
                        ubyte university: 1;
                        ubyte cathedral: 1;
                        ubyte bank: 1;
                        ubyte aqueduct: 1;

                        ubyte recycling_center: 1;
			ubyte rest: 7;
			//ubyte SDI_defence: 1;
		} buildings;
		ubyte wonders;
		byte x;
		byte y;
		ubyte unkn1;
		ubyte population;
		ubyte unk2;
		UNIT_TYPE production;
		ubyte unk3;
		ubyte player;
		ushort food;
		ushort shields;
		ubyte workers[3];
		ubyte unk4[3];
		CITY city;
		ubyte trade_routes[3];
		ubyte unk5[2];
		//local CityName name = cityNames[city_num];
	} cities[128];
	struct UnitType
	{
		char unitName[12];
		ushort seaTransportType;
		ushort unitElement;
		ushort speed;
		ushort fuel;
		ushort attack;
		ushort defence;
		ushort unknown;
		ushort unknown2;
		ushort passengersCount;
		ushort logicalType;
		ushort cost;
	} unitType[28];
	struct Army
	{
		struct Unit
		{
			byte state;
			byte x;
			byte y;
			UNIT_TYPE type;
			ubyte steps;
			ubyte unk4;
			byte goto_x;
			byte goto_y;
			byte unk5;
			byte unk6;
			byte unk7;
			byte home_city;
		} unit[128];
	} armies[8];	
	struct MapLine
	{
		ubyte line[52];
	} mapLine[92];
	struct CityName
	{
		char cityName[12];
		ubyte eos;
	} cityNames[256];
	ushort historySizeof;
#if defined __BTC__
	struct History
	{
		BigEndian();
		do
		{
			struct HistoryItem
			{
				HISTORY_ITEM_TYPE type: 4;
				ushort step: 12;
				switch(type)
				{
					case FOUND_CITY:
					case CAPTURE_CITY:
						ubyte player;
						CITY city;
						ubyte x, y;
						break;
					case MAKE_PEACE:
					case DECLARE_WAR:
						ubyte player1: 4;
						ubyte player2: 4;
						break;
					case DISCOVER:
						ubyte player;
						TECHNOLOGY technology;
						break;
					case PRODUCE_FIRST:
						ubyte player;
						UNIT_TYPE unit_type;
						break;
					case FORM_GOVERMENT:
						ubyte player;
						GOVERMENT_TYPE goverment_type;
						break;
					case BUILD_WONDER:
						ubyte player;
						WONDER wonder;
						break;
					case EMPIRE_POPULATION:
						ubyte city_count;
						ushort population;
						break;
					case CIV_RANGE:
						ubyte first: 4;
						ubyte second: 4;
						ubyte third: 4;
						ubyte fourth: 4;
						ubyte fifth: 4;
						ubyte sixth: 4;
						ubyte seventh: 4;
						ubyte eighth: 4;
						break;
					case CIVILIZATION_DESTROYED:
						ubyte player;
						ubyte destroyer;
						break;
					default:
						ubyte player;
						ubyte obj;
				}
			} historyItem;
		}
		while((Length(historyItem) == 1 || sizeof historyItem < historySizeof) && historyItem.type != 0);
		ubyte historyPadding[4098 - historySizeof];
	} history;
	LittleEndian();
#else
			struct HistoryItem
			{
				HISTORY_ITEM_TYPE type: 4;
				ushort step: 12;
				struct HistoryItemWithPlayer
				{
					ubyte player;
					struct HistoryItemWIthCity
					{
						CITY city;
						ubyte x, y;

					};
					union
					{
						HistoryItemWIthCity city;
						TECHNOLOGY technology;
						UNIT_TYPE unit_type;
						GOVERMENT_TYPE goverment_type;
						WONDER wonder;
						ubyte destroyer;
					};
				};
				struct PopulationInfo
				{
					ubyte city_count;
					ushort population;
				};
				struct CivRangeInfo
				{
					ubyte first: 4;
					ubyte second: 4;
					ubyte third: 4;
					ubyte fourth: 4;
					ubyte fifth: 4;
					ubyte sixth: 4;
					ubyte seventh: 4;
					ubyte eighth: 4;
				};
				union
				{
					HistoryItemWithPlayer with_player;
					PopulationInfo population_info;
					CivRangeInfo range_info;
				};
			};
	ubyte History[4098];
#endif
	short wonders_cities[CURE_FOR_CANCER];
	struct Losses
	{
		ushort losses[27];

	} losses[8];
} sveFile;
#endif
