class CfgPatches
{
	class ESE
	{
		name = "Echo's Sandbox Everywhere";
		author = "Heyoxe";
		url = "https://steamcommunity.com/id/Heyoxe/";
		requiredVersion = 0.1;
		requiredAddons[] = {
			A3_Functions_F_Mark
		};
		units[] = {};
		weapons[] = {};
	};
};
enableDebugConsole = 2;
class CfgFunctions {
	class ESE {
		class system {
			file = "\ESE_E\functions\system";
			class preInit {
				preInit = 1;
			};
			class postInit {
				postInit = 1;
			};
			class openMenu;
		};
		class modules {
			file = "\ESE_E\functions\modules";
               class curatorAddObjects;
               class curatorReassign;
			class jukeboxPlay;
			class jukeboxAdd;
			class teleportOpen;
			class virtualGarage;
		};

	};
};
#include "\ESE_E\dialog\eseMenu.hpp"
