#!/usr/bin/env python3

import sys
import numpy as np


# Errors
class BadLevelFormat: pass


# MAIN
if __name__ == '__main__':

    filein = ''
    fileout = ''

    try:
        filein = sys.argv[1]
        fileout = sys.argv[2]
    except IndexError:
        print('[Argument error]: filein and fileout not given')
        exit(1)

    # Load file
    level = open(filein)
    tiles = np.zeros([30, 32], dtype=np.int8)
    row_i = 0
    for row in level:
        if row_i >= 30:
            break
        col_i = 0
        for tile in row:
            if col_i >= 32:
                break
            if not tile == ' ':
                tiles[row_i][col_i] = 1
            col_i += 1
        row_i += 1

    # Save File
    outfile = open( fileout, 'wb' )
    outfile.write(tiles)
