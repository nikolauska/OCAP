<p align="center">
    <img src="https://i.imgur.com/4Z16B8J.png" width="480">
    <img src="https://i.imgur.com/67L12wKl.jpg" width="480">
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
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.</strong></sup>
    <sup><strong><a href="http://www.3commandobrigade.com:8080/ocap-demo/">Live Web Demo</a></strong></sup>
</p>

## What is it?
OCAP is a **game-changing** tool that allows the recording and playback of operations on an interactive (web-based) map.
Reveal where the enemy were located, discover how each group carried out their assaults, and find out who engaged who, when, and what with.
Use it simply for fun or as a training tool to see how well your group performs on ops.

## Overview

* Interactive web-based playback. All you need is a browser.
* Captures positions of all units and vehicles throughout an operation.
* Captures events such as shots fired, kills, and hits.
* Event log displays events as they happened in realtime.
* Clicking on a unit lets you follow them.
* Server based capture - no mods required for clients.

## Running OCAP
Capture automatically begins when server becomes populated (see userconfig for settings).

To end and export capture data, call the following (server-side):

`[] call ocap_fnc_exportData;`

**Tip:** You can use the above function in a trigger.
e.g. Create a trigger that activates once all objectives complete. Then on activiation:
```
if (isServer) then {
    [] call ocap_fnc_exportData;
};

"end1" call BIS_fnc_endMission; // Ends mission for everyone
```

## Credits

* [3 Commando Brigade](http://www.3commandobrigade.com/) for testing and moral-boosting.
* [Leaflet](http://leafletjs.com/) - an awesome JS interactive map library.
* Maca134 for his tutorial on [writing Arma extensions in C#](http://maca134.co.uk/tutorial/write-an-arma-extension-in-c-sharp-dot-net/).
