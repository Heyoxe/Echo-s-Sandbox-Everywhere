class eseMenu
{
	idd = 16224;
	movingEnable = 1;
	class ControlsBackground
	{
		class eseMenuBackground
		{
			type = 0;
			idc = -1;
			x = 0.0687312 * safezoneW + safezoneX;
			y = 0.07782 * safezoneH + safezoneY;
			w = 0.8625 * safezoneW;
			h = 0.458889 * safezoneH;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.4824};
			colorText[] = {0.2275,0.1059,0.6275,1};
			colorShadow[] = {0,0,0,0};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;

		};
		class eseButtonAddBackground
		{
			type = 0;
			idc = -1;
			x = 0.108434 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 2;
			text = "";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseButtonReassignBackground
		{
			type = 0;
			idc = -1;
			x = 0.271372 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 2;
			text = "";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseButtonArsenalBackground
		{
			type = 0;
			idc = -1;
			x = 0.432247 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 2;
			text = "";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseButtonTeleportBackground
		{
			type = 0;
			idc = -1;
			x = 0.595184 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 2;
			text = "";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseButtonQSBackground
		{
			type = 0;
			idc = -1;
			x = 0.756059 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 2;
			text = "";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseMenuTitle
		{
			type = 0;
			idc = -1;
			moving = 1;
			x = 0.0687312 * safezoneW + safezoneX;
			y = 0.07782 * safezoneH + safezoneY;
			w = 0.8625 * safezoneW;
			h = 0.0444444 * safezoneH;
			style = 2;
			text = "ECHO'S SANDBOX EVERYWHERE";
			colorBackground[] = {0.1647,0.3725,0.6431,1};
			colorText[] = {1,1,1,1};
			font = "PuristaSemiBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseMenuJuke
		{
			type = 0;
			idc = -1;
			x = 0.108434 * safezoneW + safezoneX;
			y = 0.47228 * safezoneH + safezoneY;
			w = 0.0751953 * safezoneW;
			h = 0.0381944 * safezoneH;
			style = 0;
			text = "Jukebox";
			colorBackground[] = {0.1216,0.0157,0.0039,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
		};
	};
	class Controls
	{
		class eseButtonAdd
		{
			type = 1;
			idc = -1;
			x = 0.108434 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundActive[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1647,0.3725,0.6431,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_curatorAddObjects";
		};
		class eseButtonAddText
		{
			type = 1;
			idc = -1;
			x = 0.108434 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.04125 * safezoneH;
			style = 0+2;
			text = "Add all objects to Zeus";
			borderSize = 0;
			colorBackground[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundActive[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1412,0.2196,0.3255,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_curatorAddObjects";
		};
		class eseButtonAddImage
		{
			type = 0;
			idc = -1;
			x = 0.116891 * safezoneW + safezoneX;
			y = 0.1777 * safezoneH + safezoneY;
			w = 0.1175 * safezoneW;
			h = 0.217778 * safezoneH;
			style = 48;
			text = "\ESE_E\data\ui\curatorObjectsAddIcon.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;

		};
		class eseButtonReassign
		{
			type = 1;
			idc = -1;
			x = 0.271372 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundActive[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1647,0.3725,0.6431,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_curatorReassign";
		};
		class eseButtonReassignText
		{
			type = 1;
			idc = -1;
			x = 0.271372 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.04125 * safezoneH;
			style = 0+2;
			text = "Reassign Zeus";
			borderSize = 0;
			colorBackground[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundActive[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundDisabled[] = {0.102,0.102,0.102,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1412,0.2196,0.3255,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_curatorReassign";
		};
		class eseButtonReassignImage
		{
			type = 0;
			idc = -1;
			x = 0.279828 * safezoneW + safezoneX;
			y = 0.17836 * safezoneH + safezoneY;
			w = 0.1175 * safezoneW;
			h = 0.217778 * safezoneH;
			style = 48;
			text = "\ESE_E\data\ui\curatorReassignIcon.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;

		};
		class eseButtonArsenal
		{
			type = 1;
			idc = -1;
			x = 0.432247 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundActive[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1647,0.3725,0.6431,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [""Open"", true] call BIS_fnc_arsenal";
		};
		class eseButtonArsenalText
		{
			type = 1;
			idc = -1;
			x = 0.432247 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.04125 * safezoneH;
			style = 0+2;
			text = "Open the Virtual Arsenal";
			borderSize = 0;
			colorBackground[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundActive[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1412,0.2196,0.3255,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [""Open"", true] call BIS_fnc_arsenal";
		};
		class eseButtonArsenalImage
		{
			type = 0;
			idc = -1;
			x = 0.440703 * safezoneW + safezoneX;
			y = 0.17836 * safezoneH + safezoneY;
			w = 0.1175 * safezoneW;
			h = 0.217778 * safezoneH;
			style = 48;
			text = "\ESE_E\data\ui\arsenalIcon.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;

		};
		class eseButtonGarage
		{
			type = 1;
			idc = -1;
			x = 0.595184 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundActive[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1647,0.3725,0.6431,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_virtualGarage";
		};
		class eseButtonGarageText
		{
			type = 1;
			idc = -1;
			x = 0.595184 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.04125 * safezoneH;
			style = 0+2;
			text = "Open the Virtual Garage";
			borderSize = 0;
			colorBackground[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundActive[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1412,0.2196,0.3255,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_virtualGarage";
		};
		class eseButtonGarageImage
		{
			type = 0;
			idc = -1;
			x = 0.603641 * safezoneW + safezoneX;
			y = 0.17836 * safezoneH + safezoneY;
			w = 0.1175 * safezoneW;
			h = 0.217778 * safezoneH;
			style = 48;
			text = "\ESE_E\data\ui\garageIcon.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseTeleport
		{
			type = 1;
			idc = 11111;
			x = 0.756059 * safezoneW + safezoneX;
			y = 0.1623 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.2475 * safezoneH;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundActive[] = {0.1647,0.3725,0.6431,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1647,0.3725,0.6431,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_teleportOpen";
		};
		class eseTeleportText
		{
			type = 1;
			idc = 11112;
			x = 0.756059 * safezoneW + safezoneX;
			y = 0.4076 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.04125 * safezoneH;
			style = 0+2;
			text = "Teleportation Menu";
			borderSize = 0;
			colorBackground[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundActive[] = {0.1412,0.2196,0.3255,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.502,0.502,0.502,1};
			colorFocused[] = {0.1412,0.2196,0.3255,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closeDialog 2; [] spawn ESE_fnc_teleportOpen";
		};
		class eseTeleportImage
		{
			type = 0;
			idc = 11113;
			x = 0.764516 * safezoneW + safezoneX;
			y = 0.17836 * safezoneH + safezoneY;
			w = 0.1175 * safezoneW;
			h = 0.217778 * safezoneH;
			style = 48;
			text = "\ESE_E\data\ui\teleportIcon.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 0;
		};
		class eseMenuJukeAction
		{
			type = 1;
			idc = 16225;
			x = 0.19145 * safezoneW + safezoneX;
			y = 0.4758 * safezoneH + safezoneY;
			w = 0.0431156 * safezoneW;
			h = 0.0381944 * safezoneH;
			style = 0;
			text = "Action";
			borderSize = 0;
			action = "[""Action""] spawn ESE_fnc_jukeboxAdd";
			colorBackground[] = {0.0039,0.7961,0.9294,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.9569,0.2706,0.3373,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class eseMenuJukeLead
		{
			type = 1;
			idc = 16226;
			x = 0.254872 * safezoneW + safezoneX;
			y = 0.4758 * safezoneH + safezoneY;
			w = 0.0421156 * safezoneW;
			h = 0.0381944 * safezoneH;
			style = 0;
			text = "Lead";
			borderSize = 0;
			action = "[""Lead""] spawn ESE_fnc_jukeboxAdd";
			colorBackground[] = {0.0039,0.7961,0.9294,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.9569,0.2706,0.3373,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
		class eseMenuJukeStealth
		{
			type = 1;
			idc = 16227;
			x = 0.303753 * safezoneW + safezoneX;
			y = 0.4758 * safezoneH + safezoneY;
			w = 0.0479984 * safezoneW;
			h = 0.0381944 * safezoneH;
			style = 0;
			text = "Stealth";
			borderSize = 0;
			action = "[""Stealth""] spawn ESE_fnc_jukeboxAdd";
			colorBackground[] = {0.0039,0.7961,0.9294,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.9569,0.2706,0.3373,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
		};
	};
};
