if !(isMultiplayer) then {
     unassignCurator player;
     player assignCurator S_Curator;
	 player assignCurator S_Curator_alt;
} else {
	[getAssignedCuratorLogic player] remoteExec ["unassignCurator", 2];
};
