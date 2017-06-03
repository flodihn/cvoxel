#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "cvoxel_readwriter.h"

void make_dir(char *dirName);

void signal_create_volume(char *volumeName) {
    make_dir(volumeName);   
    std::cout << "Signal create new volume" << std::endl;
}

void signal_write_voxel(voxel *v) {
}

voxel *signal_read_voxel(int x, int y, int z) {
    voxel *vox = new voxel();
    return vox;
}

void make_dir(char *dirName) {
    struct stat st = {0};
    if(stat(dirName, &st) == -1) {
        mkdir(dirName, 0700);
    }
}
