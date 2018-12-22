if (isServer && isMultiplayer) then {
	private _grp = createGroup sideLogic;
	allAvailableCurators = [];
	_curatorsCount = playableSlotsNumber blufor + playableSlotsNumber opfor + playableSlotsNumber independent;
	for "_i" from 0 to (_curatorsCount - 1) do {
		"ModuleCurator_F" createUnit [[0,0,0], _grp, "this setVariable ['BIS_fnc_initModules_disableAutoActivation', false, true]"];
	};
	allowedESELoading = true;
	publicVariable "allowedESELoading";
};

if (isServer && !isMultiplayer) then {
	private _grp = createGroup sideLogic;
	"ModuleCurator_F" createUnit [[0,0,0], _grp, "this setVariable ['BIS_fnc_initModules_disableAutoActivation', false, true]; S_Curator = this"];
	"ModuleCurator_F" createUnit [[0,0,0], _grp, "this setVariable ['BIS_fnc_initModules_disableAutoActivation', false, true]; S_Curator_alt = this"];
	S_Curator setVariable ["owner", "0"];
	S_Curator_alt setVariable ["owner", "1"];
	S_Curator setVariable ["addons", 3];
	S_Curator_alt setVariable ["addons", 3];
	allowedESELoading = true;
	publicVariable "allowedESELoading";
};
