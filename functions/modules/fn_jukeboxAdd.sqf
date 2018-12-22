_type = _this select 0;
_display = findDisplay 16224;
if (_type in musicType) then {
     _position = musicType find _type;
     musicType deleteAt _position;
     switch (_type) do {
          case "Action": {
               jukeActionButton = [0.8784,0.2706,0.3373,1];
               _control = (_display displayCtrl 16225);
               _control ctrlSetTextColor [0.8784,0.2706,0.3373,1];
          };
          case "Lead": {
               jukeLeadButton = [0.8784,0.2706,0.3373,1];
               _control = (_display displayCtrl 16226);
               _control ctrlSetTextColor [0.8784,0.2706,0.3373,1];
          };
          case "Stealth": {
               jukeStealthButton = [0.8784,0.2706,0.3373,1];
               _control = (_display displayCtrl 16227);
               _control ctrlSetTextColor [0.8784,0.2706,0.3373,1];
          };
     };
} else {
     musicType pushBack _type;
     switch (_type) do {
          case "Action": {
               jukeActionButton = [0.2980,0.6863,0.3137,1];
               _control = (_display displayCtrl 16225);
               _control ctrlSetTextColor [0.2980,0.6863,0.3137,1];
          };
          case "Lead": {
               jukeLeadButton = [0.2980,0.6863,0.3137,1];
               _control = (_display displayCtrl 16226);
               _control ctrlSetTextColor [0.2980,0.6863,0.3137,1];
          };
          case "Stealth": {
               jukeStealthButton = [0.2980,0.6863,0.3137,1];
               _control = (_display displayCtrl 16227);
               _control ctrlSetTextColor [0.2980,0.6863,0.3137,1];
          };
     };
};
