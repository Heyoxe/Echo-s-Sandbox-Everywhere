if !(isMultiplayer) then {
	player assignCurator S_Curator;
};
if (isServer && isMultiplayer) then {
	availableCurators = allCurators;
	[] spawn {
		while {true} do {
			{
				_unit = getAssignedCuratorUnit _x;
				if (isNull _unit) then {
					availableCurators pushBackUnique _x;
				} else {
					availableCurators deleteAt _forEachIndex;
				};
			} forEach allCurators;
			{
				_assignedCurator = getAssignedCuratorLogic _x;
				if (isNull _assignedCurator) then {
					_assignedCurator = availableCurators select 0;
					_x assignCurator _assignedCurator;
					availableCurators deleteAt 0;
				};
			} forEach allPlayers;
			sleep 1;
		};
	};
};
if (isServer) then {
	[] spawn {
		waitUntil {!isNull findDisplay 46};
		_display = findDisplay 46;
		_display displayAddEventHandler ["KeyDown","if ((_this select 1) in [41, actionKeys ""User20"" select 0] && isNull findDisplay 16224) then {createdialog ""eseMenu""; [] spawn ESE_fnc_openMenu}"];
		jukeActionButton = [0.8784,0.2706,0.3373,1];
		jukeLeadButton = [0.8784,0.2706,0.3373,1];
		jukeStealthButton = [0.8784,0.2706,0.3373,1];
	};
};
if (!isServer && isMultiplayer) then {
	[] spawn {
		waitUntil {!isNull findDisplay 46};
		_display = findDisplay 46;
		_display displayAddEventHandler ["KeyDown","if ((_this select 1) in [41, actionKeys ""User20"" select 0] && isNull findDisplay 16224) then {createdialog ""eseMenu""; [] spawn ESE_fnc_openMenu}"];
		jukeActionButton = [0.8784,0.2706,0.3373,1];
		jukeLeadButton = [0.8784,0.2706,0.3373,1];
		jukeStealthButton = [0.8784,0.2706,0.3373,1];
	};
};