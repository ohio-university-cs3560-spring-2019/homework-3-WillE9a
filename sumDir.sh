#!/bin/sh
wc * > newtempfile.txt
python sumDir.py
rm newtempfile.txt #we dont need to keep this file, just clutter
