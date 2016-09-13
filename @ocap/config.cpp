class CfgPatches
{
	class OCAP
	{
		name = "OCAP";
		author = "MisterGoodson";
		requiredAddons[] = {"A3_Functions_F"};
		units[] = {};
		weapons[] = {};
        requiredAddons[] = {"cba_main"};
        VERSION_CONFIG;
	};
};

class CfgFunctions
{
	class OCAP
	{
		class null
		{
			file = "ocap\functions";
			class init {postInit = 1;};
			class exportData {};
			class callExtension {};
			class captureFrame {};
			class addEventHandlers;
			class log;
			class eh_killed;
			class eh_fired;
			class eh_hit;
			class eh_disconnected;
			class eh_connected;
            class handleProjectiles;
		};
	};
};
