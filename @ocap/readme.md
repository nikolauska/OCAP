## Installation

- Copy & paste @ocap into your Arma 3 mods directory.
- Open @ocap, copy & paste 'userconfig' folder into your Arma server's root folder.
- Navigate to A3 root > userconfig > ocap. Open config.hpp in a text editor (e.g. notepad).
- Configure settings accordingly.
- Open @ocap, copy & paste ocap_exporter.dll into your Arma server's root folder.

**Repeat steps 2 to 4 for each Arma server you wish to run OCAP on.**

## Running OCAP
- To run OCAP on your server, add @ocap to your server's '-mods' startup parameter.
  - `-mods=@cba_a3;@ocap;`
- Capture automatically begins when server becomes populated (see userconfig for settings).
- To end and export capture data, call the following (server-side):
  - `[] call ocap_fnc_exportData;`

**Tip:** You can use the above function in a trigger.
e.g. Create a trigger that activates once all objectives complete. Then on activiation:
```
if (isServer) then {
    [] call ocap_fnc_exportData;
};
"end1" call BIS_fnc_endMission; // Ends mission for everyone
```

## Credits
- Created by MisterGoodson (aka Goodson [3CB]).
- [3 Commando Brigade](http://www.3commandobrigade.com/) for testing and moral-boosting.
- [Leaflet](http://www.leafletjs.com/) - an awesome JS interactive map library.
