#include "x\ocap\addons\main\script_component.hpp"
_dead = [];
{
    _x params ["_projectile","_unit","_frame","_lastPos"];
    if(!alive _projectile) {
        _unitData = (GVAR(entitiesData) select (_unit getVariable QGVAR(id)));
        (_unitData select 2) pushBack [_frame, [_lastPos select 0, _lastPos select 1]];
        _dead pushBack _forEachIndex;
    }
    else {
        _x set [3,getpos _projectile];
    };
} foreach GVAR(projectiles);

{
    GVAR(projectiles) set [_x,0];
} foreach _dead;

GVAR(projectiles) = GVAR(projectiles) - 0;
