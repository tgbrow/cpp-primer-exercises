#!/usr/bin/python

import argparse
import os
import re
import subprocess

parser = argparse.ArgumentParser(description='Run `make (clean)` for all exercises.')
parser.add_argument('-c', '--clean', action='store_true', help='Run `make clean` rather than just `make`.')
args = parser.parse_args()

subdirs = [f for f in os.listdir('.') if re.match(r'[0-9][{2}_[0-9]{2}', f)]

for subdir in subdirs:
    if 'Makefile' in os.listdir(subdir):
        os.chdir(subdir)
        if args.clean:
            subprocess.call(['make', 'clean'])
        else:
            subprocess.call(['make'])
        os.chdir('..')
