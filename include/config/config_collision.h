#pragma once

/**********************
 * COLLISION SETTINGS *
 **********************/

// Reduces some find_floor calls, at the cost of some barely noticeable smoothness in Mario's visual movement in a few actions at higher speeds.
// The defined number is the forward speed threshold before the change is active, since it's only noticeable at lower speeds.
#define FAST_FLOOR_ALIGN 10

// Automatically calculates the optimal collision distance for an object based on its vertices.
#define AUTO_COLLISION_DISTANCE

// Allows objects to use camera distance to determine whether to load collision if the camera is closer than Mario.
#define LOAD_OBJECT_COLLISION_NEAR_CAMERA

// Allows all surfaces types to have force, (doesn't require setting force, just allows it to be optional).
#define ALL_SURFACES_HAVE_FORCE

// Number of walls that can push Mario at once. Vanilla is 4.
#define MAX_REFERENCED_WALLS 4

// Collision data is the type that the collision system uses. All data by default is stored as an s16, but you may change it to s32.
// Naturally, that would double the size of all collision data, but would allow you to use 32 bit values instead of 16.
// Rooms are s8 in vanilla, but if you somehow have more than 255 rooms, you may raise this number.
// Currently, they *must* say as s8, because the room tables generated by literally anything are explicitly u8 and don't use a macro, making this currently infeasable.
#define COLLISION_DATA_TYPE s16
#define ROOM_DATA_TYPE s8

// Makes find_floor and find_ceil calls return the highest/lowest surface instead of just the first valid surface.
#define SLOPE_FIX

// Checks for ceilings from Mario's actual height instead of from the floor height.
#define EXPOSED_CEILINGS_FIX

// Uses the correct HOLP height rather than Mario's height when dropping a held object.
#define HOLP_HEIGHT_FIX

// Allows Mario to be in places without a floor.
// #define ALLOW_NULL_FLOORS

// Allows Mario to leave the level boundaries.
// Console will crash soon after Mario reaches about 65536 units from the area's origin.
// #define ALLOW_OUTSIDE_LEVEL_BOUNDS

// -- Mario collision constants --

// Mario's normal hitbox height. Vanilla is 160.
#define MARIO_HITBOX_HEIGHT 160

// Mario's hitbox height when in certain actions such as crouching or crawling. Vanilla is 100.
#define MARIO_SHORT_HITBOX_HEIGHT 100

// The radius of Mario's collision when checking for walls.
// Vanilla is 50.
#define MARIO_COLLISION_RADIUS_UPPER 50
// Vanilla is 24.
#define MARIO_COLLISION_RADIUS_LOWER 24

// Vanilla is 110.
#define MARIO_COLLISION_RADIUS_WATER 110

// Vanilla is 60.
#define MARIO_PUNCH_KICK_RADIUS (MARIO_COLLISION_RADIUS_UPPER + 10)

// The height of Mario's collision when checking for walls.
// Vanilla is 60.
#define MARIO_COLLISION_OFFSET_GROUND_UPPER 60
// Vanilla is 30.
#define MARIO_COLLISION_OFFSET_GROUND_LOWER 30

// Vanilla is 150.
#define MARIO_COLLISION_OFFSET_AIR_UPPER 150
// Vanilla is 30.
#define MARIO_COLLISION_OFFSET_AIR_LOWER 30

// Vanilla is 10.
#define MARIO_COLLISION_OFFSET_WATER 10

// Vanilla is(MARIO_HITBOX_HEIGHT / 2).
#define MARIO_COLLISION_OFFSET_DEBUG_FREE_MOVE (MARIO_HITBOX_HEIGHT / 2)

// Vanilla is 50.
#define MARIO_COLLISION_OFFSET_HANGING 50

// Vanilla is 60.
#define MARIO_COLLISION_OFFSET_TWIRLING 60

// The height offset of Mario's hands when grabbing a pole. Vanilla is 100.
#define MARIO_POLE_GRAB_OFFSET 100

// Vanilla is (MARIO_HITBOX_HEIGHT / 2).
#define MARIO_PUNCH_KICK_HEIGHT (MARIO_HITBOX_HEIGHT / 2)

// The distance from the ceiling Mario is while hanging/grabbing it. Vanilla is 144.
#define MARIO_HANGING_HEIGHT_OFFSET 144

// The distance from Mario to check for ledge grabs laterally.
#define MARIO_LEDGE_GRAB_DISTANCE (MARIO_COLLISION_RADIUS_UPPER + 10)

// The minimum number of units above Mario's origin a floor must be for Mario to be able to ledge grab on it. Vanilla is 100.
#define LEDGE_GRAB_MIN_HEIGHT 100

// The maximum number of units above Mario's origin a floor must be for Mario to be able to ledge grab on it. Vanilla is 160.
#define LEDGE_GRAB_MAX_HEIGHT MARIO_HITBOX_HEIGHT
