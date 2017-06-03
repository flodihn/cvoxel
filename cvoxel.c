#include <stdlib.h>
#include <stdio.h>

#include "cvoxel.h"
#include "cvoxel_readwriter.h"

void cvoxel_init() {
    printf("Initializing cvoxel...\n");
    create_volume((char *) "testvol");
}

void create_volume(char *volumeName) {
    signal_create_volume(volumeName);
}

