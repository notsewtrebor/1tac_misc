// in case of fire, tell Bear

tooltip = "Author: Bear";

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
 	uniform[] = {"rhs_uniform_FROG01_wd"};
   	vest[] = {};
   	backpack[] = {"rhsusf_falconii_coy"};
   	headgear[] = {};
   	goggles[] = {"default"};
   	hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

	// These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
	radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_lwh_helmet_marpatwd_ess","rhsusf_lwh_helmet_marpatwd_headset"};
	vest[] = {"rhsusf_spc_rifleman"};
    primaryWeapon[] = 
	{
		"rhs_weap_m16a4_carryhandle",
		"rhs_weap_m16a4_carryhandle_pmag"
	};
	bipod[] = 
	{ /* weighted 4/1/3 */
		"","","","",
		"rhsusf_acc_grip1",
		"rhsusf_acc_grip3","rhsusf_acc_grip3","rhsusf_acc_grip3"
	};
    scope[] = {};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
};
class g : r
{
    displayName = "Grenadier";
	vest[] = {"rhsusf_spc_teamleader"};
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
	bipod[] = {};
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc"),
		LIST_5("rhs_mag_M441_HE"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
	magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    //primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
};
class m : car
{
    displayName = "Medic";
	vest[] = {"rhsusf_spc_corpsman"};
	backpackItems[] = {
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_6("ACE_epinephrine"),
		LIST_2("ACE_bloodIV"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class smg : r
{
    displayName = "Submachinegunner";
	vest[] = {"rhsusf_spc_light"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
		LIST_2("rhs_mag_m713_Red"),
		LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : r
{
    displayName = "Squad Leader";
	vest[] = {"rhsusf_spc_squadleader"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
		LIST_2("rhs_mag_m18_green"),
		LIST_2("rhs_mag_m18_red"),
		LIST_2("rhs_mag_m18_purple")
    };
	linkedItems[] += 
	{
		"ItemGPS",
		"Binocular"
	};
	items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
	radios[] = {"ACRE_PRC117F"};
	backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
	backpackItems[] = {};
	radios[] = {"ACRE_PRC117F"};
	linkedItems[] = {
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemGPS",
		"ACE_Vector"
	};
	items[] = {
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_Maptools"
	};
};

class ar : r
{
	displayName = "Automatic Rifleman (M249)";
	primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
	bipod[] = {};
	vest[] = {"rhsusf_spc_mg"};
	magazines[] =
    {
        LIST_6("rhsusf_100Rnd_556x45_soft_pouch"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class aar : r
{
    displayName = "Ass. Automatic Rifleman (M249)";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_5("rhsusf_100Rnd_556x45_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};

class ar_m27iar : r
{
	displayName = "Automatic Rifleman (M27 IAR)";
	primaryWeapon[] = {"rhs_weap_m27iar"};
	bipod[] = {"rhsusf_acc_harris_bipod", "rhsusf_acc_grip3"};
	vest[] = {"rhsusf_spc_iar"};
	magazines[] +=
	{
		LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag")
	};
};
class aar_m27iar : r
{
    displayName = "Ass. Automatic Rifleman (M27 IAR)";
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
    linkedItems[] += {"Binocular"};
};

class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
	displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_sr25_ec"};
	scope[] = {"rhsusf_acc_LEUPOLDMK4"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	magazines[] =
	{
		LIST_10("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_2("rhs_mag_m67"),
		LIST_2("rhs_mag_an_m8hc")
	};
};
class mmgg : ar
{
	displayName = "MMG Gunner";
	vest[] = {"rhsusf_spc_mg"};
	primaryWeapon[] = {"rhs_weap_m240B"};
	scope[] = {};
	magazines[] =
	{
		LIST_4("rhsusf_100Rnd_762x51"),
		LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
	};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	vest[] = {"rhsusf_spc_mg"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
	displayName = "MMG Assistant Gunner";
	vest[] = {"rhsusf_spc_teamleader"};
   	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
	backpackItems[] =
	{
		LIST_3("rhsusf_100Rnd_762x51")
	};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
	displayName = "HMG Assistant Gunner";
	backPack[] = {"RHS_M2_Tripod_Bag"};
	vest[] = {"rhsusf_spc_squadleader"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
};
class matg : car
{
	displayName = "MAT Gunner";
    backpack[] = {"B_Carryall_khk"};
	secondaryWeapon[] = {"rhs_weap_smaw_green"};
	secondaryAttachments[] = {"rhs_weap_optic_smaw"};
	magazines[] +=
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP",
		LIST_5("rhs_mag_smaw_SR")
	};
};
class matac : r
{
	displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_khk"};
	backpackItems[] =
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP",
		LIST_5("rhs_mag_smaw_SR")
	};
};
class matag : car
{
	displayName = "MAT Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
    backpack[] = {"B_Carryall_khk"};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
	backpackItems[] =
	{
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP"
	};
};
class hatg : car
{
    displayName = "HAT Gunner";
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatac : car
{
	displayName = "HAT Ammo Carrier";
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
};
class hatag : car
{
	displayName = "HAT Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {"B_Carryall_khk"};
	backpackItems[] =
	{
		"rhs_fgm148_magazine_AT"
	};
	linkedItems[] =
	{
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"lerca_1200_tan",
		"ItemGPS"
	};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"rhsusf_spc_squadleader"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
	backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "lerca_1200_tan",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"rhsusf_spc_corpsman"};
    headgear[] = {"rhs_booniehat2_marpatwd","rhsusf_bowman_cap","rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_2("rhsusf_20Rnd_762x51_m993_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	backpack[] = {};
	linkedItems[] += {"ACE_Vector","ItemGPS"};
	items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    vest[] = {"rhsusf_spc_squadleader"};
    scope[] = {"rhsusf_acc_ACOG3"};
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_pmag"};
	silencer[] = {"rhsusf_acc_SF3P556"};
	sidearmWeapon[] = {};
    magazines[] =
    {
		LIST_9("rhs_mag_30Rnd_556x45_Mk318_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {
		"rhsusf_cvc_ess",
		"rhsusf_cvc_alt_helmet",
		"rhsusf_cvc_helmet",
		"rhsusf_cvc_green_ess",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_helmet"
	};
    linkedItems[] += {"Binocular","ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {
		"rhsusf_cvc_ess",
		"rhsusf_cvc_alt_helmet",
		"rhsusf_cvc_helmet",
		"rhsusf_cvc_green_ess",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_helmet"
	};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {
		"rhsusf_hgu56p_black",
		"rhsusf_hgu56p_visor_black",
		"rhsusf_hgu56p_green",
		"rhsusf_hgu56p_visor_green",
		"rhsusf_hgu56p",
		"rhsusf_hgu56p_visor"
	};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
	items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {
		"rhsusf_hgu56p_visor_mask_black",
		"rhsusf_hgu56p_visor_mask_Empire_black",
		"rhsusf_hgu56p_visor_mask_black_skull",
		"rhsusf_hgu56p_visor_mask_green",
		"rhsusf_hgu56p_visor_mask_green_mo",
		"rhsusf_hgu56p_visor_mask",
		"rhsusf_hgu56p_visor_mask_mo",
		"rhsusf_hgu56p_visor_mask_skull",
		"rhsusf_hgu56p_visor_mask_smiley"
	};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
	magazines[] += {
		LIST_2("rhs_mag_m18_green")
	};
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
	items[] =
	{
		LIST_3("ACE_fieldDressing"),
		"ACE_morphine"
	};
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {"B_Carryall_khk"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
	items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
	backpack[] = {"B_Carryall_khk"};
    vest[] = {"rhsusf_spc_rifleman"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
		"ACE_M26_Clacker",
		"ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
	vest[] = {"rhsusf_spc_squadleader"};
    linkedItems[] += {"B_UavTerminal"};
};