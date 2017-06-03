#ifndef CVOXEL_READWRITER_H
#define CVOXEL_READWRITER_H
#include "voxel.h"

void signal_create_volume(char *volumeName);
void signal_write_voxel(voxel *v);
voxel *signal_read_voxel(int x, int y, int z);

#endif
