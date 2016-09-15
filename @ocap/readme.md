<p align="center">
    <img src="https://camo.githubusercontent.com/9a4e1469755474a39f85f2e37c239d665f0eddbd/68747470733a2f2f692e696d6775722e636f6d2f345a313642384a2e706e67" width="480">
</p>

<p align="center">
    <a href="https://github.com/mistergoodson/OCAP/releases/latest">
        <img src="https://img.shields.io/badge/Version-0.5.1-blue.svg?style=flat-square" alt="OCAP Version">
    </a>
    <a href="https://github.com/mistergoodson/OCAP/issues">
        <img src="https://img.shields.io/github/issues-raw/mistergoodson/OCAP.svg?style=flat-square&label=Issues" alt="OCAP Issues">
    </a>
    <a href="https://github.com/mistergoodson/OCAP/releases">
        <img src="https://img.shields.io/github/downloads/mistergoodson/OCAP/total.svg?style=flat-square&label=Downloads" alt="OCAP Downloads">
    </a>
    <a href="https://github.com/mistergoodson/OCAP/blob/master/LICENSE">
        <img src="https://img.shields.io/badge/License-GPLv3-red.svg?style=flat-square" alt="OCAP License">
    </a>
</p>

<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.
</p>

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
