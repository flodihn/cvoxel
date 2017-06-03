#ifndef VOXEL_H
#define VOXEL_H

typedef struct {
    signed short matId;   
    unsigned short x;
    unsigned short y;
    unsigned short z;
    bool corner1;
    bool corner2;
    bool corner3;
    bool corner4;
} voxel;

#endif
