musicType = [];
isMusicStopped = true;
addMusicEventHandler ["MusicStop", {isMusicStopped = true}];
while {true} do {
     waitUntil {count musicType > 0};
     _musicClassArray = ("getText (_x >> 'musicClass') in musicType && getText (_x >> ""name"") !="""" && getNumber (_x >> ""duration"") > 30" configClasses (configFile >> "CfgMusic")) apply {configName _x};
     _arraySize = count _musicClassArray;
     _musicClass = _musicClassArray select floor random _arraySize;
     playMusic _musicClass;
     isMusicStopped = false;
     3 fadeMusic 0.7;
     waitUntil {(isMusicStopped isEqualTo true) || (count musicType isEqualTo 0)};
	 3 fadeMusic 0;
     sleep 3;
     playMusic "";
};
